/********************************************************************************
** Form generated from reading UI file 'removeconnectionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveConnectionsDialog
{
public:
    QPushButton *button_remove;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *list_computers_remove_connections;
    QListWidget *list_scientists_remove_connections;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_connections_computer;
    QLabel *label_connections_scientist;

    void setupUi(QDialog *RemoveConnectionsDialog)
    {
        if (RemoveConnectionsDialog->objectName().isEmpty())
            RemoveConnectionsDialog->setObjectName(QStringLiteral("RemoveConnectionsDialog"));
        RemoveConnectionsDialog->resize(400, 363);
        button_remove = new QPushButton(RemoveConnectionsDialog);
        button_remove->setObjectName(QStringLiteral("button_remove"));
        button_remove->setEnabled(false);
        button_remove->setGeometry(QRect(140, 320, 115, 32));
        horizontalLayoutWidget = new QWidget(RemoveConnectionsDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 100, 361, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        list_computers_remove_connections = new QListWidget(horizontalLayoutWidget);
        list_computers_remove_connections->setObjectName(QStringLiteral("list_computers_remove_connections"));

        horizontalLayout->addWidget(list_computers_remove_connections);

        list_scientists_remove_connections = new QListWidget(horizontalLayoutWidget);
        list_scientists_remove_connections->setObjectName(QStringLiteral("list_scientists_remove_connections"));

        horizontalLayout->addWidget(list_scientists_remove_connections);

        label = new QLabel(RemoveConnectionsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 351, 51));
        layoutWidget = new QWidget(RemoveConnectionsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 361, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_connections_computer = new QLabel(layoutWidget);
        label_connections_computer->setObjectName(QStringLiteral("label_connections_computer"));

        horizontalLayout_4->addWidget(label_connections_computer);

        label_connections_scientist = new QLabel(layoutWidget);
        label_connections_scientist->setObjectName(QStringLiteral("label_connections_scientist"));

        horizontalLayout_4->addWidget(label_connections_scientist);


        retranslateUi(RemoveConnectionsDialog);

        QMetaObject::connectSlotsByName(RemoveConnectionsDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveConnectionsDialog)
    {
        RemoveConnectionsDialog->setWindowTitle(QApplication::translate("RemoveConnectionsDialog", "Dialog", 0));
        button_remove->setText(QApplication::translate("RemoveConnectionsDialog", "Remove", 0));
        label->setText(QApplication::translate("RemoveConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Select a computer and a scientist to </span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\"> remove connection from the lists below</span></p></body></html>", 0));
        label_connections_computer->setText(QApplication::translate("RemoveConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Computers</span></p></body></html>", 0));
        label_connections_scientist->setText(QApplication::translate("RemoveConnectionsDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Scientists</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveConnectionsDialog: public Ui_RemoveConnectionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECONNECTIONSDIALOG_H
