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

class Ui_AddScientistDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_add_scientist;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_scientist_FirstName;
    QLabel *label_error_scientist_first_name;
    QLineEdit *input_scientist_first_name;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_scientist_last_name;
    QLabel *label_error_scientist_last_name;
    QLineEdit *input_scientist_last_name;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_scientist_gender;
    QComboBox *input_scientist_gender;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_scientist_year_born;
    QLabel *label_error_scientist_year_born;
    QLineEdit *input_scientist_year_born;
    QCheckBox *checkbox_scientist_is_dead;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_scientist_year_death;
    QLabel *label_error_scientist_year_of_death;
    QLineEdit *input_scientist_year_death;
    QPushButton *button_add_scientist;

    void setupUi(QDialog *AddScientistDialog)
    {
        if (AddScientistDialog->objectName().isEmpty())
            AddScientistDialog->setObjectName(QStringLiteral("AddScientistDialog"));
        AddScientistDialog->resize(400, 434);
        verticalLayout_3 = new QVBoxLayout(AddScientistDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_add_scientist = new QLabel(AddScientistDialog);
        label_add_scientist->setObjectName(QStringLiteral("label_add_scientist"));
        label_add_scientist->setWordWrap(true);

        verticalLayout_3->addWidget(label_add_scientist);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_scientist_FirstName = new QLabel(AddScientistDialog);
        label_scientist_FirstName->setObjectName(QStringLiteral("label_scientist_FirstName"));

        horizontalLayout->addWidget(label_scientist_FirstName);

        label_error_scientist_first_name = new QLabel(AddScientistDialog);
        label_error_scientist_first_name->setObjectName(QStringLiteral("label_error_scientist_first_name"));

        horizontalLayout->addWidget(label_error_scientist_first_name);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        input_scientist_first_name = new QLineEdit(AddScientistDialog);
        input_scientist_first_name->setObjectName(QStringLiteral("input_scientist_first_name"));

        verticalLayout_6->addWidget(input_scientist_first_name);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_scientist_last_name = new QLabel(AddScientistDialog);
        label_scientist_last_name->setObjectName(QStringLiteral("label_scientist_last_name"));
        label_scientist_last_name->setEnabled(true);

        horizontalLayout_2->addWidget(label_scientist_last_name);

        label_error_scientist_last_name = new QLabel(AddScientistDialog);
        label_error_scientist_last_name->setObjectName(QStringLiteral("label_error_scientist_last_name"));

        horizontalLayout_2->addWidget(label_error_scientist_last_name);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_4);

        input_scientist_last_name = new QLineEdit(AddScientistDialog);
        input_scientist_last_name->setObjectName(QStringLiteral("input_scientist_last_name"));
        input_scientist_last_name->setEnabled(true);

        verticalLayout_6->addWidget(input_scientist_last_name);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_scientist_gender = new QLabel(AddScientistDialog);
        label_scientist_gender->setObjectName(QStringLiteral("label_scientist_gender"));

        horizontalLayout_3->addWidget(label_scientist_gender);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_2);

        input_scientist_gender = new QComboBox(AddScientistDialog);
        input_scientist_gender->setObjectName(QStringLiteral("input_scientist_gender"));

        verticalLayout_6->addWidget(input_scientist_gender);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_scientist_year_born = new QLabel(AddScientistDialog);
        label_scientist_year_born->setObjectName(QStringLiteral("label_scientist_year_born"));
        label_scientist_year_born->setEnabled(true);

        horizontalLayout_4->addWidget(label_scientist_year_born);

        label_error_scientist_year_born = new QLabel(AddScientistDialog);
        label_error_scientist_year_born->setObjectName(QStringLiteral("label_error_scientist_year_born"));

        horizontalLayout_4->addWidget(label_error_scientist_year_born);


        verticalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_7);

        input_scientist_year_born = new QLineEdit(AddScientistDialog);
        input_scientist_year_born->setObjectName(QStringLiteral("input_scientist_year_born"));

        verticalLayout_3->addWidget(input_scientist_year_born);

        checkbox_scientist_is_dead = new QCheckBox(AddScientistDialog);
        checkbox_scientist_is_dead->setObjectName(QStringLiteral("checkbox_scientist_is_dead"));

        verticalLayout_3->addWidget(checkbox_scientist_is_dead);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_scientist_year_death = new QLabel(AddScientistDialog);
        label_scientist_year_death->setObjectName(QStringLiteral("label_scientist_year_death"));
        label_scientist_year_death->setEnabled(false);

        horizontalLayout_5->addWidget(label_scientist_year_death);

        label_error_scientist_year_of_death = new QLabel(AddScientistDialog);
        label_error_scientist_year_of_death->setObjectName(QStringLiteral("label_error_scientist_year_of_death"));

        horizontalLayout_5->addWidget(label_error_scientist_year_of_death);


        verticalLayout_3->addLayout(horizontalLayout_5);

        input_scientist_year_death = new QLineEdit(AddScientistDialog);
        input_scientist_year_death->setObjectName(QStringLiteral("input_scientist_year_death"));
        input_scientist_year_death->setEnabled(false);

        verticalLayout_3->addWidget(input_scientist_year_death);

        button_add_scientist = new QPushButton(AddScientistDialog);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));

        verticalLayout_3->addWidget(button_add_scientist);

        label_add_scientist->raise();
        input_scientist_year_born->raise();
        button_add_scientist->raise();
        input_scientist_year_death->raise();
        checkbox_scientist_is_dead->raise();

        retranslateUi(AddScientistDialog);

        QMetaObject::connectSlotsByName(AddScientistDialog);
    } // setupUi

    void retranslateUi(QDialog *AddScientistDialog)
    {
        AddScientistDialog->setWindowTitle(QApplication::translate("AddScientistDialog", "Add scientist", 0));
        label_add_scientist->setText(QApplication::translate("AddScientistDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#213dbc;\">Add a new scientist</span></p></body></html>", 0));
        label_scientist_FirstName->setText(QApplication::translate("AddScientistDialog", "First Name:", 0));
        label_error_scientist_first_name->setText(QString());
        label_scientist_last_name->setText(QApplication::translate("AddScientistDialog", "Last Name:", 0));
        label_error_scientist_last_name->setText(QString());
        label_scientist_gender->setText(QApplication::translate("AddScientistDialog", "Gender:", 0));
        input_scientist_gender->clear();
        input_scientist_gender->insertItems(0, QStringList()
         << QApplication::translate("AddScientistDialog", "female", 0)
         << QApplication::translate("AddScientistDialog", "male", 0)
        );
        label_scientist_year_born->setText(QApplication::translate("AddScientistDialog", "Year of birth:", 0));
        label_error_scientist_year_born->setText(QString());
        checkbox_scientist_is_dead->setText(QApplication::translate("AddScientistDialog", "Is the scientist dead?", 0));
        label_scientist_year_death->setText(QApplication::translate("AddScientistDialog", "Year of death:", 0));
        label_error_scientist_year_of_death->setText(QString());
        button_add_scientist->setText(QApplication::translate("AddScientistDialog", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientistDialog: public Ui_AddScientistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTISTDIALOG_H
