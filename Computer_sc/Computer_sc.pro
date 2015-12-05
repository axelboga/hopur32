QT += core
QT -= gui
QT += sql

TARGET = Computer_sc
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ui.cpp \
    computer.cpp \
    scientistrepository.cpp \
    scientistservices.cpp \
    computerservices.cpp \
    computerscientist.cpp \
    computerrepository.cpp \
    baserepository.cpp

HEADERS += \
    ui.h \
    computer.h \
    computerscientist.h \
    scientistrepository.h \
    scientistservices.h \
    computerservices.h \
    computerrepository.h \
    baserepository.h

