#include "circle.h"
#include <QtGui>

Circle::Circle(int a, int b, int c, QWidget *parent) : QWidget(parent), x(a), y(b), r(c)
{
    void paintEvent();
}
void Circle::paintEvent(QPaintEvent *e)
{
    QPainter painter;
    painter.begin(this);
    painter.setBrush(Qt::red);
    painter.drawEllipse(x, y, r, r);
    painter.end();
}

