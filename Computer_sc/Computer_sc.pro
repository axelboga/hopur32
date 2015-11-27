QT += core
QT -= gui

TARGET = Computer_sc
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ui.cpp \
    logic.cpp \
    computerscientist.cpp \
    repository.cpp

HEADERS += \
    ui.h \
    logic.h \
    computerscientist.h \
    repository.h

