#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QSQLITE");

    mydb.setDatabaseName("database.db");

    if(!mydb.open())
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

    if(!mydb.isOpen()) {
        qDebug() << "Gagal Terhubung ke Database";
        return;
    }

    QSqlQuery qry;
    if(qry.exec("SELECT * FROM employeeinfo WHERE username='"+username+"' and password='"+password+"'")) {
        int count = 0;
        while(qry.next()) {
            count++;
        }
        if(count == 1) {
            ui->label->setText("Username dan Password BENAR");
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
