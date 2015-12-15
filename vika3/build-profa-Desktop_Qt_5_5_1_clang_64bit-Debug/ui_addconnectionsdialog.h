/********************************************************************************
** Form generated from reading UI file 'addconnectionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddConnectionsDialog
{
public:
    QPushButton *button_add_connections;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *list_computers_add_connections;
    QListWidget *list_scientists_add_connections;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_connections_computer;
    QLabel *label_connections_scientist;

    void setupUi(QDialog *AddConnectionsDialog)
    {
        if (AddConnectionsDialog->objectName().isEmpty())
            AddConnectionsDialog->setObjectName(QStringLiteral("AddConnectionsDialog"));
        AddConnectionsDialog->resize(400, 333);
        button_add_connections = new QPushButton(AddConnectionsDialog);
        button_add_connections->setObjectName(QStringLiteral("button_add_connections"));
        button_add_connections->setEnabled(false);
        button_add_connections->setGeometry(QRect(140, 300, 115, 32));
        horizontalLayoutWidget = new QWidget(AddConnectionsDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 100, 351, 191));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        list_computers_add_connections = new QListWidget(horizontalLayoutWidget);
        list_computers_add_connections->setObjectName(QStringLiteral("list_computers_add_connections"));
        list_computers_add_connections->setSelectionMode(QAbstractItemView::SingleSelection);
        list_computers_add_connections->setSelectionBehavior(QAbstractItemView::SelectItems);

        horizontalLayout->addWidget(list_computers_add_connections);

        list_scientists_add_connections = new QListWidget(horizontalLayoutWidget);
        list_scientists_add_connections->setObjectName(QStringLiteral("list_scientists_add_connections"));
        list_scientists_add_connections->setSelectionMode(QAbstractItemView::MultiSelection);
        list_scientists_add_connections->setSelectionBehavior(QAbstractItemView::SelectItems);

        horizontalLayout->addWidget(list_scientists_add_connections);

        label = new QLabel(AddConnectionsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 351, 51));
        layoutWidget = new QWidget(AddConnectionsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 68, 361, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_connections_computer = new QLabel(layoutWidget);
        label_connections_computer->setObjectName(QStringLiteral("label_connections_computer"));

        horizontalLayout_4->addWidget(label_connections_computer);

        label_connections_scientist = new QLabel(layoutWidget);
        label_connections_scientist->setObjectName(QStringLiteral("label_connections_scientist"));

        horizontalLayout_4->addWidget(label_connections_scientist);


        retranslateUi(AddConnectionsDialog);

        QMetaObject::connectSlotsByName(AddConnectionsDialog);
    } // setupUi

    void retranslateUi(QDialog *AddConnectionsDialog)
    {
        AddConnectionsDialog->setWindowTitle(QApplication::translate("AddConnectionsDialog", "Add connections", 0));
        button_add_connections->setText(QApplication::translate("AddConnectionsDialog", "Add", 0));
        label->setText(QApplication::translate("AddConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Select a computer and a scientist </span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">to connect for the lists below</span></p></body></html>", 0));
        label_connections_computer->setText(QApplication::translate("AddConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Computers</span></p></body></html>", 0));
        label_connections_scientist->setText(QApplication::translate("AddConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Scientists</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConnectionsDialog: public Ui_AddConnectionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONNECTIONSDIALOG_H
