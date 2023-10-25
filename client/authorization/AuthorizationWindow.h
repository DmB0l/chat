#ifndef AUTHORIZATIONWINDOW_H
#define AUTHORIZATIONWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class AuthorizationWindow; }
QT_END_NAMESPACE

class AuthorizationWindow : public QMainWindow
{
    Q_OBJECT

public:
    static const int MAX_COUNT_CONNECT_TO_TCP = 10;

    explicit AuthorizationWindow(QWidget *parent = nullptr);
    ~AuthorizationWindow();

private:
    Ui::AuthorizationWindow *ui;
    QTcpSocket *m_socket = nullptr;
    int m_counterConnection = 0;

    bool checkFields();

public slots:
    void onEnterButton();
    void onRegButton();
    void onReadyRead();
    void onDisconnect();

};
#endif // AUTHORIZATIONWINDOW_H
