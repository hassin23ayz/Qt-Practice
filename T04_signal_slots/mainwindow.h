#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

/*
 * mainWindow.ui form has this corresponding class
 * base class is QMainWindow
 *
 * widget is anything to show on screen , e.g. a Button, slider , window ,dialog
 * window is a top lebel widget with a titlebar and border
 * dialog is a special kind of window , usually temporary , used to present info to user
 *        or get input from user
 */

class MainWindow : public QMainWindow
{
    Q_OBJECT //it turns object made by this class into Qt Object

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
