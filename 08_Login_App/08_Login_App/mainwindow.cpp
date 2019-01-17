#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "wilden" && password == "12345") {
        QMessageBox::information(this, "Login", "yeay berhasiiil");
        hide();
        secondDialog = new second_Dialog(this);
        secondDialog->show();
    } else {
        QMessageBox::warning(this, "Login", "yaaah GAGAL");
    }
}
