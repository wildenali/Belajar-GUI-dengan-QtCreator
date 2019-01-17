#include "second_dialog.h"
#include "ui_second_dialog.h"

second_Dialog::second_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second_Dialog)
{
    ui->setupUi(this);
}

second_Dialog::~second_Dialog()
{
    delete ui;
}
