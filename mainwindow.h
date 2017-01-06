#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QDebug>
#include <QPushButton>
#include <memory>
#include "icmpsender.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setInformation();

    QLineEdit *macAddrText;
    QPushButton *confirmMAC;
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    std::shared_ptr<ICMPSender> icmpsender;
};

#endif // MAINWINDOW_H
