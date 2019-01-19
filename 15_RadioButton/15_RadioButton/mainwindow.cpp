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

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton_BMW->isChecked()) {
        QMessageBox::information(this, "infromasi", "kamu memilih BMW");
    }
    if(ui->radioButton_Mercedes->isChecked()) {
        QMessageBox::information(this, "infromasi", "kamu memilih Mercedes");
    }
}
