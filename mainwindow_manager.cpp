#include "mainwindow_manager.h"
#include "ui_mainwindow_manager.h"

MainWindow_Manager::MainWindow_Manager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_Manager)
{
    ui->setupUi(this);
}

MainWindow_Manager::~MainWindow_Manager()
{
    delete ui;
}
