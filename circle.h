#ifndef CIRCLE_H
#define CIRCLE_H

#include <QGraphicsScene>
#include "sphere.h"

class Circle : public Sphere
{
    public:
        Circle(QPoint coord1, QPoint size1);
};

#endif // CIRCLE_H
