#include "basedesign.h"
#include "background.h"
extern background* back;
basedesign::basedesign()
{
    back=new background();
    QFile file(":/images/base1.txt");
    file.open(QIODevice::ReadOnly);
    int txtdata[10][10];
    QString data;
    QTextStream stream (&file);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            stream>> data;
            txtdata[i][j]=data.toInt();
        }
    }
    QPixmap fence(":/images/fence1.png");
    QPixmap space(":/images/clashgrass.jpeg");
    QPixmap castle(":/images/base1.png");
    QPixmap canon(":/images/cannon1.png");
    QGraphicsPixmapItem txtimages[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(txtdata[i][j]== 3)
            {
             txtimages[i][j].setPixmap(fence);
            }
            else if(txtdata[i][j]== 0)
            {
                txtimages[i][j].setPixmap(space);
            }
            else if(txtdata[i][j]== 1)
            {
                txtimages[i][j].setPixmap(castle);
            }
            else if(txtdata[i][j]== 2)
            {
                txtimages[i][j].setPixmap(canon);
            }
            back->scene->addItem(&txtimages[i][j]);
        }
    }
}
