#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QDesktopWidget"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2,(deskdop->height()-this->height())/2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
