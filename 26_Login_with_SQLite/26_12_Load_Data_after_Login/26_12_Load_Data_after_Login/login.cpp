#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    if(!connOpen())
        ui->label->setText("Gagal Konek ke Database");
    else
        ui->label->setText("Terhubung dengan Database");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEdit_Username->text();
    password = ui->lineEdit_Password->text();

    if(!connOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM employeeinfo WHERE username='"+username+"' and password='"+password+"'");

    if(qry.exec()) {
        int count = 0;
        while(qry.next()) {
            count++;
        }
        if(count == 1) {
            ui->label->setText("Username dan Password BENAR");
            connClose();
            this->hide();
            EmployeeInfo employeeinfo;
            employeeinfo.setModal(true);
            employeeinfo.exec();
        }

        if(count > 1)
            ui->label->setText("Username dan Password DUPLICATE");

        if(count < 1)
            ui->label->setText("Username dan Password NOT BENAR");

    }
}

void Login::on_lineEdit_Password_returnPressed()
{
    QString username, password;
    username = ui->lineEdit_Username->text();
    password = ui->lineEdit_Password->text();

    if(!connOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM employeeinfo WHERE username='"+username+"' and password='"+password+"'");

    if(qry.exec()) {
        int count = 0;
        while(qry.next()) {
            count++;
        }
        if(count == 1) {
            ui->label->setText("Username dan Password BENAR");
            connClose();
            this->hide();
            EmployeeInfo employeeinfo;
            employeeinfo.setModal(true);
            employeeinfo.exec();
        }

        if(count > 1)
            ui->label->setText("Username dan Password DUPLICATE");

        if(count < 1)
            ui->label->setText("Username dan Password NOT BENAR");

    }
}
