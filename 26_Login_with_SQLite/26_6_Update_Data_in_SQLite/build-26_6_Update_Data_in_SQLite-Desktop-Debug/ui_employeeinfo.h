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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_EID;
    QLineEdit *txt_EID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Surename;
    QLineEdit *txt_Surename;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Name;
    QLineEdit *txt_Name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Age;
    QLineEdit *txt_Age;
    QPushButton *pushButton_Update;

    void setupUi(QDialog *EmployeeInfo)
    {
        if (EmployeeInfo->objectName().isEmpty())
            EmployeeInfo->setObjectName(QStringLiteral("EmployeeInfo"));
        EmployeeInfo->resize(400, 300);
        pushButton_Save = new QPushButton(EmployeeInfo);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(40, 170, 99, 27));
        label_sec_status = new QLabel(EmployeeInfo);
        label_sec_status->setObjectName(QStringLiteral("label_sec_status"));
        label_sec_status->setGeometry(QRect(20, 240, 341, 17));
        layoutWidget = new QWidget(EmployeeInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 225, 136));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_EID = new QLabel(layoutWidget);
        label_EID->setObjectName(QStringLiteral("label_EID"));

        horizontalLayout->addWidget(label_EID);

        txt_EID = new QLineEdit(layoutWidget);
        txt_EID->setObjectName(QStringLiteral("txt_EID"));

        horizontalLayout->addWidget(txt_EID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Surename = new QLabel(layoutWidget);
        label_Surename->setObjectName(QStringLiteral("label_Surename"));

        horizontalLayout_2->addWidget(label_Surename);

        txt_Surename = new QLineEdit(layoutWidget);
        txt_Surename->setObjectName(QStringLiteral("txt_Surename"));

        horizontalLayout_2->addWidget(txt_Surename);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Name = new QLabel(layoutWidget);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout_3->addWidget(label_Name);

        txt_Name = new QLineEdit(layoutWidget);
        txt_Name->setObjectName(QStringLiteral("txt_Name"));

        horizontalLayout_3->addWidget(txt_Name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Age = new QLabel(layoutWidget);
        label_Age->setObjectName(QStringLiteral("label_Age"));

        horizontalLayout_4->addWidget(label_Age);

        txt_Age = new QLineEdit(layoutWidget);
        txt_Age->setObjectName(QStringLiteral("txt_Age"));

        horizontalLayout_4->addWidget(txt_Age);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_Update = new QPushButton(EmployeeInfo);
        pushButton_Update->setObjectName(QStringLiteral("pushButton_Update"));
        pushButton_Update->setGeometry(QRect(160, 170, 99, 27));

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
        pushButton_Update->setText(QApplication::translate("EmployeeInfo", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeInfo: public Ui_EmployeeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
