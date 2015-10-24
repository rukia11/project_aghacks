#include "mainwindow_developer.h"
#include "ui_mainwindow_developer.h"

MainWindow_Developer::MainWindow_Developer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_Developer)
{
    ui->setupUi(this);
}

MainWindow_Developer::~MainWindow_Developer()
{
    delete ui;
}
