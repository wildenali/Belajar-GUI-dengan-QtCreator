/********************************************************************************
** Form generated from reading UI file 'second_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_DIALOG_H
#define UI_SECOND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_second_Dialog
{
public:
    QLabel *label;

    void setupUi(QDialog *second_Dialog)
    {
        if (second_Dialog->objectName().isEmpty())
            second_Dialog->setObjectName(QStringLiteral("second_Dialog"));
        second_Dialog->resize(404, 262);
        label = new QLabel(second_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 80, 161, 71));

        retranslateUi(second_Dialog);

        QMetaObject::connectSlotsByName(second_Dialog);
    } // setupUi

    void retranslateUi(QDialog *second_Dialog)
    {
        second_Dialog->setWindowTitle(QApplication::translate("second_Dialog", "Dialog", 0));
        label->setText(QApplication::translate("second_Dialog", "Yeaaay sudah MASUK", 0));
    } // retranslateUi

};

namespace Ui {
    class second_Dialog: public Ui_second_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_DIALOG_H
