#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    displayAllComputers();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::displayAllComputers(){
    vector<Computer> computers = compService.view();
    displayComputer(computers);
}


void MainWindow::displayComputer(vector<Computer> computers){

    ui->list_computers->clear();

    for (unsigned int i = 0; i < computers.size(); i++){
        Computer currentComputer = computers.at(i);

        ui->list_computers->addItem(QString::fromStdString(currentComputer.getName()));
        ui->list_computers->addItem(QString::fromStdString(currentComputer.getType()));
        ui->list_computers->addItem(QString::fromStdString(currentComputer.getWasBuilt()));
        ui->list_computers->addItem(QString::fromStdString(currentComputer.getYear()));

    }

    currentlyDisplayedComputers = computers;
}

void MainWindow::on_input_filter_computers_textChanged(const QString& arg1){
    string userInput = ui->input_filter_computers->text().toStdString();
    vector<Computer> computers = compService.search(userInput);
    displayComputer(computers);
}
