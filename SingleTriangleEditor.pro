#-------------------------------------------------
#
# Project created by QtCreator 2014-08-18T15:11:05
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SingleTriangleEditor
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    SceneWindow.cpp \
    ControlWindow.cpp \
    Scene.cpp \
    Color.cpp

HEADERS  += MainWindow.h \
    SceneWindow.h \
    ControlWindow.h \
    Scene.h \
    Color.h

FORMS    += MainWindow.ui \
    SceneWindow.ui \
    ControlWindow.ui

RESOURCES += \
    shaders.qrc
