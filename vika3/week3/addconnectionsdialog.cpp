#include "addconnectionsdialog.h"
#include "ui_addconnectionsdialog.h"
#include <sstream>

AddConnectionsDialog::AddConnectionsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddConnectionsDialog)
{
    ui->setupUi(this);
    displayAllScientistsForAddConnections();
    displayAllComputersForAddConnections();
}

AddConnectionsDialog::~AddConnectionsDialog()
{
    delete ui;
}

void AddConnectionsDialog::on_button_add_connections_clicked()
{
    /*
    int currentlySelectedComputerIndex = ui->list_computers_add_connections->currentIndex().row();
    Computer currentlySelectedComputer = currentlyDisplayedComputers.at(currentlySelectedComputerIndex);
    int idOfComputer = currentlySelectedComputer.getId();
    string stringIdOfComputer = static_cast<ostringstream*>(&(ostringstream() << idOfComputer) )->str();


    int currentlySelectedScientistIndex = ui->list_scientists_add_connections->currentIndex().row();
    Scientist currentlySelectedScientist = currentlyDisplayedScientists.at(currentlySelectedScientistIndex);
    int idOfScientist = currentlySelectedScientist.getId();
    string stringIdOfScientist = static_cast<ostringstream*>(&(ostringstream() << idOfScientist) )->str();

    bool success = connectionService.addConnection(stringIdOfScientist, stringIdOfComputer);

    */
    string computerId = on_button_connections_select_computer_clicked();
    string scientistId = on_button_connections_select_scientist_clicked();

    bool success = connectionService.addConnection(scientistId, computerId);
    if (success){
        this->done(0); //0 er gott, notum í on_button_add_computer í mainwindow.cpp
    }
    else{
        this->done(-1); //-1 er villa, notum í on_button_add_computer í mainwindow.cpp
    }
}

void AddConnectionsDialog::on_list_computers_add_connections_clicked(const QModelIndex &index)
{
    ui->button_connections_select_computer->setEnabled(true);
}

void AddConnectionsDialog::on_list_scientists_add_connections_clicked(const QModelIndex &index)
{
    ui->button_connections_select_scientist->setEnabled(true);
}
void AddConnectionsDialog::displayScientistsForAddConnections(vector<Scientist> scientists) {
    ui->list_scientists_add_connections->clear();
    for(unsigned int i = 0; i < scientists.size(); i++) {
        Scientist currentScientist = scientists.at(i);
        string name_temp = currentScientist.getFirstName() +  " " + currentScientist.getLastName();
        QString name = QString::fromStdString(name_temp);
    
        ui->list_scientists_add_connections->addItem(name);
    }
}

void AddConnectionsDialog::displayAllScientistsForAddConnections() {
    vector<Scientist> scientists = sciService.sort("firstName");
    displayScientistsForAddConnections(scientists);
}

void AddConnectionsDialog::displayComputersForAddConnections(vector<Computer> computers) {
    ui->list_computers_add_connections->clear();
    for(unsigned int i = 0; i < computers.size(); i++){
        Computer currentComputer = computers.at(i);
        QString name = QString::fromStdString(currentComputer.getName());

        ui->list_computers_add_connections->addItem(name);
    }
    currentlyDisplayedComputers = computers;
}

void AddConnectionsDialog::displayAllComputersForAddConnections() {
    vector<Computer> computers = compService.sort("Name");
    displayComputersForAddConnections(computers);
}

string AddConnectionsDialog::on_button_connections_select_scientist_clicked()
{
    int currentlySelectedScientistIndex = ui->list_scientists_add_connections->currentIndex().row();
    Scientist currentlySelectedScientist = currentlyDisplayedScientists.at(currentlySelectedScientistIndex);
    int idOfScientist = currentlySelectedScientist.getId();
    string stringIdOfScientist = static_cast<ostringstream*>(&(ostringstream() << idOfScientist) )->str();
    return stringIdOfScientist;
}

string AddConnectionsDialog::on_button_connections_select_computer_clicked()
{
    int currentlySelectedComputerIndex = ui->list_computers_add_connections->currentIndex().row();
    Computer currentlySelectedComputer = currentlyDisplayedComputers.at(currentlySelectedComputerIndex);
    int idOfComputer = currentlySelectedComputer.getId();
    string stringIdOfComputer = static_cast<ostringstream*>(&(ostringstream() << idOfComputer) )->str();
    return stringIdOfComputer;
}
