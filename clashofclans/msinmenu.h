#ifndef MSINMENU_H
#define MSINMENU_H
#include <QDialog>
#include <QMediaPlayer>
#include<QAudioOutput>
namespace Ui {
class msinmenu;
}

class msinmenu : public QDialog
{
    Q_OBJECT

public:
    explicit msinmenu(QWidget *parent = nullptr);
    QAudioOutput* maintheme=new QAudioOutput();
    QMediaPlayer *mainsong=new QMediaPlayer();
    ~msinmenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::msinmenu *ui;
};

#endif // MSINMENU_H
