#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <sstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->dropdown_order_by->addItem("Name");
    ui->dropdown_order_by->addItem("Type");
    ui->dropdown_order_by->addItem("WasBuilt");
    ui->dropdown_order_by->addItem("YearBuilt");
    displayAllComputers();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::displayAllComputers(){
    vector<Computer> computers = compService.sort(getCurrentOrderBy());
    displayComputer(computers);
}

void MainWindow::displayComputer(vector<Computer> computers){
    ui->table_computers->clearContents();
    ui->table_computers->setRowCount(computers.size());

    for (unsigned int i = 0; i < computers.size(); i++){

        Computer currentComputer = computers.at(i);
        QString Name = QString::fromStdString(currentComputer.getName());
        QString Type = QString::fromStdString(currentComputer.getType());
        QString WasBuilt = QString::fromStdString(currentComputer.getWasBuilt());
        QString Year = QString::fromStdString(currentComputer.getYear());

        ui->table_computers->setItem(i, 0, new QTableWidgetItem(Name));
        ui->table_computers->setItem(i, 1, new QTableWidgetItem(Type));
        ui->table_computers->setItem(i, 2, new QTableWidgetItem(WasBuilt));
        ui->table_computers->setItem(i, 3, new QTableWidgetItem(Year));
    }

    currentlyDisplayedComputers = computers;
}

void MainWindow::on_input_filter_computers_textChanged(const QString& arg1){
    string userInput = ui->input_filter_computers->text().toStdString();
    vector<Computer> computers = compService.search(userInput, getCurrentOrderBy());
    displayComputer(computers);
}

void MainWindow::on_button_remove_computer_clicked(){
    int currentlySelectedComputerIndex = ui->table_computers->currentIndex().row();

    Computer currentlySelectedComputer = currentlyDisplayedComputers.at(currentlySelectedComputerIndex);

    int idToRemove = currentlySelectedComputer.getId();
    string stringIdToRemove = static_cast<ostringstream*>( &(ostringstream() << idToRemove) )->str();

    int answer = QMessageBox::question(this, "confirm", "Are you sure?");

    if (answer == QMessageBox::No) {
        return;
    }

    bool success = compService.remove(stringIdToRemove);

    if (success){
     ui->input_filter_computers->setText("");
     displayAllComputers();
     ui->statusBar->showMessage("Successfully removed computer", 2500);

     ui->button_remove_computer->setEnabled(false);
    }
    else{
     // display some error
    }
}

void MainWindow::on_dropdown_order_by_currentIndexChanged(int index){
   on_input_filter_computers_textChanged("");
}

string MainWindow::getCurrentOrderBy() {
    string currentValueInOrderBy = ui->dropdown_order_by->currentText().toStdString();
    if (currentValueInOrderBy == "Name"){
        return "Name";
    }
    else if(currentValueInOrderBy == "YearBuilt"){
        return "YearBuilt";
    }
    else if(currentValueInOrderBy == "WasBuilt"){
        return "WasBuilt";
    }
    else if(currentValueInOrderBy == "Type"){
        return "Type";
    }
    else {
        return "Name";
    }
}

void MainWindow::on_table_computers_clicked(const QModelIndex &index){
    ui->button_remove_computer->setEnabled(true);
}

void MainWindow::on_button_add_computer_clicked(){
    AddComputerDialog addCompDialog;
    int addCompReturnValue = addCompDialog.exec();
    if(addCompReturnValue == 0){
        ui->input_filter_computers->setText("");
        displayAllComputers();
        ui->statusBar->showMessage("Successfully added computer", 2500);
    }
    else {
        //there was an error
    }
}
