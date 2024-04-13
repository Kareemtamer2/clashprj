#include "background.h"
#include "enemy.h"

background::background()
{
    //setting background attributes
    setFixedSize(1050,800);
    scene->setSceneRect(0,0,1050,800);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //setting the background sound and audio
    QPixmap bgImage(":/images/backg1v2.png");
    scene->setBackgroundBrush(bgImage.scaled(scene->width(),scene->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    fighttheme->setVolume(70);
    fightsong->setAudioOutput(fighttheme);
    fightsong->setSource(QUrl("qrc:/sounds/26. Combat Music.mp3"));
    fightsong->play();

    //adding

    setScene(scene);
    enemy* Enemy = new enemy();
    scene->addItem(Enemy);
}
