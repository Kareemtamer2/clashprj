#ifndef BASEBOARD_H
#define BASEBOARD_H

#include <QMainWindow>

class Baseboard : public QMainWindow
{
    Q_OBJECT

public:
    Baseboard(QWidget *parent = nullptr);
    ~Baseboard();
};
#endif // BASEBOARD_H
