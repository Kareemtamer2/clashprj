/*#ifndef STARTMENU_H
#define STARTMENU_H
#include<QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include<QBrush>
class startmenu: public QGraphicsRectItem
{
public:
    startmenu(QString name,QGraphicsItem *ptr=NULL);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent  *event);
    void hoverleaveEvent(QGraphicsSceneHoverEvent *event);
signals:
   void clicked();
private:
    QString text;
};

#endif // STARTMENU_H
*/
