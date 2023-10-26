//
// Created by alex on 24.10.2023.
//

#include "Connection.h"

Connection::Connection(QTcpSocket *socket, int numberConnection) : m_socket(socket) {
    // создаем объект базы данных
    db = QSqlDatabase::addDatabase("QPSQL");

    // задаем параметры подключения к базе данных
    db.setHostName("localhost");
    db.setPort(5432);
    db.setDatabaseName("chat");
    db.setUserName("alex");
    db.setPassword("54212452");

    // открываем соединение с базой данных
    if (!db.open()) {
        qDebug() << "Failed to connect to database:" << db.lastError().text();
    } else {
        qDebug() << "Database is connected!!!";
    }


    QThread *thread = new QThread();
    thread->setObjectName("connection " + QString::number(numberConnection));

    m_socket->setParent(nullptr);
    m_socket->moveToThread(thread);

    connect(m_socket, &QTcpSocket::readyRead, this, &Connection::onReadyRead, Qt::DirectConnection);
    connect(m_socket, &QTcpSocket::disconnected, this, &Connection::onDisconnect, Qt::DirectConnection);
    connect(thread, &QThread::finished, thread, &QThread::deleteLater, Qt::DirectConnection);

    thread->start();
}

void Connection::onReadyRead() {


    qDebug() << QThread::currentThread()->objectName();
    QVector<QByteArray> message;
    while (m_socket->canReadLine()) {
        QByteArray data;
        data = m_socket->readLine();
        data = data.left(data.length() - 1);
        message.push_back(data);
//        qDebug() << QString::fromUtf8(data);
    }
    for (int i = 0; i < message.length(); i++) {
        qDebug() << message.at(i);
    }

    if (message.at(0) == "command log in") {
        loginQuery(message);
    }
    else if (message.at(0) == "command reg") {
        regQuery(message);
    }


}

void Connection::loginQuery(QVector<QByteArray> message) {
    auto *query = new QSqlQuery(db);

    if (!query->exec(R"(SELECT * from "UserInformation" WHERE "email" = ')" + message.at(1) + R"(' AND "password" = ')" + message.at(2) + R"(';)")) {
        qDebug() << query->lastError();
    }
    if (query->next()) {
        qDebug() << query->value(0) << query->value(1) << query->value(2);
        m_socket->write("login successful\n");
    } else {
        m_socket->write("login fail\n");
    }

    delete query;
}

void Connection::regQuery(QVector<QByteArray> message) {
    auto *query = new QSqlQuery(db);

    if (!query->exec(R"(SELECT * from "UserInformation" WHERE "email" = ')" + message.at(1) + R"(';)")) {
        qDebug() << query->lastError();
    }
    if (query->next()) {
        qDebug() << query->value(0) << query->value(1) << query->value(2);
        m_socket->write("reg email busy\n");
    } else {
        if (!query->exec(R"(INSERT INTO "UserInformation" ("email", "password") VALUES (')" + message.at(1) + R"(',')" + message.at(2) + R"(');)")) {
            qDebug() << query->lastError();
            m_socket->write("reg error\n");
        } else {
            m_socket->write("reg successful\n");
        }
    }

    delete query;
}

void Connection::onDisconnect() {
    qDebug() << "Дисконнект";
    qDebug() << QThread::currentThread()->objectName();
    m_socket->close();
    m_socket->deleteLater();
    QThread::currentThread()->quit();
    emit disconnect();
}
