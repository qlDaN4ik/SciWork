#-------------------------------------------------
#
# Project created by QtCreator 2016-02-10T21:14:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = MyGen
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    function.cpp \
    qcustomplot.cpp \
    myclass.cpp

HEADERS  += mainwindow.h \
    function.h \
    qcustomplot.h \
    myclass.h

FORMS    += mainwindow.ui
