#include "mainWindow/MainWindow.h"
#include "authorization/AuthorizationWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AuthorizationWindow w;
    w.show();
    return a.exec();
}
