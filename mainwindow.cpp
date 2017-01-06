#include "mainwindow.h"
#include "ui_mainwindow.h"

bool isFormat(QString macAddr);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    macAddrText = ui->lineEdit;
    confirmMAC = ui->pushButton;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setInformation()
{
    macAddrText = ui->lineEdit;
    confirmMAC = ui->pushButton;
    macAddrText->setText("Hello World");

    qDebug() << "MainWindow::setInformation()";
}

void MainWindow::on_pushButton_clicked()
{
#ifdef __DEBUG
    qDebug() << "MainWindow::on_pushButton_clicked()";
#endif
    QString macaddr = macAddrText->text();
    if(isFormat(macaddr) == false)
    {
        qDebug() << "Input error.";
        return;
    }
    else
    {
        icmpsender = std::make_shared<ICMPSender>(macaddr);
        icmpsender->Send();
    }
}
