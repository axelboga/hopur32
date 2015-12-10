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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *list_computers;
    QLineEdit *input_filter_computers;
    QLineEdit *input_computer_name;
    QLabel *label_add_computer;
    QLineEdit *input_computer_type;
    QLabel *label_computer_name;
    QLabel *label_computer_type;
    QLabel *label_computer_year_built;
    QLineEdit *input_computer_year_built;
    QPushButton *pushButton;
    QLabel *label_computer_was_built;
    QLineEdit *input_computer_was_built;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(709, 634);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        list_computers = new QListWidget(centralWidget);
        list_computers->setObjectName(QStringLiteral("list_computers"));
        list_computers->setGeometry(QRect(30, 30, 531, 281));
        input_filter_computers = new QLineEdit(centralWidget);
        input_filter_computers->setObjectName(QStringLiteral("input_filter_computers"));
        input_filter_computers->setGeometry(QRect(30, 0, 531, 31));
        input_computer_name = new QLineEdit(centralWidget);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));
        input_computer_name->setGeometry(QRect(30, 380, 531, 21));
        label_add_computer = new QLabel(centralWidget);
        label_add_computer->setObjectName(QStringLiteral("label_add_computer"));
        label_add_computer->setGeometry(QRect(30, 340, 161, 19));
        input_computer_type = new QLineEdit(centralWidget);
        input_computer_type->setObjectName(QStringLiteral("input_computer_type"));
        input_computer_type->setGeometry(QRect(30, 420, 531, 21));
        label_computer_name = new QLabel(centralWidget);
        label_computer_name->setObjectName(QStringLiteral("label_computer_name"));
        label_computer_name->setGeometry(QRect(30, 360, 68, 19));
        label_computer_type = new QLabel(centralWidget);
        label_computer_type->setObjectName(QStringLiteral("label_computer_type"));
        label_computer_type->setGeometry(QRect(30, 400, 68, 19));
        label_computer_year_built = new QLabel(centralWidget);
        label_computer_year_built->setObjectName(QStringLiteral("label_computer_year_built"));
        label_computer_year_built->setGeometry(QRect(30, 480, 68, 19));
        input_computer_year_built = new QLineEdit(centralWidget);
        input_computer_year_built->setObjectName(QStringLiteral("input_computer_year_built"));
        input_computer_year_built->setGeometry(QRect(30, 500, 531, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 520, 521, 31));
        label_computer_was_built = new QLabel(centralWidget);
        label_computer_was_built->setObjectName(QStringLiteral("label_computer_was_built"));
        label_computer_was_built->setGeometry(QRect(30, 440, 68, 19));
        input_computer_was_built = new QLineEdit(centralWidget);
        input_computer_was_built->setObjectName(QStringLiteral("input_computer_was_built"));
        input_computer_was_built->setGeometry(QRect(30, 460, 531, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 709, 31));
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
        label_add_computer->setText(QApplication::translate("MainWindow", "Add a new computer", 0));
        label_computer_name->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_computer_type->setText(QApplication::translate("MainWindow", "Type", 0));
        label_computer_year_built->setText(QApplication::translate("MainWindow", "YearBuilt", 0));
        pushButton->setText(QApplication::translate("MainWindow", "AddComputer", 0));
        label_computer_was_built->setText(QApplication::translate("MainWindow", "WasBuilt", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
