#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("C++");
    ui->comboBox->addItem("Python");
    ui->comboBox->addItem("Java");

    ui->comboBox_2->addItem(QIcon(":/rec/icons/new.png"),"BMW");
    ui->comboBox_2->addItem(QIcon(":/rec/icons/copy.png"),"Mercedes");
    ui->comboBox_2->addItem(QIcon(":/rec/icons/cut.png"),"Ferrari");

    for(int i = 0; i<10; i++) {
        ui->comboBox_3->addItem(QIcon(":/rec/icons/paste.png"), QString::number(i) + " Nama");
    }
    ui->comboBox_3->insertItem(3, QIcon(":/rec/icons/new.png"), "ini Nama Baru");    //3 itu posisinya

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Pilih yang mana", ui->comboBox->currentText());
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Pilih yang mana", QString::number(ui->comboBox_2->currentIndex()));
}
