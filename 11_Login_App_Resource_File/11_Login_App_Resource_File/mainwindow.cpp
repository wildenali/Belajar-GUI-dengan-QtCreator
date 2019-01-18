#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resource/img/Exit.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
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
        ui->statusBar->showMessage("Yess BERHASIIIL");
        hide();
        secondDialog = new second_Dialog(this);
        secondDialog->show();
    } else {
        ui->statusBar->showMessage("Yaahh GAGAL !!!", 5000);    // 5000 timeout
        ui->label_3->setText("Gagaaal yaaa !!!");
    }
}
