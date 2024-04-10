#include "levels.h"
#include "ui_levels.h"

levels::levels(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::levels)
{
    ui->setupUi(this);
}

levels::~levels()
{
    delete ui;
}
