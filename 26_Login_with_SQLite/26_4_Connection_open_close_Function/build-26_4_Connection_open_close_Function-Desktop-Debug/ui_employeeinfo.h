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
    QPushButton *pushButton_Save;
    QLabel *label_sec_status;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_EID;
    QLineEdit *lineEdit_EID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Surename;
    QLineEdit *lineEdit_Surename;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Age;
    QLineEdit *lineEdit_Age;

    void setupUi(QDialog *EmployeeInfo)
    {
        if (EmployeeInfo->objectName().isEmpty())
            EmployeeInfo->setObjectName(QStringLiteral("EmployeeInfo"));
        EmployeeInfo->resize(400, 300);
        pushButton_Save = new QPushButton(EmployeeInfo);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(110, 190, 99, 27));
        label_sec_status = new QLabel(EmployeeInfo);
        label_sec_status->setObjectName(QStringLiteral("label_sec_status"));
        label_sec_status->setGeometry(QRect(40, 250, 341, 17));
        widget = new QWidget(EmployeeInfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 30, 225, 136));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_EID = new QLabel(widget);
        label_EID->setObjectName(QStringLiteral("label_EID"));

        horizontalLayout->addWidget(label_EID);

        lineEdit_EID = new QLineEdit(widget);
        lineEdit_EID->setObjectName(QStringLiteral("lineEdit_EID"));

        horizontalLayout->addWidget(lineEdit_EID);


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
        label_Age = new QLabel(widget);
        label_Age->setObjectName(QStringLiteral("label_Age"));

        horizontalLayout_4->addWidget(label_Age);

        lineEdit_Age = new QLineEdit(widget);
        lineEdit_Age->setObjectName(QStringLiteral("lineEdit_Age"));

        horizontalLayout_4->addWidget(lineEdit_Age);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(EmployeeInfo);

        QMetaObject::connectSlotsByName(EmployeeInfo);
    } // setupUi

    void retranslateUi(QDialog *EmployeeInfo)
    {
        EmployeeInfo->setWindowTitle(QApplication::translate("EmployeeInfo", "Dialog", 0));
        pushButton_Save->setText(QApplication::translate("EmployeeInfo", "Save", 0));
        label_sec_status->setText(QApplication::translate("EmployeeInfo", "...", 0));
        label_EID->setText(QApplication::translate("EmployeeInfo", "EID", 0));
        label_Surename->setText(QApplication::translate("EmployeeInfo", "Surename", 0));
        label_Name->setText(QApplication::translate("EmployeeInfo", "Name", 0));
        label_Age->setText(QApplication::translate("EmployeeInfo", "Age", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeInfo: public Ui_EmployeeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
