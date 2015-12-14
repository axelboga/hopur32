/********************************************************************************
** Form generated from reading UI file 'addcomputerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPUTERDIALOG_H
#define UI_ADDCOMPUTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddComputerDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QLabel *label_add_computer;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_computer_name;
    QLabel *label_error_computer_name;
    QLineEdit *input_computer_name;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_computer_type;
    QLabel *label_error_computer_type;
    QComboBox *input_computer_type;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkbox_computer_was_built;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_computer_year_built;
    QLabel *label_error_computer_year_built;
    QLineEdit *input_computer_year_built;
    QPushButton *button_add_computer;

    void setupUi(QDialog *AddComputerDialog)
    {
        if (AddComputerDialog->objectName().isEmpty())
            AddComputerDialog->setObjectName(QStringLiteral("AddComputerDialog"));
        AddComputerDialog->resize(387, 374);
        verticalLayout_7 = new QVBoxLayout(AddComputerDialog);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_add_computer = new QLabel(AddComputerDialog);
        label_add_computer->setObjectName(QStringLiteral("label_add_computer"));

        verticalLayout_7->addWidget(label_add_computer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_computer_name = new QLabel(AddComputerDialog);
        label_computer_name->setObjectName(QStringLiteral("label_computer_name"));

        horizontalLayout->addWidget(label_computer_name);

        label_error_computer_name = new QLabel(AddComputerDialog);
        label_error_computer_name->setObjectName(QStringLiteral("label_error_computer_name"));

        horizontalLayout->addWidget(label_error_computer_name);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        input_computer_name = new QLineEdit(AddComputerDialog);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));

        verticalLayout_6->addWidget(input_computer_name);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_computer_type = new QLabel(AddComputerDialog);
        label_computer_type->setObjectName(QStringLiteral("label_computer_type"));

        horizontalLayout_3->addWidget(label_computer_type);

        label_error_computer_type = new QLabel(AddComputerDialog);
        label_error_computer_type->setObjectName(QStringLiteral("label_error_computer_type"));

        horizontalLayout_3->addWidget(label_error_computer_type);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_2);

        input_computer_type = new QComboBox(AddComputerDialog);
        input_computer_type->setObjectName(QStringLiteral("input_computer_type"));

        verticalLayout_6->addWidget(input_computer_type);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkbox_computer_was_built = new QCheckBox(AddComputerDialog);
        checkbox_computer_was_built->setObjectName(QStringLiteral("checkbox_computer_was_built"));

        verticalLayout_3->addWidget(checkbox_computer_was_built);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_computer_year_built = new QLabel(AddComputerDialog);
        label_computer_year_built->setObjectName(QStringLiteral("label_computer_year_built"));
        label_computer_year_built->setEnabled(false);

        horizontalLayout_2->addWidget(label_computer_year_built);

        label_error_computer_year_built = new QLabel(AddComputerDialog);
        label_error_computer_year_built->setObjectName(QStringLiteral("label_error_computer_year_built"));

        horizontalLayout_2->addWidget(label_error_computer_year_built);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_4);

        input_computer_year_built = new QLineEdit(AddComputerDialog);
        input_computer_year_built->setObjectName(QStringLiteral("input_computer_year_built"));
        input_computer_year_built->setEnabled(false);

        verticalLayout_6->addWidget(input_computer_year_built);

        button_add_computer = new QPushButton(AddComputerDialog);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));

        verticalLayout_6->addWidget(button_add_computer);


        verticalLayout_7->addLayout(verticalLayout_6);


        retranslateUi(AddComputerDialog);

        QMetaObject::connectSlotsByName(AddComputerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddComputerDialog)
    {
        AddComputerDialog->setWindowTitle(QApplication::translate("AddComputerDialog", "Dialog", 0));
        label_add_computer->setText(QApplication::translate("AddComputerDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Add a new computer</span></p></body></html>", 0));
        label_computer_name->setText(QApplication::translate("AddComputerDialog", "Name:", 0));
        label_error_computer_name->setText(QString());
        label_computer_type->setText(QApplication::translate("AddComputerDialog", "Type:", 0));
        label_error_computer_type->setText(QString());
        input_computer_type->clear();
        input_computer_type->insertItems(0, QStringList()
         << QApplication::translate("AddComputerDialog", "mechanical", 0)
         << QApplication::translate("AddComputerDialog", "electronic", 0)
         << QApplication::translate("AddComputerDialog", "transistor", 0)
        );
        checkbox_computer_was_built->setText(QApplication::translate("AddComputerDialog", "Was it built?", 0));
        label_computer_year_built->setText(QApplication::translate("AddComputerDialog", "YearBuilt:", 0));
        label_error_computer_year_built->setText(QString());
        button_add_computer->setText(QApplication::translate("AddComputerDialog", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class AddComputerDialog: public Ui_AddComputerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPUTERDIALOG_H
