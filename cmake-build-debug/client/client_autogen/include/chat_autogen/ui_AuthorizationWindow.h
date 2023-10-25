/********************************************************************************
** Form generated from reading UI file 'AuthorizationWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONWINDOW_H
#define UI_AUTHORIZATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthorizationWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QPlainTextEdit *TE_passw;
    QPushButton *PB_enter;
    QPlainTextEdit *TE_email;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *PB_reg;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QLabel *Label_warningMess;

    void setupUi(QMainWindow *AuthorizationWindow)
    {
        if (AuthorizationWindow->objectName().isEmpty())
            AuthorizationWindow->setObjectName(QString::fromUtf8("AuthorizationWindow"));
        AuthorizationWindow->resize(500, 455);
        centralwidget = new QWidget(AuthorizationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 6, 4, 1, 1);

        TE_passw = new QPlainTextEdit(centralwidget);
        TE_passw->setObjectName(QString::fromUtf8("TE_passw"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TE_passw->sizePolicy().hasHeightForWidth());
        TE_passw->setSizePolicy(sizePolicy);
        TE_passw->setMinimumSize(QSize(200, 0));
        TE_passw->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(TE_passw, 3, 2, 1, 2);

        PB_enter = new QPushButton(centralwidget);
        PB_enter->setObjectName(QString::fromUtf8("PB_enter"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PB_enter->sizePolicy().hasHeightForWidth());
        PB_enter->setSizePolicy(sizePolicy1);
        PB_enter->setMinimumSize(QSize(0, 25));
        PB_enter->setMaximumSize(QSize(16777215, 16777215));
        PB_enter->setLayoutDirection(Qt::LeftToRight);
        PB_enter->setStyleSheet(QString::fromUtf8("/*margin-left: 50px;\n"
"margin-right: 50px;*/"));

        gridLayout->addWidget(PB_enter, 6, 1, 1, 3);

        TE_email = new QPlainTextEdit(centralwidget);
        TE_email->setObjectName(QString::fromUtf8("TE_email"));
        sizePolicy.setHeightForWidth(TE_email->sizePolicy().hasHeightForWidth());
        TE_email->setSizePolicy(sizePolicy);
        TE_email->setMinimumSize(QSize(200, 0));
        TE_email->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(TE_email, 2, 2, 1, 2);

        verticalSpacer = new QSpacerItem(100, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 9, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 8, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 8, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 7, 2, 1, 1);

        PB_reg = new QPushButton(centralwidget);
        PB_reg->setObjectName(QString::fromUtf8("PB_reg"));
        PB_reg->setMinimumSize(QSize(0, 25));
        PB_reg->setStyleSheet(QString::fromUtf8("/*margin-left: 50px;\n"
"margin-right: 50px;*/"));

        gridLayout->addWidget(PB_reg, 8, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 6, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 1, 1, 1);

        Label_warningMess = new QLabel(centralwidget);
        Label_warningMess->setObjectName(QString::fromUtf8("Label_warningMess"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Label_warningMess->sizePolicy().hasHeightForWidth());
        Label_warningMess->setSizePolicy(sizePolicy4);
        Label_warningMess->setMinimumSize(QSize(300, 40));
        Label_warningMess->setMaximumSize(QSize(300, 16777215));
        Label_warningMess->setAlignment(Qt::AlignCenter);
        Label_warningMess->setWordWrap(true);

        gridLayout->addWidget(Label_warningMess, 10, 1, 1, 3);

        AuthorizationWindow->setCentralWidget(centralwidget);

        retranslateUi(AuthorizationWindow);

        QMetaObject::connectSlotsByName(AuthorizationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AuthorizationWindow)
    {
        AuthorizationWindow->setWindowTitle(QApplication::translate("AuthorizationWindow", "MainWindow", nullptr));
        PB_enter->setText(QApplication::translate("AuthorizationWindow", "\320\222\321\205\320\276\320\264", nullptr));
        PB_reg->setText(QApplication::translate("AuthorizationWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_3->setText(QApplication::translate("AuthorizationWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QApplication::translate("AuthorizationWindow", "Pass", nullptr));
        label->setText(QApplication::translate("AuthorizationWindow", "Email", nullptr));
        Label_warningMess->setText(QApplication::translate("AuthorizationWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 \321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\276\320\274...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationWindow: public Ui_AuthorizationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONWINDOW_H
