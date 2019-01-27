#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>
#include "login.h"

namespace Ui {
class EmployeeInfo;
}

class EmployeeInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeInfo(QWidget *parent = 0);
    ~EmployeeInfo();

private slots:
    void on_pushButton_Save_clicked();

    void on_pushButton_Update_clicked();

private:
    Ui::EmployeeInfo *ui;
};

#endif // EMPLOYEEINFO_H
