/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *input_filter_computers;
    QComboBox *dropdown_order_by;
    QListWidget *list_computers;
    QPushButton *button_remove_computer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_add_computer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_computer_name;
    QLabel *label_error_computer_name;
    QLineEdit *input_computer_name;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_computer_type;
    QLineEdit *input_computer_type;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_computer_was_built;
    QLineEdit *input_computer_was_built;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_computer_year_built;
    QLabel *label_error_computer_year_built;
    QLineEdit *input_computer_year_built;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(595, 649);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        input_filter_computers = new QLineEdit(centralWidget);
        input_filter_computers->setObjectName(QStringLiteral("input_filter_computers"));

        verticalLayout_6->addWidget(input_filter_computers);

        dropdown_order_by = new QComboBox(centralWidget);
        dropdown_order_by->setObjectName(QStringLiteral("dropdown_order_by"));

        verticalLayout_6->addWidget(dropdown_order_by);

        list_computers = new QListWidget(centralWidget);
        list_computers->setObjectName(QStringLiteral("list_computers"));

        verticalLayout_6->addWidget(list_computers);

        button_remove_computer = new QPushButton(centralWidget);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));
        button_remove_computer->setEnabled(false);

        verticalLayout_6->addWidget(button_remove_computer);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_add_computer = new QLabel(centralWidget);
        label_add_computer->setObjectName(QStringLiteral("label_add_computer"));

        verticalLayout_5->addWidget(label_add_computer);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_computer_name = new QLabel(centralWidget);
        label_computer_name->setObjectName(QStringLiteral("label_computer_name"));

        horizontalLayout->addWidget(label_computer_name);

        label_error_computer_name = new QLabel(centralWidget);
        label_error_computer_name->setObjectName(QStringLiteral("label_error_computer_name"));

        horizontalLayout->addWidget(label_error_computer_name);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout);

        input_computer_name = new QLineEdit(centralWidget);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));

        verticalLayout_6->addWidget(input_computer_name);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_computer_type = new QLabel(centralWidget);
        label_computer_type->setObjectName(QStringLiteral("label_computer_type"));

        horizontalLayout_3->addWidget(label_computer_type);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_2);

        input_computer_type = new QLineEdit(centralWidget);
        input_computer_type->setObjectName(QStringLiteral("input_computer_type"));

        verticalLayout_6->addWidget(input_computer_type);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_computer_was_built = new QLabel(centralWidget);
        label_computer_was_built->setObjectName(QStringLiteral("label_computer_was_built"));

        horizontalLayout_4->addWidget(label_computer_was_built);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_3);

        input_computer_was_built = new QLineEdit(centralWidget);
        input_computer_was_built->setObjectName(QStringLiteral("input_computer_was_built"));

        verticalLayout_6->addWidget(input_computer_was_built);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_computer_year_built = new QLabel(centralWidget);
        label_computer_year_built->setObjectName(QStringLiteral("label_computer_year_built"));

        horizontalLayout_2->addWidget(label_computer_year_built);

        label_error_computer_year_built = new QLabel(centralWidget);
        label_error_computer_year_built->setObjectName(QStringLiteral("label_error_computer_year_built"));

        horizontalLayout_2->addWidget(label_error_computer_year_built);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_4);

        input_computer_year_built = new QLineEdit(centralWidget);
        input_computer_year_built->setObjectName(QStringLiteral("input_computer_year_built"));

        verticalLayout_6->addWidget(input_computer_year_built);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_6->addWidget(pushButton);

        MainWindow->setCentralWidget(centralWidget);
        list_computers->raise();
        input_filter_computers->raise();
        input_computer_name->raise();
        input_computer_type->raise();
        input_computer_year_built->raise();
        pushButton->raise();
        input_computer_was_built->raise();
        button_remove_computer->raise();
        dropdown_order_by->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 595, 31));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        input_filter_computers->setPlaceholderText(QApplication::translate("MainWindow", "filter_computers", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove selected computer", 0));
        label_add_computer->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Add a new computer</span></p></body></html>", 0));
        label_computer_name->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_error_computer_name->setText(QString());
        label_computer_type->setText(QApplication::translate("MainWindow", "Type:", 0));
        label_computer_was_built->setText(QApplication::translate("MainWindow", "WasBuilt:", 0));
        label_computer_year_built->setText(QApplication::translate("MainWindow", "YearBuilt:", 0));
        label_error_computer_year_built->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
