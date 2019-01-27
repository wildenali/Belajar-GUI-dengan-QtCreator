#-------------------------------------------------
#
# Project created by QtCreator 2019-01-27T12:31:25
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 26_8_Load_SQLite_Table
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    employeeinfo.cpp

HEADERS  += login.h \
    employeeinfo.h

FORMS    += login.ui \
    employeeinfo.ui
