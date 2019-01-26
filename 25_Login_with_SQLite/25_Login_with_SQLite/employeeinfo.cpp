#include "employeeinfo.h"
#include "ui_employeeinfo.h"
#include <QMessageBox>

EmployeeInfo::EmployeeInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeInfo)
{
    ui->setupUi(this);

    MainWindow conn;
    if(conn.connOpen()) {
        ui->label_sec_status->setText("Connected");
    } else {
        ui->label_sec_status->setText("Gagal buka database");
    }

}

EmployeeInfo::~EmployeeInfo()
{
    delete ui;
}

void EmployeeInfo::on_pushButton_Simpan_clicked()
{
    MainWindow conn;

    QString eid, name, surename, age;
    eid = ui->lineEdit_NIM->text();
    name = ui->lineEdit_Name->text();
    surename = ui->lineEdit_Surename->text();
    age = ui->lineEdit_Usia->text();

//    if(!mydb.isOpen()) {
    if(!conn.connOpen()) {
        qDebug() << "GAGAL buka database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO mahasiswa (eid,name,surename,age) VALUES('"+eid+"','"+name+"','"+surename+"','"+age+"')");

    if(qry.exec()) {
        QMessageBox::critical(this, tr("Simpaan"), tr("Teeer SImpaaaN"));
        conn.connClose();
    } else {
        QMessageBox::critical(this, tr("Erroooorrr"), qry.lastError().text());
    }
}
