/********************************************************************************
** Form generated from reading UI file 'employeeinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEINFO_H
#define UI_EMPLOYEEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeInfo
{
public:
    QPushButton *pushButton_Simpan;
    QLabel *label_sec_status;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_NIM;
    QLineEdit *lineEdit_NIM;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Surename;
    QLineEdit *lineEdit_Surename;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Usia;
    QLineEdit *lineEdit_Usia;

    void setupUi(QDialog *EmployeeInfo)
    {
        if (EmployeeInfo->objectName().isEmpty())
            EmployeeInfo->setObjectName(QStringLiteral("EmployeeInfo"));
        EmployeeInfo->resize(400, 300);
        pushButton_Simpan = new QPushButton(EmployeeInfo);
        pushButton_Simpan->setObjectName(QStringLiteral("pushButton_Simpan"));
        pushButton_Simpan->setGeometry(QRect(120, 200, 99, 27));
        label_sec_status = new QLabel(EmployeeInfo);
        label_sec_status->setObjectName(QStringLiteral("label_sec_status"));
        label_sec_status->setGeometry(QRect(50, 250, 291, 17));
        widget = new QWidget(EmployeeInfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 50, 225, 136));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_NIM = new QLabel(widget);
        label_NIM->setObjectName(QStringLiteral("label_NIM"));

        horizontalLayout->addWidget(label_NIM);

        lineEdit_NIM = new QLineEdit(widget);
        lineEdit_NIM->setObjectName(QStringLiteral("lineEdit_NIM"));

        horizontalLayout->addWidget(lineEdit_NIM);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Surename = new QLabel(widget);
        label_Surename->setObjectName(QStringLiteral("label_Surename"));

        horizontalLayout_2->addWidget(label_Surename);

        lineEdit_Surename = new QLineEdit(widget);
        lineEdit_Surename->setObjectName(QStringLiteral("lineEdit_Surename"));

        horizontalLayout_2->addWidget(lineEdit_Surename);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Name = new QLabel(widget);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout_3->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(widget);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));

        horizontalLayout_3->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Usia = new QLabel(widget);
        label_Usia->setObjectName(QStringLiteral("label_Usia"));

        horizontalLayout_4->addWidget(label_Usia);

        lineEdit_Usia = new QLineEdit(widget);
        lineEdit_Usia->setObjectName(QStringLiteral("lineEdit_Usia"));

        horizontalLayout_4->addWidget(lineEdit_Usia);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(EmployeeInfo);

        QMetaObject::connectSlotsByName(EmployeeInfo);
    } // setupUi

    void retranslateUi(QDialog *EmployeeInfo)
    {
        EmployeeInfo->setWindowTitle(QApplication::translate("EmployeeInfo", "Dialog", 0));
        pushButton_Simpan->setText(QApplication::translate("EmployeeInfo", "Simpan", 0));
        label_sec_status->setText(QApplication::translate("EmployeeInfo", "TextLabel", 0));
        label_NIM->setText(QApplication::translate("EmployeeInfo", "NIM", 0));
        label_Surename->setText(QApplication::translate("EmployeeInfo", "Surename", 0));
        label_Name->setText(QApplication::translate("EmployeeInfo", "Name", 0));
        label_Usia->setText(QApplication::translate("EmployeeInfo", "Usia", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeInfo: public Ui_EmployeeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
