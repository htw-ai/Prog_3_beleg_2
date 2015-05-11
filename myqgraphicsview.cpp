#include "myqgraphicsview.h"
#include "dot.h"
#include "circle.h"
#include "tennisball.h"
#include <QPointF>
#include <QPoint>

MyQGraphicsView::MyQGraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{
    scene = new QGraphicsScene();
    initFirework(QPoint(250, 200));
    initTennisBall(QPoint(250, 200));
    this->setSceneRect(0, 0, size.x(), size.y());
    this->setScene(scene);
    startTimer(10);
}

void MyQGraphicsView::mousePressEvent(QMouseEvent * e)
{
    sphere.clear();
    initFirework(e->pos());
    initTennisBall(e->pos());
}

void MyQGraphicsView::timerEvent(QTimerEvent *event)
{
    scene->clear();
    for(int i = 0; i < sphere.size(); i++)
    {
        printSphere(sphere[i]->getX(), sphere[i]->getY(), sphere[i]->getRad(), sphere[i]->getColor(), sphere[i]->getBrush());
        sphere[i]->move();
    }
}

void MyQGraphicsView::initFirework(QPoint coord)
{
    for(int i = 0; i < sphereSize; i++)
        sphere.push_back(newSpehere(i, coord));
}

void MyQGraphicsView::initTennisBall(QPoint coord)
{
    sphere.push_back(new TennisBall(coord, size));
}

Sphere* MyQGraphicsView::newSpehere(int i, QPoint coord)
{
    if(i % 3)
        return new Circle(coord, size);
    else
        return new Dot(coord, size);
}

void MyQGraphicsView::printSphere(int x, int y, double rad, int color, int brush)
{
    scene->addEllipse(x, y, rad , rad, QPen((Qt::GlobalColor) color), QBrush((Qt::BrushStyle)brush));
}
