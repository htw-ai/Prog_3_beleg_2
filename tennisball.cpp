#include "tennisball.h"

TennisBall::TennisBall(QPoint coord1, QPoint size1)
{
    coord = coord1;
    step  = calcStep();
    size = size1;
    color = 12;
    brush = 1;
}

void TennisBall::gravity(){}

void TennisBall::flipX()
{
    step.setX(step.x() * -1);
}

void TennisBall::flipY()
{
    step.setY(step.y() * -1);
}
