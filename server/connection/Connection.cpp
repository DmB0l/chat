//
// Created by alex on 24.10.2023.
//

#include "Connection.h"

Connection::Connection(QTcpSocket *socket) : m_socket(socket) {

    QThread *thread = new QThread();
    thread->setObjectName("connection");

    m_socket->setParent(nullptr);
    m_socket->moveToThread(thread);

    connect(thread , &QThread::started, this, &Connection::onStarted);
    thread->start();
}



void Connection::onStarted() {
    connect(m_socket, &QTcpSocket::readyRead, this, &Connection::onReadyRead, Qt::DirectConnection);

    connect(m_socket, &QTcpSocket::disconnected, [=](){
        qDebug() << QThread::currentThread()->objectName();
        m_socket->close();
        m_socket->deleteLater();
    });
}

void Connection::onReadyRead() {
    qDebug() << QThread::currentThread()->objectName();
    QByteArray data = m_socket->readAll(); // чтение полученных данных
    qDebug() << QString::fromUtf8(data);
}


