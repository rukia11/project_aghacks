#ifndef MAINWINDOW_CLIENT_H
#define MAINWINDOW_CLIENT_H

#include <QMainWindow>

namespace Ui {
class MainWindow_Client;
}

class MainWindow_Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_Client(QWidget *parent = 0);
    ~MainWindow_Client();

private:
    Ui::MainWindow_Client *ui;
};

#endif // MAINWINDOW_CLIENT_H
