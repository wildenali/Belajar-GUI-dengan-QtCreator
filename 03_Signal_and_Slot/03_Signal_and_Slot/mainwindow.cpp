#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//     cara KONEKan si SIGNAL dan SLOT
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

//     cara mendiskonekan si SIGNAL dan SLOT
//     jadi kalau code ini diaktifkan, maka kalau si slider diubah-ubah, maka progressbar ga bakal berubah, karena diskonek
//    disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
