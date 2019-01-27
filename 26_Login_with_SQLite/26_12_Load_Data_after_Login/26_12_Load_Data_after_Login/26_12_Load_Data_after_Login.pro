#-------------------------------------------------
#
# Project created by QtCreator 2019-01-27T14:15:53
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 26_12_Load_Data_after_Login
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    employeeinfo.cpp

HEADERS  += login.h \
    employeeinfo.h

FORMS    += login.ui \
    employeeinfo.ui
