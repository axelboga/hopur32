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
    QPushButton *button_connections_select_computer;
    QPushButton *button_connections_select_scientist;

    void setupUi(QDialog *AddConnectionsDialog)
    {
        if (AddConnectionsDialog->objectName().isEmpty())
            AddConnectionsDialog->setObjectName(QStringLiteral("AddConnectionsDialog"));
        AddConnectionsDialog->resize(400, 300);
        button_add_connections = new QPushButton(AddConnectionsDialog);
        button_add_connections->setObjectName(QStringLiteral("button_add_connections"));
        button_add_connections->setEnabled(true);
        button_add_connections->setGeometry(QRect(150, 270, 115, 32));
        horizontalLayoutWidget = new QWidget(AddConnectionsDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 50, 351, 191));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        list_computers_add_connections = new QListWidget(horizontalLayoutWidget);
        list_computers_add_connections->setObjectName(QStringLiteral("list_computers_add_connections"));
        list_computers_add_connections->setSelectionMode(QAbstractItemView::MultiSelection);

        horizontalLayout->addWidget(list_computers_add_connections);

        list_scientists_add_connections = new QListWidget(horizontalLayoutWidget);
        list_scientists_add_connections->setObjectName(QStringLiteral("list_scientists_add_connections"));
        list_scientists_add_connections->setSelectionMode(QAbstractItemView::MultiSelection);
        list_scientists_add_connections->setSelectionBehavior(QAbstractItemView::SelectItems);

        horizontalLayout->addWidget(list_scientists_add_connections);

        button_connections_select_computer = new QPushButton(AddConnectionsDialog);
        button_connections_select_computer->setObjectName(QStringLiteral("button_connections_select_computer"));
        button_connections_select_computer->setEnabled(false);
        button_connections_select_computer->setGeometry(QRect(30, 240, 151, 32));
        button_connections_select_scientist = new QPushButton(AddConnectionsDialog);
        button_connections_select_scientist->setObjectName(QStringLiteral("button_connections_select_scientist"));
        button_connections_select_scientist->setEnabled(false);
        button_connections_select_scientist->setGeometry(QRect(214, 240, 141, 32));

        retranslateUi(AddConnectionsDialog);

        QMetaObject::connectSlotsByName(AddConnectionsDialog);
    } // setupUi

    void retranslateUi(QDialog *AddConnectionsDialog)
    {
        AddConnectionsDialog->setWindowTitle(QApplication::translate("AddConnectionsDialog", "Dialog", 0));
        button_add_connections->setText(QApplication::translate("AddConnectionsDialog", "Add", 0));
        button_connections_select_computer->setText(QApplication::translate("AddConnectionsDialog", "Select computer", 0));
        button_connections_select_scientist->setText(QApplication::translate("AddConnectionsDialog", "Select scientist", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConnectionsDialog: public Ui_AddConnectionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONNECTIONSDIALOG_H
