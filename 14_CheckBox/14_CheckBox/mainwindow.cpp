#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>>

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
    if(ui->checkBox->isChecked()) {
        QMessageBox::information(this, "infomasi", "Yees, i do");
    } else {
        QMessageBox::information(this, "infomasi", "noo, i don't like you");
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1) {
        QMessageBox::information(this, "infomasi", "Yees, i dooooo");
    } else {
        QMessageBox::information(this, "infomasi", "noo, i dooooon't like you");
    }
}
