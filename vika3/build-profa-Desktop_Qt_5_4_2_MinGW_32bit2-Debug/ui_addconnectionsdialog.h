/********************************************************************************
** Form generated from reading UI file 'addconnectionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONNECTIONSDIALOG_H
#define UI_ADDCONNECTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConnectionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_connections_computer;
    QLabel *label_connections_scientist;
    QHBoxLayout *horizontalLayout;
    QListWidget *list_computers_add_connections;
    QListWidget *list_scientists_add_connections;
    QPushButton *button_add_connections;

    void setupUi(QDialog *AddConnectionsDialog)
    {
        if (AddConnectionsDialog->objectName().isEmpty())
            AddConnectionsDialog->setObjectName(QStringLiteral("AddConnectionsDialog"));
        AddConnectionsDialog->resize(400, 333);
        verticalLayout = new QVBoxLayout(AddConnectionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AddConnectionsDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_connections_computer = new QLabel(AddConnectionsDialog);
        label_connections_computer->setObjectName(QStringLiteral("label_connections_computer"));

        horizontalLayout_4->addWidget(label_connections_computer);

        label_connections_scientist = new QLabel(AddConnectionsDialog);
        label_connections_scientist->setObjectName(QStringLiteral("label_connections_scientist"));

        horizontalLayout_4->addWidget(label_connections_scientist);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        list_computers_add_connections = new QListWidget(AddConnectionsDialog);
        list_computers_add_connections->setObjectName(QStringLiteral("list_computers_add_connections"));
        list_computers_add_connections->setSelectionMode(QAbstractItemView::SingleSelection);
        list_computers_add_connections->setSelectionBehavior(QAbstractItemView::SelectItems);

        horizontalLayout->addWidget(list_computers_add_connections);

        list_scientists_add_connections = new QListWidget(AddConnectionsDialog);
        list_scientists_add_connections->setObjectName(QStringLiteral("list_scientists_add_connections"));
        list_scientists_add_connections->setSelectionMode(QAbstractItemView::MultiSelection);
        list_scientists_add_connections->setSelectionBehavior(QAbstractItemView::SelectItems);

        horizontalLayout->addWidget(list_scientists_add_connections);


        verticalLayout->addLayout(horizontalLayout);

        button_add_connections = new QPushButton(AddConnectionsDialog);
        button_add_connections->setObjectName(QStringLiteral("button_add_connections"));
        button_add_connections->setEnabled(false);

        verticalLayout->addWidget(button_add_connections);


        retranslateUi(AddConnectionsDialog);

        QMetaObject::connectSlotsByName(AddConnectionsDialog);
    } // setupUi

    void retranslateUi(QDialog *AddConnectionsDialog)
    {
        AddConnectionsDialog->setWindowTitle(QApplication::translate("AddConnectionsDialog", "Add connections", 0));
        label->setText(QApplication::translate("AddConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Select a computer and </span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">a scientist to connect</span></p></body></html>", 0));
        label_connections_computer->setText(QApplication::translate("AddConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Computers</span></p></body></html>", 0));
        label_connections_scientist->setText(QApplication::translate("AddConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Scientists</span></p></body></html>", 0));
        button_add_connections->setText(QApplication::translate("AddConnectionsDialog", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConnectionsDialog: public Ui_AddConnectionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONNECTIONSDIALOG_H
