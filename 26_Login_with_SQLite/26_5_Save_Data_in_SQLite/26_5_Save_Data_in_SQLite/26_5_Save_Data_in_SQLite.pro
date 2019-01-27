#-------------------------------------------------
#
# Project created by QtCreator 2019-01-27T10:44:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 26_5_Save_Data_in_SQLite
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    employeeinfo.cpp

HEADERS  += login.h \
    employeeinfo.h

FORMS    += login.ui \
    employeeinfo.ui
