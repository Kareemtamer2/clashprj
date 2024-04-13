/********************************************************************************
** Form generated from reading UI file 'msinmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSINMENU_H
#define UI_MSINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_msinmenu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *back;

    void setupUi(QDialog *msinmenu)
    {
        if (msinmenu->objectName().isEmpty())
            msinmenu->setObjectName("msinmenu");
        msinmenu->resize(637, 518);
        pushButton = new QPushButton(msinmenu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 200, 221, 91));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPixmap pixmap(\":/images/startbutton.jpeg\");\n"
"QIcon ButtonIcon(pixmap);\n"
"button->setIcon(ButtonIcon);"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("appointment-new")));
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(msinmenu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(520, 340, 71, 71));
        pushButton_3 = new QPushButton(msinmenu);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 330, 151, 71));
        back = new QLabel(msinmenu);
        back->setObjectName("back");
        back->setGeometry(QRect(0, -10, 641, 531));
        back->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        pushButton->raise();

        retranslateUi(msinmenu);

        QMetaObject::connectSlotsByName(msinmenu);
    } // setupUi

    void retranslateUi(QDialog *msinmenu)
    {
        msinmenu->setWindowTitle(QCoreApplication::translate("msinmenu", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("msinmenu", "START", nullptr));
        pushButton_2->setText(QCoreApplication::translate("msinmenu", "OPTIONS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("msinmenu", "QUIT", nullptr));
        back->setText(QCoreApplication::translate("msinmenu", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class msinmenu: public Ui_msinmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSINMENU_H
