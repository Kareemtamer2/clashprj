#include "enemy.h"
#include <QPixmap>
#include <QTimer>
#include "qmath.h"

enemy::enemy(QGraphicsItem *parent)
{
//setting graphics
    setPixmap(QPixmap(":/images/enemy.png").scaled(100,100));
//set points
    points << QPointF(200,200) << QPointF (400,200);
    point_index = 0;
    dest = points[0];
    rotate_to_point(dest);

    //connect a timer to move_forward
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move_forward()));
    timer->start(150);
}

void enemy::rotate_to_point(QPointF p)
{
    QLineF in(pos(),p);
    setRotation(-1 * in.angle());
}

void enemy::move_forward()
{
    //if close to dest, p.s this stuff are not needed for m1, this is m2
    QLineF ln(pos(),dest);
    if (ln.length()<5){
        point_index++;

        //this if statement just to avoid the game from crashing due to reaching the final point on the path
        if (point_index >= points.size()){
            return;
        }
        dest = points[point_index];
        rotate_to_point(dest);
    }
    //move enemy to current angle
    int step_size = 20;
    double theta = rotation();

    double dy = step_size * qSin(qDegreesToRadians(theta));
    double dx = step_size * qCos(qDegreesToRadians(theta));

    setPos(x()+dx, y()+dy);
}
