#-------------------------------------------------
#
# Project created by QtCreator 2017-01-06T20:55:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WakeUp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    icmpsender.cpp

HEADERS  += mainwindow.h \
    icmpsender.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -D__DEBUG
