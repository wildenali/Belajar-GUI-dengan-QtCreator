#-------------------------------------------------
#
# Project created by QtCreator 2019-01-26T22:48:50
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 26_3_New_Window_after_Login
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    employeeinfo.cpp

HEADERS  += login.h \
    employeeinfo.h

FORMS    += login.ui \
    employeeinfo.ui
