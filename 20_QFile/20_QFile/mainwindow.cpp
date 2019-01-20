#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
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
    QFile file("/home/password-sari/Documents/wildenali github/Belajar-GUI-dengan-QtCreator/20_QFile/myFile.txt");

    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Peringatan", "File tidak terbuka");
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QFile file("/home/password-sari/Documents/wildenali github/Belajar-GUI-dengan-QtCreator/20_QFile/myFile.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Peringatan", "File tidak terbuka");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}
