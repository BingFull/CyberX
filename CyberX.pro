#-------------------------------------------------
#
# Project created by QtCreator 2016-06-02T12:37:36
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CyberX
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    ConnectDialog.cpp \
    FtpService.cpp

HEADERS  += \
    stable.h \
    MainWindow.h \
    ConnectDialog.h \
    FtpService.h

FORMS    += MainWindow.ui \
    ConnectDialog.ui

# Use Precompiled headers (PCH)
PRECOMPILED_HEADER  = stable.h
