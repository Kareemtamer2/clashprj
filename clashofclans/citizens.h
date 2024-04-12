#ifndef CITIZENS_H
#define CITIZENS_H
#include <QGraphicsPixmapItem>
#include <QObject>//
class citizens:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    citizens();
};

#endif // CITIZENS_H
