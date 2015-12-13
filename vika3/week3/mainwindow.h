#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <computerservices.h>
#include <scientistservices.h>
#include <addcomputerdialog.h>
#include <vector>
#include <iostream>
#include <addscientistdialog.h>
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
    void on_input_filter_computers_textChanged(const QString &arg1);
    void on_button_remove_computer_clicked();
    void on_dropdown_order_by_currentIndexChanged(int index);
    void on_table_computers_clicked(const QModelIndex &index);
    void on_button_add_computer_clicked();

    void on_button_remove_scientist_clicked();

    void on_table_scientists_clicked(const QModelIndex &index);

    void on_input_filter_scientists_textChanged(const QString &arg1);

    void on_button_add_scientist_clicked();

private:
    string getCurrentOrderBy();
    void displayAllComputers();
    void displayComputer(vector<Computer> computers);
    Ui::MainWindow *ui;
    ComputerServices compService;
    vector<Computer> currentlyDisplayedComputers;

    void displayAllScientists();
    void displayScientist(vector<Scientist> scientists);
    ScientistServices sciService;
    vector<Scientist> currentlyDisplayedScientists;

};

#endif // MAINWINDOW_H
