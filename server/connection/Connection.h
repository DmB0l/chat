//
// Created by alex on 24.10.2023.
//

#ifndef CHAT_CONNECTION_H
#define CHAT_CONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>


class Connection : public QObject {
private:
    QTcpSocket *m_socket;

public:
    Connection(QTcpSocket *socket);


public slots:
    void onStarted();

private slots:
    void onReadyRead();

};


#endif //CHAT_CONNECTION_H
