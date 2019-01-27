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

void EmployeeInfo::on_pushButton_Update_clicked()
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
    qry.prepare("UPDATE employeeinfo SET eid='"+eid+"', name='"+name+"', surename='"+surename+"', age='"+age+"' WHERE eid='"+eid+"'");

    if(qry.exec()) {
        QMessageBox::critical(this, tr("Edit"), tr("terUPDATE"));
        conn.connClose();
    }
    else {
        QMessageBox::critical(this, tr("Errorrrrr::"), qry.lastError().text());
    }
}

void EmployeeInfo::on_pushButton_Delete_clicked()
{
    Login conn;
    QString eid, name, surename, age;
    eid = ui->txt_EID->text();
//    name = ui->txt_Name->text();
//    surename = ui->txt_Surename->text();
//    age = ui->txt_Age->text();

    if(!conn.connOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("DELETE FROM employeeinfo WHERE eid='"+eid+"'");

    if(qry.exec()) {
        QMessageBox::critical(this, tr("Delete"), tr("terHAPUUUS"));
        conn.connClose();
    }
    else {
        QMessageBox::critical(this, tr("Errorrrrr::"), qry.lastError().text());
    }
}

void EmployeeInfo::on_pushButton_Load_clicked()
{
    Login conn;
    QSqlQueryModel * modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

//    qry->prepare("SELECT * FROM employeeinfo");       // ini kalau mau menampilkan semua data
    qry->prepare("SELECT eid, name, surename, age FROM employeeinfo");       // ini kalau mau menampilkan beberapa data
//    qry->prepare("SELECT name FROM employeeinfo");       // ini kalau mau menampilkan beberapa data
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->listView->setModel(modal);
    ui->comboBox->setModel(modal);

    qDebug() << (modal->rowCount());
}

void EmployeeInfo::on_comboBox_currentIndexChanged(const QString &arg1)
{
//    QString name = ui->comboBox->currentText();
    QString val = ui->comboBox->currentText();

    Login conn;

    if(!conn.connOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM employeeinfo WHERE eid='"+val+"'");

    if(qry.exec()) {
        while(qry.next()) {
            ui->txt_EID->setText(qry.value(0).toString());
            ui->txt_Name->setText(qry.value(1).toString());
            ui->txt_Surename->setText(qry.value(2).toString());
            ui->txt_Age->setText(qry.value(3).toString());
        }
        conn.connClose();
    }
    else {
        QMessageBox::critical(this, tr("Errorrrrr::"), qry.lastError().text());
    }
}

void EmployeeInfo::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();

    Login conn;

    if(!conn.connOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM employeeinfo WHERE eid='"+val+"' OR name='"+val+"' OR surename='"+val+"' OR age='"+val+"' ");

    if(qry.exec()) {
        while(qry.next()) {
            ui->txt_EID->setText(qry.value(0).toString());
            ui->txt_Name->setText(qry.value(1).toString());
            ui->txt_Surename->setText(qry.value(2).toString());
            ui->txt_Age->setText(qry.value(3).toString());
        }
        conn.connClose();
    }
    else {
        QMessageBox::critical(this, tr("Errorrrrr::"), qry.lastError().text());
    }
}

void EmployeeInfo::on_listView_activated(const QModelIndex &index)
{
    QString val = ui->listView->model()->data(index).toString();

    Login conn;

    if(!conn.connOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM employeeinfo WHERE eid='"+val+"' ");

    if(qry.exec()) {
        while(qry.next()) {
            ui->txt_EID->setText(qry.value(0).toString());
            ui->txt_Name->setText(qry.value(1).toString());
            ui->txt_Surename->setText(qry.value(2).toString());
            ui->txt_Age->setText(qry.value(3).toString());
        }
        conn.connClose();
    }
    else {
        QMessageBox::critical(this, tr("Errorrrrr::"), qry.lastError().text());
    }
}
