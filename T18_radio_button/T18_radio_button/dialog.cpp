#include "dialog.h"
#include "ui_dialog.h"
#include <QtGui>
#include <QtCore>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->radioButton_1->isChecked()){
        QMessageBox::information(this, "Status", ui->radioButton_1->text());
    }
    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "Status", ui->radioButton_2->text());
    }
    if(ui->radioButton_3->isChecked()){
        QMessageBox::information(this, "Status", ui->radioButton_3->text());
    }
}
