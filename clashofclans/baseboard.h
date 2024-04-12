#ifndef BASEBOARD_H
#define BASEBOARD_H
#include<QFile>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include<QMessageBox>//
#include<QVector>//
#include <QGraphicsPixmapItem>
#include<QObject>
class Baseboard :public QGraphicsPixmapItem, public QGraphicsView
{
    Q_OBJECT

 public:
    Baseboard();
    void background();
    QGraphicsView view;
    QGraphicsScene scene;
};
#endif // BASEBOARD_H
