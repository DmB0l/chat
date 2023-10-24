/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *LW_contacts;
    QVBoxLayout *verticalLayout;
    QListWidget *LW_messages;
    QGridLayout *gridLayout;
    QTextEdit *TE_message;
    QPushButton *PB_sendMessage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(929, 696);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LW_contacts = new QListWidget(centralwidget);
        LW_contacts->setObjectName(QString::fromUtf8("LW_contacts"));

        horizontalLayout->addWidget(LW_contacts);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        LW_messages = new QListWidget(centralwidget);
        LW_messages->setObjectName(QString::fromUtf8("LW_messages"));
        LW_messages->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LW_messages->sizePolicy().hasHeightForWidth());
        LW_messages->setSizePolicy(sizePolicy);
        LW_messages->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(LW_messages);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TE_message = new QTextEdit(centralwidget);
        TE_message->setObjectName(QString::fromUtf8("TE_message"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TE_message->sizePolicy().hasHeightForWidth());
        TE_message->setSizePolicy(sizePolicy1);
        TE_message->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(TE_message, 0, 0, 1, 1);

        PB_sendMessage = new QPushButton(centralwidget);
        PB_sendMessage->setObjectName(QString::fromUtf8("PB_sendMessage"));
        PB_sendMessage->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(PB_sendMessage, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        PB_sendMessage->setText(QApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
