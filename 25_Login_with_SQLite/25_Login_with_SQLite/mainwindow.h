#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileInfo>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "employeeinfo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

    void connClose() {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen() {
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("/home/password-sari/Documents/wildenali github/Belajar-GUI-dengan-QtCreator/25_Login_with_SQLite/myDatabaseLogin");

        if(mydb.open()) {
//            ui->label->setText("BERHASIL bukea database");
            qDebug() << "BERHASIL bukea database";
            return true;
        } else {
//            ui->label->setText("GAGAL bukea database");
            qDebug() << "Gagal buka database";
            return false;
        }
    }

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
