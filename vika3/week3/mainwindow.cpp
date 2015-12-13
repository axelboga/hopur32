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
    displayAllScientists();
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

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = sciService.sort("FirstName");
    displayScientist(scientists);
}
void MainWindow::displayScientist(vector<Scientist> scientists){
    ui->table_scientists->clearContents();
    ui->table_scientists->setRowCount(scientists.size());

    for (unsigned int i = 0; i < scientists.size(); i++){

        Scientist currentScientist = scientists.at(i);
        QString FirstName = QString::fromStdString(currentScientist.getFirstName());
        QString LastName = QString::fromStdString(currentScientist.getLastName());
        QString Sex = QString::fromStdString(currentScientist.getSex());
        QString YearOfBirth = QString::fromStdString(currentScientist.getYearOfBirth());
        QString YearOfDeath = QString::fromStdString(currentScientist.getYearOfDeath());


        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(FirstName));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(LastName));
        ui->table_scientists->setItem(i, 2, new QTableWidgetItem(Sex));
        ui->table_scientists->setItem(i, 3, new QTableWidgetItem(YearOfBirth));
        ui->table_scientists->setItem(i, 4, new QTableWidgetItem(YearOfDeath));

    }

    currentlyDisplayedScientists = scientists;
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

    int answer = QMessageBox::question(this, "Confirm", "Are you sure?");

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
     int answer = QMessageBox::warning(this, "FAIL", "Failed to remove computer");
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
        int answer = QMessageBox::warning(this, "FAIL", "Failed to add computer");
    }
}

void MainWindow::on_button_remove_scientist_clicked(){
    int currentlySelectedScientistIndex = ui->table_scientists->currentIndex().row();

    Scientist currentlySelectedScientist = currentlyDisplayedScientists.at(currentlySelectedScientistIndex);

    int idToRemove = currentlySelectedScientist.getId();

    string stringIdToRemove = static_cast<ostringstream*>(&(ostringstream() << idToRemove) )->str();

    int answer = QMessageBox::question(this, "Confirm", "Are you sure?");

    if (answer == QMessageBox::No) {

        return;
    }

    bool success = sciService.remove(stringIdToRemove);

    if (success){
     ui->input_filter_scientists->setText("");
     displayAllScientists();
     ui->statusBar->showMessage("Successfully removed scientist", 2500);
     ui->button_remove_scientist->setEnabled(false);
    }
    else{
        QMessageBox::warning(this, "FAIL", "Failed to remove scientist");
    }
}

void MainWindow::on_table_scientists_clicked(const QModelIndex &index){
    ui->button_remove_scientist->setEnabled(true);
}


void MainWindow::on_input_filter_scientists_textChanged(const QString &arg1){
    string userInput = ui->input_filter_scientists->text().toStdString();
    vector<Scientist> scientists = sciService.search(userInput, "FirstName");
    displayScientist(scientists);
}
