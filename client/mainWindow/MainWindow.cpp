#include "MainWindow.h"
#include "chat_autogen/ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    m_socket = new QTcpSocket(this);
    m_socket->connectToHost(QHostAddress::LocalHost, 5678); // адрес и порт сервера

    if (m_socket->waitForConnected(6000)) // ожидание подключения к серверу
    {
        connect(ui->PB_sendMessage, &QPushButton::clicked, this, &MainWindow::onSendMessage);

//        QString str1 = "фыв";
//        QString str2 = "123";
//        QString str3 = "zxc";
//        QString str4 = "jkl";
//
//        QByteArray data = str1.toUtf8() + str2.toUtf8() + str3.toUtf8();
//        m_socket->write(data); // отправка данных
//        m_socket->waitForBytesWritten();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onSendMessage() {
    QByteArray data = ui->TE_message->toPlainText().toUtf8();
    m_socket->write(data); // отправка данных
    m_socket->waitForBytesWritten();
}

