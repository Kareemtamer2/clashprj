#ifndef BASEDESIGN_H
#define BASEDESIGN_H
#include<QFile>
#include<QTextStream>
#include <QGraphicsPixmapItem>
#include <QObject>//
class basedesign: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    basedesign(QGraphicsScene *);
};

#endif // BASEDESIGN_H
