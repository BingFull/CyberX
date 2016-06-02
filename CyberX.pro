#-------------------------------------------------
#
# Project created by QtCreator 2016-06-02T12:37:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CyberX
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp

HEADERS  += \
    stable.h \
    MainWindow.h

FORMS    += MainWindow.ui

# Use Precompiled headers (PCH)
PRECOMPILED_HEADER  = stable.h
