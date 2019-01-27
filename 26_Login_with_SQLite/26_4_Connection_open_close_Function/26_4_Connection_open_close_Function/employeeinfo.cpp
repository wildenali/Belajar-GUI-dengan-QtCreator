#include "employeeinfo.h"
#include "ui_employeeinfo.h"

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

}
