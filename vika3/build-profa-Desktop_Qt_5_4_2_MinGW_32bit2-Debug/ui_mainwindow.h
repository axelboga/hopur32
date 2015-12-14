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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
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
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabs;
    QWidget *tab_computer;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QLineEdit *input_filter_computers;
    QComboBox *dropdown_order_by;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *table_computers;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *button_remove_computer;
    QPushButton *button_add_computer;
    QWidget *tab_scientist;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *input_filter_scientists;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *table_scientists;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_10;
    QPushButton *button_remove_scientist;
    QPushButton *button_add_scientist;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(594, 633);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabs = new QTabWidget(centralWidget);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setTabShape(QTabWidget::Rounded);
        tabs->setTabsClosable(false);
        tab_computer = new QWidget();
        tab_computer->setObjectName(QStringLiteral("tab_computer"));
        verticalLayout_6 = new QVBoxLayout(tab_computer);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        input_filter_computers = new QLineEdit(tab_computer);
        input_filter_computers->setObjectName(QStringLiteral("input_filter_computers"));

        verticalLayout->addWidget(input_filter_computers);


        verticalLayout_6->addLayout(verticalLayout);

        dropdown_order_by = new QComboBox(tab_computer);
        dropdown_order_by->setObjectName(QStringLiteral("dropdown_order_by"));
        dropdown_order_by->setEnabled(true);

        verticalLayout_6->addWidget(dropdown_order_by);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        table_computers = new QTableWidget(tab_computer);
        if (table_computers->columnCount() < 4)
            table_computers->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_computers->setObjectName(QStringLiteral("table_computers"));
        table_computers->setEnabled(true);
        table_computers->setLayoutDirection(Qt::LeftToRight);
        table_computers->setAutoScroll(true);
        table_computers->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_computers->setSortingEnabled(true);
        table_computers->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(table_computers);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        button_remove_computer = new QPushButton(tab_computer);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));
        button_remove_computer->setEnabled(false);

        verticalLayout_5->addWidget(button_remove_computer);

        button_add_computer = new QPushButton(tab_computer);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));

        verticalLayout_5->addWidget(button_add_computer);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_4);

        tabs->addTab(tab_computer, QString());
        tab_scientist = new QWidget();
        tab_scientist->setObjectName(QStringLiteral("tab_scientist"));
        verticalLayoutWidget_5 = new QWidget(tab_scientist);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 10, 551, 51));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        input_filter_scientists = new QLineEdit(verticalLayoutWidget_5);
        input_filter_scientists->setObjectName(QStringLiteral("input_filter_scientists"));

        verticalLayout_7->addWidget(input_filter_scientists);

        verticalLayoutWidget_6 = new QWidget(tab_scientist);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 70, 541, 311));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        table_scientists = new QTableWidget(verticalLayoutWidget_6);
        if (table_scientists->columnCount() < 5)
            table_scientists->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        table_scientists->setObjectName(QStringLiteral("table_scientists"));
        table_scientists->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_scientists->setSortingEnabled(true);
        table_scientists->horizontalHeader()->setStretchLastSection(true);
        table_scientists->verticalHeader()->setStretchLastSection(false);

        verticalLayout_8->addWidget(table_scientists);

        verticalLayoutWidget_7 = new QWidget(tab_scientist);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(10, 400, 541, 121));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        button_remove_scientist = new QPushButton(verticalLayoutWidget_7);
        button_remove_scientist->setObjectName(QStringLiteral("button_remove_scientist"));
        button_remove_scientist->setEnabled(false);

        verticalLayout_10->addWidget(button_remove_scientist);

        button_add_scientist = new QPushButton(verticalLayoutWidget_7);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));

        verticalLayout_10->addWidget(button_add_scientist);


        verticalLayout_9->addLayout(verticalLayout_10);

        tabs->addTab(tab_scientist, QString());

        verticalLayout_2->addWidget(tabs);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 594, 31));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        input_filter_computers->setPlaceholderText(QApplication::translate("MainWindow", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name ", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Built? ", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Year Built", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove selected computer", 0));
        button_add_computer->setText(QApplication::translate("MainWindow", "Add a new computer", 0));
        tabs->setTabText(tabs->indexOf(tab_computer), QApplication::translate("MainWindow", "Computers", 0));
        input_filter_scientists->setPlaceholderText(QApplication::translate("MainWindow", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Sex", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_scientists->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Year of Death", 0));
        button_remove_scientist->setText(QApplication::translate("MainWindow", "Remove selected Scientist", 0));
        button_add_scientist->setText(QApplication::translate("MainWindow", "Add a new scientist", 0));
        tabs->setTabText(tabs->indexOf(tab_scientist), QApplication::translate("MainWindow", "Scientists", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
