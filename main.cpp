#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include "icmpsender.h"

void hello()
{
    qDebug() << "Hello()";
}

bool isFormat(QString macAddr)
{
    return true;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
