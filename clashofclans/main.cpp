#include <QGraphicsView>
#include <QApplication>
#include <QGraphicsPixmapItem>
#include "citizens.h"
#include "msinmenu.h"
#include "background.h"
background *back;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //declarations
    msinmenu *menu=new msinmenu();
    menu->show();
    //linker tester
    //citizens *pe=new citizens();
    //pe->setPos(200,200);
    //back->scene->addItem(pe);
    return a.exec();
}
