//
// Created by alex on 24.10.2023.
//

#ifndef CHAT_CONNECTION_H
#define CHAT_CONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include <QtSql>
#include <QSqlDatabase>


class Connection : public QObject {
    Q_OBJECT
private:
    QTcpSocket *m_socket;
    QSqlDatabase db;

    void loginQuery(QVector<QByteArray> message);
    void regQuery(QVector<QByteArray> message);

public:
    Connection(QTcpSocket *socket, int numberConnection);

private slots:
    void onReadyRead();
    void onDisconnect();

signals:
    void disconnect();
};


#endif //CHAT_CONNECTION_H
