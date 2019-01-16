#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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
//    void aboutQt
//    void about
//    StandardButton  information
//    StandardButton  critical
//    StandardButton  warning
//    StandardButton  question

//    QMessageBox::about(this, "Muncuuul nih", "This is my custom message");

//    QMessageBox::aboutQt(this, "Muncuuul nih");

//    QMessageBox::information(this, "Muncuuul Info", "heii ini informasi");

//    QMessageBox::critical(this, "Awaaas", "be careful this is critical");

//    QMessageBox::warning(this, "Muncul Lagi", "ini warning cooy");

/*
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Nanya dulu dong", "Mau ini apa itu", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        qDebug() << "jawaban Nooooo";
    }
*/


//    QMessageBox messageBox(this, "Muncul Lagi", "ini warning cooy");
    QMessageBox mb("Halah Kenapa nih",
                               "ini ada nih, ?????",
                               QMessageBox::NoIcon,
                               QMessageBox::Yes | QMessageBox::Default,
                               QMessageBox::NoButton,
                               QMessageBox::NoButton);

    QPixmap exportSuccess("Exit.png");
    mb.setIconPixmap(exportSuccess);
    mb.exec();

}
