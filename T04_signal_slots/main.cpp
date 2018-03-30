#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString mStr = "Hello T04 signal & slots";
    qDebug() << mStr;

    MainWindow w;
    w.show();

    return a.exec();
}
