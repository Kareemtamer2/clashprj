#include "baseboard.h"

Baseboard::Baseboard()
{
    //setPixmap(QPixmap(":/images/fence1.png").scaled(30,30));
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1050,800);
    scene.setSceneRect(0,0,1050,800);
    QPixmap bgImage(":/images/backg1.jpeg");
    scene.setBackgroundBrush(bgImage.scaled(scene.width(),scene.height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    setScene(&scene);
}

void Baseboard::background()
{}

