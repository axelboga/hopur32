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
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabs;
    QWidget *tab_computer;
    QComboBox *dropdown_order_by;
    QPushButton *button_add_computer;
    QLineEdit *input_filter_computers;
    QPushButton *button_remove_computer;
    QTableWidget *table_computers;
    QWidget *tab_scientist;
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
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabs = new QTabWidget(centralWidget);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setTabShape(QTabWidget::Rounded);
        tabs->setTabsClosable(false);
        tab_computer = new QWidget();
        tab_computer->setObjectName(QStringLiteral("tab_computer"));
        dropdown_order_by = new QComboBox(tab_computer);
        dropdown_order_by->setObjectName(QStringLiteral("dropdown_order_by"));
        dropdown_order_by->setGeometry(QRect(3, 49, 561, 26));
        button_add_computer = new QPushButton(tab_computer);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));
        button_add_computer->setGeometry(QRect(0, 450, 561, 32));
        input_filter_computers = new QLineEdit(tab_computer);
        input_filter_computers->setObjectName(QStringLiteral("input_filter_computers"));
        input_filter_computers->setGeometry(QRect(6, 20, 551, 21));
        button_remove_computer = new QPushButton(tab_computer);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));
        button_remove_computer->setEnabled(false);
        button_remove_computer->setGeometry(QRect(0, 370, 561, 41));
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
        table_computers->setGeometry(QRect(5, 81, 561, 281));
        table_computers->setAutoScroll(true);
        table_computers->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_computers->setSortingEnabled(true);
        tabs->addTab(tab_computer, QString());
        tab_scientist = new QWidget();
        tab_scientist->setObjectName(QStringLiteral("tab_scientist"));
        tabs->addTab(tab_scientist, QString());

        verticalLayout_6->addWidget(tabs);

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

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        button_add_computer->setText(QApplication::translate("MainWindow", "Add a new computer", 0));
        input_filter_computers->setPlaceholderText(QApplication::translate("MainWindow", "filter_computers", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove selected computer", 0));
        QTableWidgetItem *___qtablewidgetitem = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name ", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Built ? ", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Year Built", 0));
        tabs->setTabText(tabs->indexOf(tab_computer), QApplication::translate("MainWindow", "Computers", 0));
        tabs->setTabText(tabs->indexOf(tab_scientist), QApplication::translate("MainWindow", "Scientists", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
