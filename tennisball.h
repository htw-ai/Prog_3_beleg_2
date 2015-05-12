#ifndef TENNISBALL_H
#define TENNISBALL_H

#include <QGraphicsScene>
#include "sphere.h"

/** @brief inherits from Sphere
 *
 * gets rid of gravity and slowdown on collision
 */
class TennisBall : public Sphere
{
    public:
        TennisBall(QPoint coord1, QPoint size1);
    private:
        virtual void flipX();
        virtual void flipY();
        virtual void gravity();
};

#endif // TENNISBALL_H
