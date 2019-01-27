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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeInfo
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Update;
    QPushButton *pushButton_Delete;
    QLabel *label_2;
    QLabel *label_sec_status;
    QWidget *layoutWidget_2;
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
    QLabel *label;
    QLabel *label_3;
    QListView *listView;
    QTableView *tableView;
    QComboBox *comboBox;
    QPushButton *pushButton_Load;

    void setupUi(QDialog *EmployeeInfo)
    {
        if (EmployeeInfo->objectName().isEmpty())
            EmployeeInfo->setObjectName(QStringLiteral("EmployeeInfo"));
        EmployeeInfo->resize(937, 394);
        layoutWidget = new QWidget(EmployeeInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 151, 180, 97));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_Save = new QPushButton(layoutWidget);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));

        horizontalLayout_5->addWidget(pushButton_Save);

        pushButton_Update = new QPushButton(layoutWidget);
        pushButton_Update->setObjectName(QStringLiteral("pushButton_Update"));

        horizontalLayout_5->addWidget(pushButton_Update);


        verticalLayout_2->addLayout(horizontalLayout_5);

        pushButton_Delete = new QPushButton(layoutWidget);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));

        verticalLayout_2->addWidget(pushButton_Delete);

        label_2 = new QLabel(EmployeeInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(540, 10, 81, 17));
        label_sec_status = new QLabel(EmployeeInfo);
        label_sec_status->setObjectName(QStringLiteral("label_sec_status"));
        label_sec_status->setGeometry(QRect(20, 350, 601, 17));
        layoutWidget_2 = new QWidget(EmployeeInfo);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(9, 9, 225, 136));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_EID = new QLabel(layoutWidget_2);
        label_EID->setObjectName(QStringLiteral("label_EID"));

        horizontalLayout->addWidget(label_EID);

        txt_EID = new QLineEdit(layoutWidget_2);
        txt_EID->setObjectName(QStringLiteral("txt_EID"));

        horizontalLayout->addWidget(txt_EID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Surename = new QLabel(layoutWidget_2);
        label_Surename->setObjectName(QStringLiteral("label_Surename"));

        horizontalLayout_2->addWidget(label_Surename);

        txt_Surename = new QLineEdit(layoutWidget_2);
        txt_Surename->setObjectName(QStringLiteral("txt_Surename"));

        horizontalLayout_2->addWidget(txt_Surename);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Name = new QLabel(layoutWidget_2);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout_3->addWidget(label_Name);

        txt_Name = new QLineEdit(layoutWidget_2);
        txt_Name->setObjectName(QStringLiteral("txt_Name"));

        horizontalLayout_3->addWidget(txt_Name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Age = new QLabel(layoutWidget_2);
        label_Age->setObjectName(QStringLiteral("label_Age"));

        horizontalLayout_4->addWidget(label_Age);

        txt_Age = new QLineEdit(layoutWidget_2);
        txt_Age->setObjectName(QStringLiteral("txt_Age"));

        horizontalLayout_4->addWidget(txt_Age);


        verticalLayout->addLayout(horizontalLayout_4);

        label = new QLabel(EmployeeInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 10, 67, 17));
        label_3 = new QLabel(EmployeeInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 10, 81, 17));
        listView = new QListView(EmployeeInfo);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(370, 30, 131, 221));
        tableView = new QTableView(EmployeeInfo);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(520, 30, 371, 221));
        comboBox = new QComboBox(EmployeeInfo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(240, 30, 121, 27));
        pushButton_Load = new QPushButton(EmployeeInfo);
        pushButton_Load->setObjectName(QStringLiteral("pushButton_Load"));
        pushButton_Load->setGeometry(QRect(260, 270, 571, 27));

        retranslateUi(EmployeeInfo);

        QMetaObject::connectSlotsByName(EmployeeInfo);
    } // setupUi

    void retranslateUi(QDialog *EmployeeInfo)
    {
        EmployeeInfo->setWindowTitle(QApplication::translate("EmployeeInfo", "Dialog", 0));
        pushButton_Save->setText(QApplication::translate("EmployeeInfo", "Save", 0));
        pushButton_Update->setText(QApplication::translate("EmployeeInfo", "Update", 0));
        pushButton_Delete->setText(QApplication::translate("EmployeeInfo", "Hapuuus", 0));
        label_2->setText(QApplication::translate("EmployeeInfo", "TableView", 0));
        label_sec_status->setText(QApplication::translate("EmployeeInfo", "...", 0));
        label_EID->setText(QApplication::translate("EmployeeInfo", "EID", 0));
        label_Surename->setText(QApplication::translate("EmployeeInfo", "Surename", 0));
        label_Name->setText(QApplication::translate("EmployeeInfo", "Name", 0));
        label_Age->setText(QApplication::translate("EmployeeInfo", "Age", 0));
        label->setText(QApplication::translate("EmployeeInfo", "ListView", 0));
        label_3->setText(QApplication::translate("EmployeeInfo", "ComboBox", 0));
        pushButton_Load->setText(QApplication::translate("EmployeeInfo", "Loaaad List", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeInfo: public Ui_EmployeeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
