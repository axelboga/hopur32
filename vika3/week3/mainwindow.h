#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "computerservices.h"
#include <vector>
#include <iostream>
using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_input_filter_students_textChanged(const QString &arg1);
    //void on_pushButton_clicked();
    //void on_list_computers_clicked(const QModelIndex &index);
    //void on_button_remove_computer_clicked();

    //void on_button_filter_computers_clicked();

    void on_input_filter_computers_textChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ComputerServices compService;
    vector<Computer> currentlyDisplayedComputers;
    void displayAllComputers();
    void displayComputer(vector<Computer> computers);
};

#endif // MAINWINDOW_H
