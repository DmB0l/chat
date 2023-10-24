//
// Created by alex on 24.10.2023.
//

#include "Server.h"

Server::Server() {
    QThread::currentThread()->setObjectName("Main thread");

    QTcpServer *server = new QTcpServer(this);
    if(!server->listen(QHostAddress::Any, 5678)) // запуск сервера на порту 1234
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started!";
    }

    connect(server, &QTcpServer::newConnection, [=]()
    {
//        MyThread *thread = new MyThread(server->nextPendingConnection());
//        thread->setObjectName("nameeee");
//        thread->start();

        Connection *connection = new Connection(server->nextPendingConnection());

//        QThread *thread = new QThread();
//        thread->setObjectName("connection" + QString::number(m_counterConnection));

//        connection->moveToThread(thread);
//        connect(thread, &QThread::started, connection, &Connection::onStarted);
//        thread->start();

//        m_counterConnection++;
    });
}

Server::~Server() {

}
