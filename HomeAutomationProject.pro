#-------------------------------------------------
#
# Project created by QtCreator 2020-03-07T14:55:14
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HomeAutomationProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    socketcommunication.cpp \
    socketserver.cpp \
    socketmanager.cpp \
    socketclient.cpp \
    clientdata.cpp

HEADERS  += mainwindow.h \
    icommunication.h \
    socketcommunication.h \
    socketserver.h \
    socketmanager.h \
    socketclient.h \
    clientdata.h

FORMS    += mainwindow.ui
