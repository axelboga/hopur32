/********************************************************************************
** Form generated from reading UI file 'addscientistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCIENTISTDIALOG_H
#define UI_ADDSCIENTISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddScientistDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *AddScientistDialog)
    {
        if (AddScientistDialog->objectName().isEmpty())
            AddScientistDialog->setObjectName(QStringLiteral("AddScientistDialog"));
        AddScientistDialog->resize(511, 396);
        label = new QLabel(AddScientistDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 0, 161, 41));
        lineEdit = new QLineEdit(AddScientistDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 70, 451, 21));
        lineEdit_2 = new QLineEdit(AddScientistDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 130, 451, 21));
        lineEdit_3 = new QLineEdit(AddScientistDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 190, 451, 21));
        lineEdit_4 = new QLineEdit(AddScientistDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 250, 451, 21));

        retranslateUi(AddScientistDialog);

        QMetaObject::connectSlotsByName(AddScientistDialog);
    } // setupUi

    void retranslateUi(QDialog *AddScientistDialog)
    {
        AddScientistDialog->setWindowTitle(QApplication::translate("AddScientistDialog", "Dialog", 0));
        label->setText(QApplication::translate("AddScientistDialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0f0dcc;\">Add new scientist</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientistDialog: public Ui_AddScientistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTISTDIALOG_H
