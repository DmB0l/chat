#include "AuthorizationWindow.h"
#include "chat_autogen/ui_AuthorizationWindow.h"

AuthorizationWindow::AuthorizationWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AuthorizationWindow) {
    ui->setupUi(this);

    m_socket = new QTcpSocket(this);
    m_socket->connectToHost(QHostAddress::LocalHost, 5678); // адрес и порт сервера

    //таймер на подключение к серверу
    QTimer *timer = new QTimer();
    connect(timer, &QTimer::timeout, [=](){
        //превышено максимальное количество попыток на соединение
        if(m_counterConnection >= MAX_COUNT_CONNECT_TO_TCP) {
            timer->stop();
            ui->Label_warningMess->setText("Соединение с сервером не удалось");
            timer->deleteLater();
        }
        //произошло соединение с сервером
        else if (m_socket->waitForConnected(3000)) { // ожидание подключения к серверу
            timer->stop();
            ui->Label_warningMess->setText("Соединение с сервером прошло успешно");
            timer->deleteLater();

            connect(m_socket, &QTcpSocket::readyRead, this, &AuthorizationWindow::onReadyRead);
            connect(m_socket, &QTcpSocket::disconnected, this, &AuthorizationWindow::onDisconnect);
            connect(ui->PB_enter, &QPushButton::clicked, this, &AuthorizationWindow::onEnterButton);
            connect(ui->PB_reg, &QPushButton::clicked, this, &AuthorizationWindow::onRegButton);
        }
        else {
            timer->setInterval(5000);
            m_socket->connectToHost(QHostAddress::LocalHost, 5678); // адрес и порт сервера
            ui->Label_warningMess->setText("Соединение с сервером...");
        }
        m_counterConnection++;
    });
    timer->start(10);
}

AuthorizationWindow::~AuthorizationWindow()
{
    delete ui;
}

void AuthorizationWindow::onReadyRead() {
    QVector<QByteArray> message;
    while (m_socket->canReadLine()) {
        QByteArray data;
        data = m_socket->readLine();
        data = data.left(data.length() - 1);
        message.push_back(data);
    }
    for (int i = 0; i < message.length(); i++) {
        qDebug() << QString::fromUtf8(message.at(i));
        ui->Label_warningMess->setText(QString::fromUtf8(message.at(i)));
    }
}

void AuthorizationWindow::onDisconnect() {
    m_socket->close();
    m_socket->deleteLater();
}

void AuthorizationWindow::onEnterButton() {
    if(checkFields()) {
        QByteArray data = "command log in\n" + ui->TE_email->toPlainText().toUtf8() + "\n" + ui->TE_passw->toPlainText().toUtf8();
        m_socket->write(data + '\n'); // отправка данных
        m_socket->waitForBytesWritten();
    }
}

void AuthorizationWindow::onRegButton() {
    if(checkFields()) {
        QByteArray data = "command reg\n" + ui->TE_email->toPlainText().toUtf8() + "\n" + ui->TE_passw->toPlainText().toUtf8();
        m_socket->write(data + '\n'); // отправка данных
        m_socket->waitForBytesWritten();
    }
}

bool AuthorizationWindow::checkFields() {
    if(ui->TE_email->toPlainText().isEmpty() && ui->TE_passw->toPlainText().isEmpty()) {
        ui->Label_warningMess->setText("Поля должны быть заполнены");
        return false;
    }
    else if(ui->TE_email->toPlainText().isEmpty()) {
        ui->Label_warningMess->setText("Поле email должно быть заполнено");
        return false;
    }
    else if(ui->TE_passw->toPlainText().isEmpty()) {
        ui->Label_warningMess->setText("Поле password должно быть заполнено");
        return false;
    }
    return true;
}

