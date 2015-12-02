QT += core
QT -= gui

TARGET = Computer_sc
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ui.cpp \
    ScientistServices.cpp \
    ComputerScientist.cpp \
    ScientistRepository.cpp

HEADERS += \
    ui.h \
    ScientistServices.h \
    ComputerScientist.h \
    ScientistRepository.h

