/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QSplitter *splitter_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QTimeEdit *timeEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QSplitter *splitter_3;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_15;
    QSplitter *splitter;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QGroupBox *groupBox_4;
    QSplitter *splitter_5;
    QLCDNumber *lcdNumber_11;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_9;
    QSplitter *splitter_6;
    QLabel *label_22;
    QLabel *label_20;
    QLabel *label_17;
    QWidget *widget1;
    QFormLayout *formLayout;
    QLabel *label_21;
    QLabel *label_19;
    QLabel *label_18;
    QGroupBox *groupBox_5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_23;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(618, 728);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 491, 81));
        splitter_4 = new QSplitter(groupBox);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(10, 40, 431, 29));
        splitter_4->setOrientation(Qt::Horizontal);
        radioButton = new QRadioButton(splitter_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        splitter_4->addWidget(radioButton);
        radioButton_2 = new QRadioButton(splitter_4);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        splitter_4->addWidget(radioButton_2);
        radioButton_3 = new QRadioButton(splitter_4);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        splitter_4->addWidget(radioButton_3);
        pushButton_3 = new QPushButton(splitter_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        splitter_4->addWidget(pushButton_3);
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 361, 81));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 331, 31));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        timeEdit = new QTimeEdit(widget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        horizontalLayout_2->addWidget(timeEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 180, 281, 171));
        splitter_3 = new QSplitter(groupBox_3);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(15, 38, 131, 121));
        splitter_3->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_3);
        label->setObjectName(QStringLiteral("label"));
        splitter_3->addWidget(label);
        label_9 = new QLabel(splitter_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        splitter_3->addWidget(label_9);
        label_11 = new QLabel(splitter_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        splitter_3->addWidget(label_11);
        label_13 = new QLabel(splitter_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        splitter_3->addWidget(label_13);
        label_15 = new QLabel(splitter_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        splitter_3->addWidget(label_15);
        splitter = new QSplitter(groupBox_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(160, 40, 64, 115));
        splitter->setOrientation(Qt::Vertical);
        lcdNumber = new QLCDNumber(splitter);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        splitter->addWidget(lcdNumber);
        lcdNumber_5 = new QLCDNumber(splitter);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        splitter->addWidget(lcdNumber_5);
        lcdNumber_6 = new QLCDNumber(splitter);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        splitter->addWidget(lcdNumber_6);
        lcdNumber_7 = new QLCDNumber(splitter);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        splitter->addWidget(lcdNumber_7);
        lcdNumber_8 = new QLCDNumber(splitter);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));
        splitter->addWidget(lcdNumber_8);
        splitter_2 = new QSplitter(groupBox_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(230, 40, 41, 111));
        splitter_2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_2->addWidget(label_2);
        label_10 = new QLabel(splitter_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        splitter_2->addWidget(label_10);
        label_12 = new QLabel(splitter_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        splitter_2->addWidget(label_12);
        label_14 = new QLabel(splitter_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        splitter_2->addWidget(label_14);
        label_16 = new QLabel(splitter_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        splitter_2->addWidget(label_16);
        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(310, 180, 181, 141));
        splitter_5 = new QSplitter(groupBox_4);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(80, 40, 61, 81));
        splitter_5->setOrientation(Qt::Vertical);
        lcdNumber_11 = new QLCDNumber(splitter_5);
        lcdNumber_11->setObjectName(QStringLiteral("lcdNumber_11"));
        splitter_5->addWidget(lcdNumber_11);
        lcdNumber_10 = new QLCDNumber(splitter_5);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));
        splitter_5->addWidget(lcdNumber_10);
        lcdNumber_9 = new QLCDNumber(splitter_5);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));
        splitter_5->addWidget(lcdNumber_9);
        splitter_6 = new QSplitter(groupBox_4);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(15, 38, 41, 81));
        splitter_6->setOrientation(Qt::Vertical);
        label_22 = new QLabel(splitter_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        splitter_6->addWidget(label_22);
        label_20 = new QLabel(splitter_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        splitter_6->addWidget(label_20);
        label_17 = new QLabel(splitter_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        splitter_6->addWidget(label_17);
        widget1 = new QWidget(groupBox_4);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(150, 40, 16, 81));
        formLayout = new QFormLayout(widget1);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(widget1);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_21);

        label_19 = new QLabel(widget1);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_19);

        label_18 = new QLabel(widget1);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_18);

        groupBox_5 = new QGroupBox(Dialog);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 390, 591, 321));
        widget2 = new QWidget(groupBox_5);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 30, 516, 30));
        horizontalLayout_15 = new QHBoxLayout(widget2);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_23 = new QLabel(widget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_14->addWidget(label_23);

        radioButton_4 = new QRadioButton(widget2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_14->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(widget2);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout_14->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(widget2);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout_14->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(widget2);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout_14->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(widget2);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout_14->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(widget2);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        horizontalLayout_14->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(widget2);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));

        horizontalLayout_14->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(widget2);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));

        horizontalLayout_14->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(widget2);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));

        horizontalLayout_14->addWidget(radioButton_12);

        radioButton_13 = new QRadioButton(widget2);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));

        horizontalLayout_14->addWidget(radioButton_13);


        horizontalLayout_15->addLayout(horizontalLayout_14);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "Mode", nullptr));
        radioButton->setText(QApplication::translate("Dialog", "Master", nullptr));
        radioButton_2->setText(QApplication::translate("Dialog", "Slave", nullptr));
        radioButton_3->setText(QApplication::translate("Dialog", "Independent", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "write", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Time", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Read", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Write", nullptr));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Electrical data", nullptr));
        label->setText(QApplication::translate("Dialog", "Voltage:", nullptr));
        label_9->setText(QApplication::translate("Dialog", "Current:", nullptr));
        label_11->setText(QApplication::translate("Dialog", "Power:", nullptr));
        label_13->setText(QApplication::translate("Dialog", "Max Power", nullptr));
        label_15->setText(QApplication::translate("Dialog", "Consumption:", nullptr));
        label_2->setText(QApplication::translate("Dialog", "V", nullptr));
        label_10->setText(QApplication::translate("Dialog", "A", nullptr));
        label_12->setText(QApplication::translate("Dialog", "W", nullptr));
        label_14->setText(QApplication::translate("Dialog", "W", nullptr));
        label_16->setText(QApplication::translate("Dialog", "Whr", nullptr));
        groupBox_4->setTitle(QApplication::translate("Dialog", "Temperature", nullptr));
        label_22->setText(QApplication::translate("Dialog", "Max", nullptr));
        label_20->setText(QApplication::translate("Dialog", "Min", nullptr));
        label_17->setText(QApplication::translate("Dialog", "Now:", nullptr));
        label_21->setText(QApplication::translate("Dialog", "C", nullptr));
        label_19->setText(QApplication::translate("Dialog", "C", nullptr));
        label_18->setText(QApplication::translate("Dialog", "C", nullptr));
        groupBox_5->setTitle(QApplication::translate("Dialog", "Led Control Panel", nullptr));
        label_23->setText(QApplication::translate("Dialog", "Step:", nullptr));
        radioButton_4->setText(QApplication::translate("Dialog", "0", nullptr));
        radioButton_5->setText(QApplication::translate("Dialog", "1", nullptr));
        radioButton_6->setText(QApplication::translate("Dialog", "2", nullptr));
        radioButton_7->setText(QApplication::translate("Dialog", "3", nullptr));
        radioButton_8->setText(QApplication::translate("Dialog", "4", nullptr));
        radioButton_9->setText(QApplication::translate("Dialog", "5", nullptr));
        radioButton_10->setText(QApplication::translate("Dialog", "6", nullptr));
        radioButton_11->setText(QApplication::translate("Dialog", "7", nullptr));
        radioButton_12->setText(QApplication::translate("Dialog", "8", nullptr));
        radioButton_13->setText(QApplication::translate("Dialog", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
