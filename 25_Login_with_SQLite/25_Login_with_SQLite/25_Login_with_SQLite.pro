#-------------------------------------------------
#
# Project created by QtCreator 2019-01-22T21:17:27
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 25_Login_with_SQLite
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    employeeinfo.cpp

HEADERS  += mainwindow.h \
    employeeinfo.h

FORMS    += mainwindow.ui \
    employeeinfo.ui
