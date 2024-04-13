#include "msinmenu.h"
#include "background.h"
#include "levels.h"
#include "ui_msinmenu.h"
extern background *back;
msinmenu::msinmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::msinmenu)
{
    //setting up ui
    ui->setupUi(this);
    QPixmap pix(":/images/mainmenu.jpeg");
    int w =ui->back->width();
    int h =ui->back->height();
    ui->back->setPixmap(pix.scaled(w+10,h+10));
    this->setFixedSize(this->size().width(),this->size().height());
    //ui theme song
    maintheme->setVolume(100);
    mainsong->setAudioOutput(maintheme);
    mainsong->setSource(QUrl("qrc:/sounds/maintheme.mov"));
    mainsong->play();


}

msinmenu::~msinmenu()
{
    delete ui;
}

void msinmenu::on_pushButton_clicked()
{
    //function to start the game
    mainsong->stop();
    //levels *lvl=new levels;
    back=new background();
    back->show();

    //lvl->start();
    hide();

}


void msinmenu::on_pushButton_3_clicked()
{
    //this to quit the game
    hide();
    exit(0);
}

