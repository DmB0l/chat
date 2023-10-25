//
// Created by alex on 24.10.2023.
//

#ifndef CHAT_SERVER_H
#define CHAT_SERVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QThread>
#include <QHostAddress>


#include "connection/Connection.h"


class Server : public QObject {
    Q_OBJECT
public:
    Server();
    ~Server();

private:
    int m_counterConnection = 0;


};


#endif //CHAT_SERVER_H
