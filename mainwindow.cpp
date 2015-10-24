#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow_client.h"
#include "mainwindow_developer.h"
#include "mainwindow_manager.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoginButton_clicked()
{
    QString type = ui->comboBox->currentText();
    if(type == "manager")
        {
            this->hide();
            MainWindow_Manager *ui_man;
            ui_man = new MainWindow_Manager();
            ui_man->show();
        } else if(type == "developer")
        {
            this->hide();
            MainWindow_Developer *ui_dev;
            ui_dev = new MainWindow_Developer();
            ui_dev->show();
        } else if (type == "client")
        {
            this->hide();
            MainWindow_Client *ui_cli;
            ui_cli = new MainWindow_Client();
            ui_cli->show();
        }
}
