#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    Cara PERTAMA
//    QDir dir("/home/password-sari/Documents/");
//    if(dir.exists()) {
//        QMessageBox::information(this, "cek Directory", "ada");
//    } else {
//        QMessageBox::information(this, "cek Directory", "tidak");
//    }

//    Cara KEDUA
    QDir dir;
    foreach(QFileInfo var, dir.drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());
    }

    QDir dir_2("/boot");
    foreach(QFileInfo var, dir_2.entryInfoList()) {
        if(var.isDir()) {
            ui->listWidget->addItem("Folder: " + var.absoluteFilePath());
        }
        if(var.isFile()) {
            ui->listWidget->addItem("File: " + var.absoluteFilePath());
        }


    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDir dir("/boot");
    if(dir.exists()) {
        QMessageBox::information(this, "cek Directory", "ADA");
    } else {

//        dir.mkdir();      // misalnya ga ada dir nya, bisa di bikin kalau pake mkdir()
//        dir.mkpath("/boot/yangBaruNih");      // misalnya ga ada dir nya, bisa di bikin kalau pake mkpath()
        QMessageBox::information(this, "cek Directory", "TIDAAAAk");
    }
}
