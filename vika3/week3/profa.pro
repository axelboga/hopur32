#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T10:59:34
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = profa
TEMPLATE = app


SOURCES += main.cpp \
        mainwindow.cpp \
        computer.cpp \
        computerservices.cpp \
        computerrepository.cpp \
        scientist.cpp \
        scientistservices.cpp \
        scientistrepository.cpp \
        baserepository.cpp \
    addcomputerdialog.cpp

HEADERS  += mainwindow.h \
        computer.h \
        computerservices.h \
        computerrepository.h \
        scientist.h \
        scientistservices.h \
        scientistrepository.h \
        baserepository.h \
    addcomputerdialog.h

FORMS    += mainwindow.ui \
    addcomputerdialog.ui

DISTFILES +=
