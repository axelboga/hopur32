/********************************************************************************
** Form generated from reading UI file 'removeconnectionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECONNECTIONSDIALOG_H
#define UI_REMOVECONNECTIONSDIALOG_H

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

class Ui_RemoveConnectionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_connections_computer;
    QLabel *label_connections_scientist;
    QHBoxLayout *horizontalLayout;
    QListWidget *list_computers_remove_connections;
    QListWidget *list_scientists_remove_connections;
    QPushButton *button_remove;

    void setupUi(QDialog *RemoveConnectionsDialog)
    {
        if (RemoveConnectionsDialog->objectName().isEmpty())
            RemoveConnectionsDialog->setObjectName(QStringLiteral("RemoveConnectionsDialog"));
        RemoveConnectionsDialog->resize(582, 464);
        verticalLayout = new QVBoxLayout(RemoveConnectionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(RemoveConnectionsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_connections_computer = new QLabel(RemoveConnectionsDialog);
        label_connections_computer->setObjectName(QStringLiteral("label_connections_computer"));

        horizontalLayout_4->addWidget(label_connections_computer);

        label_connections_scientist = new QLabel(RemoveConnectionsDialog);
        label_connections_scientist->setObjectName(QStringLiteral("label_connections_scientist"));

        horizontalLayout_4->addWidget(label_connections_scientist);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        list_computers_remove_connections = new QListWidget(RemoveConnectionsDialog);
        list_computers_remove_connections->setObjectName(QStringLiteral("list_computers_remove_connections"));

        horizontalLayout->addWidget(list_computers_remove_connections);

        list_scientists_remove_connections = new QListWidget(RemoveConnectionsDialog);
        list_scientists_remove_connections->setObjectName(QStringLiteral("list_scientists_remove_connections"));

        horizontalLayout->addWidget(list_scientists_remove_connections);


        verticalLayout->addLayout(horizontalLayout);

        button_remove = new QPushButton(RemoveConnectionsDialog);
        button_remove->setObjectName(QStringLiteral("button_remove"));
        button_remove->setEnabled(false);

        verticalLayout->addWidget(button_remove);


        retranslateUi(RemoveConnectionsDialog);

        QMetaObject::connectSlotsByName(RemoveConnectionsDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveConnectionsDialog)
    {
        RemoveConnectionsDialog->setWindowTitle(QApplication::translate("RemoveConnectionsDialog", "Remove connections", 0));
        label->setText(QApplication::translate("RemoveConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Select a computer and a scientist to remove connection</span></p></body></html>", 0));
        label_connections_computer->setText(QApplication::translate("RemoveConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Computers</span></p></body></html>", 0));
        label_connections_scientist->setText(QApplication::translate("RemoveConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Scientists</span></p></body></html>", 0));
        button_remove->setText(QApplication::translate("RemoveConnectionsDialog", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveConnectionsDialog: public Ui_RemoveConnectionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECONNECTIONSDIALOG_H
