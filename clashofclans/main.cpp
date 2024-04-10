#include <QGraphicsView>
#include <QApplication>
#include <QGraphicsPixmapItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //declaration
    QGraphicsView view;
    QGraphicsScene scene;
    //scene size
    view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setFixedSize(1050,800);
    scene.setSceneRect(0,0,1050,800);
    //background
    QPixmap bgImage(":/images/backg1.jpeg");
    scene.setBackgroundBrush(bgImage.scaled(scene.width(),scene.height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    //background music

    //adding to scene
    view.setScene(&scene);
    view.show();
    return a.exec();
}
