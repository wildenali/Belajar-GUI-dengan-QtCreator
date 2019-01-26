#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QSqlDatabase mydb;    // dipindahin ke mainwindow.h

//    di pindahin ke mainwindow.h  didalam public
//    mydb = QSqlDatabase::addDatabase("QSQLITE");
//    mydb.setDatabaseName("/home/password-sari/Documents/wildenali github/Belajar-GUI-dengan-QtCreator/25_Login_with_SQLite/myDatabaseLogin");

    if(connOpen()) {
        ui->label->setText("Connected");
    } else {
        ui->label->setText("Gagal buka database");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEdit_Nama->text();
    password = ui->lineEdit_Password->text();

//    if(!mydb.isOpen()) {
    if(!connOpen()) {
        qDebug() << "GAGAL buka database";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM mahasiswa WHERE nama='"+username+"' and password='"+password+"'");

    if(qry.exec()) {
        int count=0;
        while(qry.next()) {
            count++;
        }
        if(count == 1) {
            ui->label->setText("username dan password BENAR");
            connClose();
            this->hide();
            EmployeeInfo employeeInfo;
            employeeInfo.setModal(true);
            employeeInfo.exec();
        }
        if(count > 1)
            ui->label->setText("DUPLICATE username dan password");
        if(count < 1)
            ui->label->setText("username dan password NOT benar");

    }
}
