#ifndef SPHERE_H
#define SPHERE_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <cstdlib>

class Sphere
{
public:
    Sphere(QPoint coord1, QPoint size1);
    Sphere();
    void move();
    double getX() { return coord.x(); };
    double getY() { return coord.y(); };
    double getRad() { return rad; };
    double getColor() { return color; };
    double getBrush() { return brush; };
protected:
    QPoint coord;
    QPoint step;
    QPoint size;
    int color, brush;
    double rad = 3.0;
    bool collisionX();
    bool collisionY();
    virtual void flipX();
    virtual void flipY();
    virtual void gravity();
    QPoint calcStep();
    int calcColor();
};


#endif // SPHERE_H
