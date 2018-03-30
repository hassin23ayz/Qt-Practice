#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QtCore>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setCentralWidget(ui->listWidget);

    for(int i=0; i<16; i++){
        ui->listWidget->addItem("Device" + QString::number(i));
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
    mDevice->setText("Bonjour");
    mDevice->setTextColor(Qt::green);
}
