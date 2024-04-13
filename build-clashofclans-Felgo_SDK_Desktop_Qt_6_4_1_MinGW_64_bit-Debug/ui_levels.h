/********************************************************************************
** Form generated from reading UI file 'levels.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELS_H
#define UI_LEVELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_levels
{
public:

    void setupUi(QDialog *levels)
    {
        if (levels->objectName().isEmpty())
            levels->setObjectName("levels");
        levels->resize(524, 412);

        retranslateUi(levels);

        QMetaObject::connectSlotsByName(levels);
    } // setupUi

    void retranslateUi(QDialog *levels)
    {
        levels->setWindowTitle(QCoreApplication::translate("levels", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class levels: public Ui_levels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELS_H
