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
    computerrepository.cpp \
    baserepository.cpp \
    scientist.cpp \
    compsciconnectionrepository.cpp \
    compsciconnectionservices.cpp

HEADERS += \
    ui.h \
    computer.h \
    scientistrepository.h \
    scientistservices.h \
    computerservices.h \
    computerrepository.h \
    baserepository.h \
    scientist.h \
    compsciconnectionrepository.h \
    compsciconnectionservices.h

