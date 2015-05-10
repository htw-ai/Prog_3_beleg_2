#ifndef DOT_H
#define DOT_H

#include <QGraphicsScene>
#include "sphere.h"

class Dot : public Sphere
{
    public:
        Dot(QPoint coord1, QPoint size1);
};

#endif // DOT_H
