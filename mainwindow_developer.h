#ifndef MAINWINDOW_DEVELOPER_H
#define MAINWINDOW_DEVELOPER_H

#include <QMainWindow>

namespace Ui {
class MainWindow_Developer;
}

class MainWindow_Developer : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_Developer(QWidget *parent = 0);
    ~MainWindow_Developer();

private:
    Ui::MainWindow_Developer *ui;
};

#endif // MAINWINDOW_DEVELOPER_H
