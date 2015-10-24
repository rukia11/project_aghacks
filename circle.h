#ifndef CIRCLE_H
#define CIRCLE_H

#include <QWidget>

class Circle : public QWidget
{
    Q_OBJECT
public:
    explicit Circle(int a, int b, int c, QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
signals:

public slots:

private:
    int x;
    int y;
    int r;
};

#endif // CIRCLE_H
