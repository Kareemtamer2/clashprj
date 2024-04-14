#include "background.h"
#include "basedesign.h"
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

    QFile file(":/images/base1.txt");
    file.open(QIODevice::ReadOnly);
    int txtdata[10][10];
    QString data;
    QTextStream stream(&file);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            stream >> data;
            txtdata[i][j] = data.toInt();
        }
    }

    QPixmap space(":/images/clashgrass.jpeg");
    QPixmap castle(":/images/base1.png");
    QPixmap canon(":/images/cannon1.png");
    QPixmap fence(":/images/fence1.png");

    // QGraphicsPixmapItem *a[100];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (txtdata[i][j] == 3) {
                qDebug() << txtdata[i][j];
                QGraphicsPixmapItem *a = new QGraphicsPixmapItem;
                a->setPixmap(fence);
                a->setPos(i * 100, j*100);
                scene->addItem(a);
                // a++;
            } /*else if (txtdata[i][j] == 0) {
                QGraphicsPixmapItem *a = new QGraphicsPixmapItem;

                a->setPixmap(space);

                a->setPos(i * 100, j);
                scene->addItem(a);
                // a++;

            }*/ else if (txtdata[i][j] == 1) {
                QGraphicsPixmapItem *a = new QGraphicsPixmapItem;
                a->setPixmap(castle);
                a->setPos(i * 100, j *100);
                scene->addItem(a);
                // a++;
            } else if (txtdata[i][j] == 2) {
                QGraphicsPixmapItem *a = new QGraphicsPixmapItem;

                a->setPixmap(canon);

                a->setPos(i * 100, j*100);
                scene->addItem(a);
                // a++;
            }
        }
    }
}
