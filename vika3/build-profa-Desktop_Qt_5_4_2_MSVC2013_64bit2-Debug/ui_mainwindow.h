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
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
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
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *input_filter_scientists;
    QComboBox *dropdown_scientist_order_by;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *table_scientists;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_10;
    QPushButton *button_remove_scientist;
    QPushButton *button_add_scientist;
    QWidget *tab_connections;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_11;
    QTabWidget *connections_tabs;
    QWidget *tab_computer_connections;
    QVBoxLayout *verticalLayout_20;
    QPushButton *button_see_connections_computer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_computers_connections_computer;
    QLabel *label_computers_connections_scientist;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout;
    QListWidget *computer_list_computer_connections;
    QListWidget *scientist_list_computer_connections;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_14;
    QPushButton *button_add_computer_connection;
    QPushButton *button_remove_computer_connection;
    QWidget *tab_scientist_connections;
    QVBoxLayout *verticalLayout_19;
    QPushButton *button_see_connections_scientist;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_scientists_connections_scientist;
    QLabel *label_scientists_connection_computer;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *scientist_list_scientist_connections;
    QListWidget *computer_list_scientist_connections;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_17;
    QPushButton *button_add_scientist_connection;
    QPushButton *button_remove_scientist_connection;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(670, 633);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_5);

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
        table_computers->setSortingEnabled(false);
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/compu-.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        button_remove_computer->setIcon(icon);

        verticalLayout_5->addWidget(button_remove_computer);

        button_add_computer = new QPushButton(tab_computer);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/compu+.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        button_add_computer->setIcon(icon1);

        verticalLayout_5->addWidget(button_add_computer);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_4);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/monitor-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabs->addTab(tab_computer, icon2, QString());
        tab_scientist = new QWidget();
        tab_scientist->setObjectName(QStringLiteral("tab_scientist"));
        verticalLayout_21 = new QVBoxLayout(tab_scientist);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        input_filter_scientists = new QLineEdit(tab_scientist);
        input_filter_scientists->setObjectName(QStringLiteral("input_filter_scientists"));

        verticalLayout_7->addWidget(input_filter_scientists);


        verticalLayout_21->addLayout(verticalLayout_7);

        dropdown_scientist_order_by = new QComboBox(tab_scientist);
        dropdown_scientist_order_by->setObjectName(QStringLiteral("dropdown_scientist_order_by"));

        verticalLayout_21->addWidget(dropdown_scientist_order_by);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        table_scientists = new QTableWidget(tab_scientist);
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
        table_scientists->setSortingEnabled(false);
        table_scientists->horizontalHeader()->setStretchLastSection(true);
        table_scientists->verticalHeader()->setStretchLastSection(false);

        verticalLayout_8->addWidget(table_scientists);


        verticalLayout_21->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        button_remove_scientist = new QPushButton(tab_scientist);
        button_remove_scientist->setObjectName(QStringLiteral("button_remove_scientist"));
        button_remove_scientist->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/minuskall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        button_remove_scientist->setIcon(icon3);

        verticalLayout_10->addWidget(button_remove_scientist);

        button_add_scientist = new QPushButton(tab_scientist);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/addkall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        button_add_scientist->setIcon(icon4);

        verticalLayout_10->addWidget(button_add_scientist);


        verticalLayout_9->addLayout(verticalLayout_10);


        verticalLayout_21->addLayout(verticalLayout_9);

        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/scientistIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabs->addTab(tab_scientist, icon5, QString());
        tab_connections = new QWidget();
        tab_connections->setObjectName(QStringLiteral("tab_connections"));
        verticalLayout_18 = new QVBoxLayout(tab_connections);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        connections_tabs = new QTabWidget(tab_connections);
        connections_tabs->setObjectName(QStringLiteral("connections_tabs"));
        tab_computer_connections = new QWidget();
        tab_computer_connections->setObjectName(QStringLiteral("tab_computer_connections"));
        verticalLayout_20 = new QVBoxLayout(tab_computer_connections);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        button_see_connections_computer = new QPushButton(tab_computer_connections);
        button_see_connections_computer->setObjectName(QStringLiteral("button_see_connections_computer"));
        button_see_connections_computer->setEnabled(false);

        verticalLayout_20->addWidget(button_see_connections_computer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_computers_connections_computer = new QLabel(tab_computer_connections);
        label_computers_connections_computer->setObjectName(QStringLiteral("label_computers_connections_computer"));

        horizontalLayout_4->addWidget(label_computers_connections_computer);

        label_computers_connections_scientist = new QLabel(tab_computer_connections);
        label_computers_connections_scientist->setObjectName(QStringLiteral("label_computers_connections_scientist"));

        horizontalLayout_4->addWidget(label_computers_connections_scientist);


        verticalLayout_20->addLayout(horizontalLayout_4);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        computer_list_computer_connections = new QListWidget(tab_computer_connections);
        computer_list_computer_connections->setObjectName(QStringLiteral("computer_list_computer_connections"));

        horizontalLayout->addWidget(computer_list_computer_connections);

        scientist_list_computer_connections = new QListWidget(tab_computer_connections);
        scientist_list_computer_connections->setObjectName(QStringLiteral("scientist_list_computer_connections"));

        horizontalLayout->addWidget(scientist_list_computer_connections);


        verticalLayout_12->addLayout(horizontalLayout);


        verticalLayout_20->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        button_add_computer_connection = new QPushButton(tab_computer_connections);
        button_add_computer_connection->setObjectName(QStringLiteral("button_add_computer_connection"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/tengi1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        button_add_computer_connection->setIcon(icon6);

        verticalLayout_14->addWidget(button_add_computer_connection);

        button_remove_computer_connection = new QPushButton(tab_computer_connections);
        button_remove_computer_connection->setObjectName(QStringLiteral("button_remove_computer_connection"));
        button_remove_computer_connection->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/tengi2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        button_remove_computer_connection->setIcon(icon7);

        verticalLayout_14->addWidget(button_remove_computer_connection);


        verticalLayout_13->addLayout(verticalLayout_14);


        verticalLayout_20->addLayout(verticalLayout_13);

        connections_tabs->addTab(tab_computer_connections, QString());
        tab_scientist_connections = new QWidget();
        tab_scientist_connections->setObjectName(QStringLiteral("tab_scientist_connections"));
        verticalLayout_19 = new QVBoxLayout(tab_scientist_connections);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        button_see_connections_scientist = new QPushButton(tab_scientist_connections);
        button_see_connections_scientist->setObjectName(QStringLiteral("button_see_connections_scientist"));
        button_see_connections_scientist->setEnabled(false);

        verticalLayout_19->addWidget(button_see_connections_scientist);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_scientists_connections_scientist = new QLabel(tab_scientist_connections);
        label_scientists_connections_scientist->setObjectName(QStringLiteral("label_scientists_connections_scientist"));

        horizontalLayout_3->addWidget(label_scientists_connections_scientist);

        label_scientists_connection_computer = new QLabel(tab_scientist_connections);
        label_scientists_connection_computer->setObjectName(QStringLiteral("label_scientists_connection_computer"));

        horizontalLayout_3->addWidget(label_scientists_connection_computer);


        verticalLayout_19->addLayout(horizontalLayout_3);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scientist_list_scientist_connections = new QListWidget(tab_scientist_connections);
        scientist_list_scientist_connections->setObjectName(QStringLiteral("scientist_list_scientist_connections"));

        horizontalLayout_2->addWidget(scientist_list_scientist_connections);

        computer_list_scientist_connections = new QListWidget(tab_scientist_connections);
        computer_list_scientist_connections->setObjectName(QStringLiteral("computer_list_scientist_connections"));

        horizontalLayout_2->addWidget(computer_list_scientist_connections);


        verticalLayout_15->addLayout(horizontalLayout_2);


        verticalLayout_19->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        button_add_scientist_connection = new QPushButton(tab_scientist_connections);
        button_add_scientist_connection->setObjectName(QStringLiteral("button_add_scientist_connection"));
        button_add_scientist_connection->setIcon(icon7);

        verticalLayout_17->addWidget(button_add_scientist_connection);

        button_remove_scientist_connection = new QPushButton(tab_scientist_connections);
        button_remove_scientist_connection->setObjectName(QStringLiteral("button_remove_scientist_connection"));
        button_remove_scientist_connection->setEnabled(true);
        button_remove_scientist_connection->setIcon(icon7);

        verticalLayout_17->addWidget(button_remove_scientist_connection);


        verticalLayout_16->addLayout(verticalLayout_17);


        verticalLayout_19->addLayout(verticalLayout_16);

        connections_tabs->addTab(tab_scientist_connections, QString());

        verticalLayout_11->addWidget(connections_tabs);


        verticalLayout_18->addLayout(verticalLayout_11);

        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/connecti.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabs->addTab(tab_connections, icon8, QString());

        verticalLayout_2->addWidget(tabs);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 670, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabs->setCurrentIndex(0);
        connections_tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Legends of computer sciense", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#0103ef;\">~ Welcome to the future ~</span></p></body></html>", 0));
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
#ifndef QT_NO_ACCESSIBILITY
        tab_connections->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        button_see_connections_computer->setText(QApplication::translate("MainWindow", "See connections for selected computer", 0));
        label_computers_connections_computer->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Computers</span></p></body></html>", 0));
        label_computers_connections_scientist->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Scientists</span></p></body></html>", 0));
        button_add_computer_connection->setText(QApplication::translate("MainWindow", "Add Connection", 0));
        button_remove_computer_connection->setText(QApplication::translate("MainWindow", "Remove Connection", 0));
        connections_tabs->setTabText(connections_tabs->indexOf(tab_computer_connections), QApplication::translate("MainWindow", "Computer Connections", 0));
        button_see_connections_scientist->setText(QApplication::translate("MainWindow", "See connection for selected scientist", 0));
        label_scientists_connections_scientist->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Scientists</span></p></body></html>", 0));
        label_scientists_connection_computer->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#213dbc;\">Computers</span></p></body></html>", 0));
        button_add_scientist_connection->setText(QApplication::translate("MainWindow", "Add Connection", 0));
        button_remove_scientist_connection->setText(QApplication::translate("MainWindow", "Remove Connection", 0));
        connections_tabs->setTabText(connections_tabs->indexOf(tab_scientist_connections), QApplication::translate("MainWindow", "Scientist Connections", 0));
        tabs->setTabText(tabs->indexOf(tab_connections), QApplication::translate("MainWindow", "Connections", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
