#include "employeeinfo.h"
#include "ui_employeeinfo.h"
#include <QMessageBox>

EmployeeInfo::EmployeeInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeInfo)
{
    ui->setupUi(this);

    Login conn;
    if(!conn.connOpen())
        ui->label_sec_status->setText("Gagal Konek ke Database");
    else
        ui->label_sec_status->setText("Terhubung dengan Database");
}

EmployeeInfo::~EmployeeInfo()
{
    delete ui;
}

void EmployeeInfo::on_pushButton_Save_clicked()
{
    Login conn;
    QString eid, name, surename, age;
    eid = ui->txt_EID->text();
    name = ui->txt_Name->text();
    surename = ui->txt_Surename->text();
    age = ui->txt_Age->text();

    if(!conn.connOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO employeeinfo (eid,name,surename,age) VALUES ('"+eid+"','"+name+"','"+surename+"','"+age+"')");

    if(qry.exec()) {
        QMessageBox::critical(this, tr("Save"), tr("TersimpaN"));
        conn.connClose();
    }
    else {
        QMessageBox::critical(this, tr("Errorrrrr::"), qry.lastError().text());
    }
}
