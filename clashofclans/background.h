#ifndef BACKGROUND_H
#define BACKGROUND_H
#include "QtMultimedia/qaudiooutput.h"
#include "QtMultimedia/qmediaplayer.h"
#include <QGraphicsView>
#include <QGraphicsScene>
class background :public QGraphicsView
{
public:
    background();
    void makebackground();
    QAudioOutput* fighttheme=new QAudioOutput();
    QMediaPlayer *fightsong=new QMediaPlayer();
    QGraphicsScene *scene=new QGraphicsScene();
};

#endif // BACKGROUND_H
