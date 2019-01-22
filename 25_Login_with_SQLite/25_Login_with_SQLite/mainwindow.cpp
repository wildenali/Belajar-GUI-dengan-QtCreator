#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase mydb;
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("myDatabaseLogin");

    if(mydb.open()) {
        ui->label->setText("BERHASIL bukea database");
    } else {
        ui->label->setText("Gagal buka database");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}