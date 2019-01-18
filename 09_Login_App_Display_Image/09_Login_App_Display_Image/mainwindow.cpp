#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/password-sari/Documents/wildenali github/Belajar-GUI-dengan-QtCreator/09_Login_App_Display_Image/Exit.png");
    int w = ui->label_pic->width(); // cara mendapakan ukuran lebar si label_pic
    int h = ui->label_pic->height(); // cara mendapakan ukuran tinggi si label_pic
    // jadi kalau pake w dan h itu maka si gambar akan mengikuri ukuran si label_pic
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));  // (100, 100) >> dalam satuan pixel
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
        QMessageBox::information(this, "Login", "yeay BERHASIL");
        hide();
        secondDialog = new second_Dialog(this);
        secondDialog->show();
    } else {
        QMessageBox::warning(this, "Login", "yaaah GAGAL");
    }
}
