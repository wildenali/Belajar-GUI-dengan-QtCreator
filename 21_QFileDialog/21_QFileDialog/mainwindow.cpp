#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>

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
//    QString fileName = QFileDialog::getOpenFileName(this, "Open File", "/home", QDir::homePath());
//    QMessageBox::information(this, "Informasi", fileName);


    QString filter = "All Files (*.cpp) ;; Text_File(*.txt)";   // misalnya cuma file .cpp dan .txt aja, kalau mau semuanya tinggal *.*

    QString fileName = QFileDialog::getOpenFileName(this, "Open File", "/home", filter);
    QFile file(fileName);

    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::information(this, "Informasi", "Ga ada file yang dipilih");
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();

}
