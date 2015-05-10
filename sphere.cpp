#include "sphere.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <cstdlib>

Sphere::Sphere()
{

}

Sphere::Sphere(QPoint coord1, QPoint size1)
{
    coord = coord1;
    step  = calcStep();
    size = size1;
    color = calcColor();
    brush = 2;
}

QPoint Sphere::calcStep()
{
    return QPoint((((rand() % 20) - 10) + 1), (((rand() % 20) - 15) + 1));
}

int Sphere::calcColor()
{
    return (rand() % 16);
}

void Sphere::move()
{
    coord += step;
    gravity();
    if(collisionX()) flipX();
    if(collisionY()) flipY();
}

bool Sphere::collisionX()
{
    return ((coord.x() - rad) < 0 || (coord.x() + rad) > size.x());
}

bool Sphere::collisionY()
{
    return ((coord.y() - rad) < 0 || (coord.y() + rad) > size.y());
}

void Sphere::gravity()
{
    step.setY(step.y() + 1.01);
}

void Sphere::flipX()
{
    step.setX((step.x()/1.1) * -1);
    step.setY(step.y()/1.001);
}

void Sphere::flipY()
{
    step.setY((step.y()/1.1) * -1);
    step.setX(step.x()/1.001);
}
