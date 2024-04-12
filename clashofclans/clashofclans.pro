QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    background.cpp \
    basedesign.cpp \
    citizens.cpp \
    enemy.cpp \
    levels.cpp \
    main.cpp \
    msinmenu.cpp \
    player.cpp

HEADERS += \
    background.h \
    basedesign.h \
    citizens.h \
    enemy.h \
    levels.h \
    msinmenu.h \
    player.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

FORMS += \
    msinmenu.ui
