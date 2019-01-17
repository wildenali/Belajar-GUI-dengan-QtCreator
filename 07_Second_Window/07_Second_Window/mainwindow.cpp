#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "second_dialog.h"    // ini juga bisa ditulis di mainwindow.h

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

//    Cara pertama membuat kelas second_Dialog
//    second_Dialog secondDialog;
//    secondDialog.setModal(true);
//    secondDialog.exec();

//    Cara kedua yaitu
//    Membuat instance baru, cara direkomendasikan dalam beberapa kasus
    hide(); // ini kalau mau di hide mainwindow nya ketika di secondDialog muncul
    secondDialog = new second_Dialog(this);
    secondDialog->show();
}
