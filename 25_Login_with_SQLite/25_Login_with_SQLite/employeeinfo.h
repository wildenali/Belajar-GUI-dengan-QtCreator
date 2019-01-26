#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>
#include "mainwindow.h"

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
    void on_pushButton_Simpan_clicked();

private:
    Ui::EmployeeInfo *ui;
};

#endif // EMPLOYEEINFO_H
