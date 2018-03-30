#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    qDebug() <<"new window clicked";
    //when the new window is clicked we will create a new dialog

    /*
    MyDialog mDialog;
    //modal type:you can not do anything on the main window
    mDialog.setModal(true);
    mDialog.exec();
    */

    //create dialog on heap , multiple instances also possible

    mDialog = new MyDialog(this);
    mDialog -> show();
}
