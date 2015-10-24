#include "mainwindow_client.h"
#include "ui_mainwindow_client.h"

MainWindow_Client::MainWindow_Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_Client)
{
    ui->setupUi(this);
}

MainWindow_Client::~MainWindow_Client()
{
    delete ui;
}
