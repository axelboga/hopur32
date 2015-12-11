/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *input_filter_scientists;
    QWidget *tab_computer;
    QLineEdit *input_computer_was_built;
    QListWidget *list_computers;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_computer_name_2;
    QLabel *label_error_computer_name_2;
    QComboBox *dropdown_order_by_computers;
    QLineEdit *input_computer_name;
    QPushButton *pushButton;
    QLineEdit *input_computer_year_built;
    QLineEdit *input_filter_computers;
    QPushButton *button_remove_computer;
    QLineEdit *input_computer_type;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_computer_type_2;
    QLabel *label_computer_was_built_2;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_computer_year_built_2;
    QLabel *label_error_computer_year_built_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_add_computer_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_9;
    QWidget *tab_scientist;
    QLineEdit *lineEdit;
    QComboBox *dropdown_order_by_scientists;
    QTableWidget *table_scientists;
    QPushButton *button_remove_scientist;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(598, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        input_filter_scientists = new QTabWidget(centralWidget);
        input_filter_scientists->setObjectName(QStringLiteral("input_filter_scientists"));
        input_filter_scientists->setTabShape(QTabWidget::Rounded);
        input_filter_scientists->setTabsClosable(false);
        tab_computer = new QWidget();
        tab_computer->setObjectName(QStringLiteral("tab_computer"));
        input_computer_was_built = new QLineEdit(tab_computer);
        input_computer_was_built->setObjectName(QStringLiteral("input_computer_was_built"));
        input_computer_was_built->setGeometry(QRect(10, 390, 551, 21));
        list_computers = new QListWidget(tab_computer);
        list_computers->setObjectName(QStringLiteral("list_computers"));
        list_computers->setGeometry(QRect(6, 81, 551, 79));
        layoutWidget_2 = new QWidget(tab_computer);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 260, 541, 21));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_computer_name_2 = new QLabel(layoutWidget_2);
        label_computer_name_2->setObjectName(QStringLiteral("label_computer_name_2"));

        horizontalLayout_8->addWidget(label_computer_name_2);

        label_error_computer_name_2 = new QLabel(layoutWidget_2);
        label_error_computer_name_2->setObjectName(QStringLiteral("label_error_computer_name_2"));

        horizontalLayout_8->addWidget(label_error_computer_name_2);


        verticalLayout_8->addLayout(horizontalLayout_8);

        dropdown_order_by_computers = new QComboBox(tab_computer);
        dropdown_order_by_computers->setObjectName(QStringLiteral("dropdown_order_by_computers"));
        dropdown_order_by_computers->setGeometry(QRect(3, 49, 561, 26));
        input_computer_name = new QLineEdit(tab_computer);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));
        input_computer_name->setGeometry(QRect(10, 290, 551, 21));
        pushButton = new QPushButton(tab_computer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 480, 561, 32));
        input_computer_year_built = new QLineEdit(tab_computer);
        input_computer_year_built->setObjectName(QStringLiteral("input_computer_year_built"));
        input_computer_year_built->setGeometry(QRect(10, 450, 551, 21));
        input_filter_computers = new QLineEdit(tab_computer);
        input_filter_computers->setObjectName(QStringLiteral("input_filter_computers"));
        input_filter_computers->setGeometry(QRect(6, 20, 551, 21));
        button_remove_computer = new QPushButton(tab_computer);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));
        button_remove_computer->setEnabled(false);
        button_remove_computer->setGeometry(QRect(0, 170, 561, 32));
        input_computer_type = new QLineEdit(tab_computer);
        input_computer_type->setObjectName(QStringLiteral("input_computer_type"));
        input_computer_type->setGeometry(QRect(10, 340, 551, 21));
        widget = new QWidget(tab_computer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 320, 551, 21));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));

        horizontalLayout_7->addLayout(verticalLayout_10);

        label_computer_type_2 = new QLabel(tab_computer);
        label_computer_type_2->setObjectName(QStringLiteral("label_computer_type_2"));
        label_computer_type_2->setGeometry(QRect(10, 320, 41, 19));
        label_computer_was_built_2 = new QLabel(tab_computer);
        label_computer_was_built_2->setObjectName(QStringLiteral("label_computer_was_built_2"));
        label_computer_was_built_2->setGeometry(QRect(10, 370, 547, 17));
        layoutWidget_5 = new QWidget(tab_computer);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 370, 549, 19));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        verticalLayout_11->addLayout(horizontalLayout_6);

        widget1 = new QWidget(tab_computer);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 420, 551, 21));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_computer_year_built_2 = new QLabel(widget1);
        label_computer_year_built_2->setObjectName(QStringLiteral("label_computer_year_built_2"));

        horizontalLayout_5->addWidget(label_computer_year_built_2);

        label_error_computer_year_built_2 = new QLabel(widget1);
        label_error_computer_year_built_2->setObjectName(QStringLiteral("label_error_computer_year_built_2"));

        horizontalLayout_5->addWidget(label_error_computer_year_built_2);

        verticalLayoutWidget = new QWidget(tab_computer);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 230, 541, 21));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_add_computer_2 = new QLabel(verticalLayoutWidget);
        label_add_computer_2->setObjectName(QStringLiteral("label_add_computer_2"));

        verticalLayout_7->addWidget(label_add_computer_2);

        layoutWidget_3 = new QWidget(tab_computer);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 420, 551, 21));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        input_filter_scientists->addTab(tab_computer, QString());
        tab_scientist = new QWidget();
        tab_scientist->setObjectName(QStringLiteral("tab_scientist"));
        lineEdit = new QLineEdit(tab_scientist);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 10, 561, 21));
        dropdown_order_by_scientists = new QComboBox(tab_scientist);
        dropdown_order_by_scientists->setObjectName(QStringLiteral("dropdown_order_by_scientists"));
        dropdown_order_by_scientists->setGeometry(QRect(0, 40, 561, 26));
        table_scientists = new QTableWidget(tab_scientist);
        table_scientists->setObjectName(QStringLiteral("table_scientists"));
        table_scientists->setGeometry(QRect(0, 70, 561, 231));
        button_remove_scientist = new QPushButton(tab_scientist);
        button_remove_scientist->setObjectName(QStringLiteral("button_remove_scientist"));
        button_remove_scientist->setGeometry(QRect(0, 310, 561, 41));
        label = new QLabel(tab_scientist);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 360, 101, 16));
        label->setLineWidth(0);
        label_2 = new QLabel(tab_scientist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 380, 71, 16));
        input_filter_scientists->addTab(tab_scientist, QString());

        verticalLayout_6->addWidget(input_filter_scientists);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 598, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        input_filter_scientists->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_computer_name_2->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_error_computer_name_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Add", 0));
        input_filter_computers->setPlaceholderText(QApplication::translate("MainWindow", "Type search term here", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove selected computer", 0));
        label_computer_type_2->setText(QApplication::translate("MainWindow", "Type:", 0));
        label_computer_was_built_2->setText(QApplication::translate("MainWindow", "WasBuilt:", 0));
        label_computer_year_built_2->setText(QApplication::translate("MainWindow", "YearBuilt:", 0));
        label_error_computer_year_built_2->setText(QString());
        label_add_computer_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Add a new computer</span></p></body></html>", 0));
        input_filter_scientists->setTabText(input_filter_scientists->indexOf(tab_computer), QApplication::translate("MainWindow", "Computers", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Type search term here", 0));
        button_remove_scientist->setText(QApplication::translate("MainWindow", "Remove selected scientist", 0));
        label->setText(QApplication::translate("MainWindow", "Add scientist", 0));
        label_2->setText(QApplication::translate("MainWindow", "FirstName", 0));
        input_filter_scientists->setTabText(input_filter_scientists->indexOf(tab_scientist), QApplication::translate("MainWindow", "Scientists", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
