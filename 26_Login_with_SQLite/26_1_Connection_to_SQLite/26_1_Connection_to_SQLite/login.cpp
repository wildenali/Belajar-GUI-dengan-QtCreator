#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");

    mydb.setDatabaseName("database.db");

    if(!mydb.open())
        ui->label->setText("Gagal Konek ke Database");
    else
        ui->label->setText("TerhubunG dengan Database");
}

Login::~Login()
{
    delete ui;
}
