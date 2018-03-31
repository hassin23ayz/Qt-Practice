#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
#include "device.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setCentralWidget(ui->listWidget);

    createDevices();

    /*
    for(int i=0; i<16; i++){
        ui->listWidget->addItem("Device" + QString::number(i));
    }*/

    std::list<Device>::iterator it = devices.begin();
    while(it != devices.end())
    {
        ui->listWidget->addItem("Device:" + (*it).getMacID());
        it++;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "copyRight Chucky 2018");
}

void MainWindow::on_pushButton_clicked()
{
    QListWidgetItem* mDevice = ui->listWidget->currentItem();
    mDevice->setTextColor(Qt::green);
}

void MainWindow::createDevices()
{
    for(int i=0; i<16; i++){
        Device mDevice;
        mDevice.setMacID("AA-BB-CC-"+QString::number(i));
        int ipArray[4] = {192,3,4,i};
        mDevice.setIpAddr(ipArray);
        mDevice.setPort(80+i);

        devices.push_back(mDevice);
    }
}
