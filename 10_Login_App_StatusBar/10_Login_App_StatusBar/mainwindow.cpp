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

    // Ngapa ngapain sama si progressBar
//    ui->statusBar->addPermanentWidget(ui->label_3, 1);   // 1 itu stretch
    ui->statusBar->addPermanentWidget(ui->label_3);
    ui->statusBar->addPermanentWidget(ui->progressBar);
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
//        QMessageBox::information(this, "Login", "Yees BERHASIL");
//        hide();
//        secondDialog = new second_Dialog(this);
//        secondDialog->show();

//        cara meng show kan di statusBar yaitu, panggil ui nya dulu
        ui->statusBar->showMessage("Yees BERHASIL");
        hide();
        secondDialog = new second_Dialog(this);
        secondDialog->show();
    } else {
//        QMessageBox::warning(this, "Login", "yaaah GAGAL");
        ui->statusBar->showMessage("Yaaah GAGAAAAL", 10000); // 10000 (10 detik) itu maksudnya timeout, jadi muncul nya seberapa lama
        ui->label_3->setText("GAGAL yaaa!!!");
    }
}
