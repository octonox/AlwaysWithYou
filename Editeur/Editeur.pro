#-------------------------------------------------
#
# Project created by QtCreator 2017-09-09T19:50:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Editeur
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++14

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    qsfmlwidget.cpp \
    sfmlcanvas.cpp \
    gamemap.cpp

HEADERS += \
        mainwindow.h \
    qsfmlwidget.h \
    sfmlcanvas.h \
    gamemap.h

FORMS += \
        mainwindow.ui
win32:LIBS += -LC:/SFML-2.4.2_ForQt/lib
unix:!macx:LIBS += -L~/SFML-2.4.2/lib

win32:CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
win32:CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d
unix:!macx: LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system

win32:INCLUDEPATH += ..\SFML-2.4.2_ForQt\include
win32:DEPENDPATH += ..\SFML-2.4.2_ForQt\include
unix:!macx:INCLUDEPATH += ~/SFML-2.4.2/include
unix:!macx:DEPENDPATH += ~/SFML-2.4.2/include
