#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QMouseEvent>
#include "sphere.h"

using namespace std;

class MyQGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MyQGraphicsView(QWidget *parent = 0);

private:
    QGraphicsScene * scene;
    vector<Sphere*> sphere;
    int sphereSize = 50;
    void printSphere(int x, int y, double rad, int color, int brush);
    void initFirework(QPoint coord);
    QPoint size = QPoint(500, 500);

protected:
    void timerEvent(QTimerEvent *event);
    Sphere* newSpehere(int i, QPoint coord);

signals:

public slots:
    void mousePressEvent(QMouseEvent * e);
};
