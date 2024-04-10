#ifndef LEVELS_H
#define LEVELS_H

#include <QDialog>

namespace Ui {
class levels;
}

class levels : public QDialog
{
    Q_OBJECT

public:
    explicit levels(QWidget *parent = nullptr);
    ~levels();

private:
    Ui::levels *ui;
};

#endif // LEVELS_H
