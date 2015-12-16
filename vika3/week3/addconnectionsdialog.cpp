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

AddConnectionsDialog::~AddConnectionsDialog() {
    delete ui;
}

void AddConnectionsDialog::enableAddButton() {
    if ((ui->list_computers_add_connections->currentIndex().row()) >= 0 &&
        (ui->list_scientists_add_connections->currentIndex().row()) >= 0) {
          ui->button_add_connections->setEnabled(true);
    }
}

void AddConnectionsDialog::on_button_add_connections_clicked() {
    int currentlySelectedComputerIndex = ui->list_computers_add_connections->currentIndex().row();
    Computer currentlySelectedComputer = currentlyDisplayedComputers.at(currentlySelectedComputerIndex);
    int idOfComputer = currentlySelectedComputer.getId();
    string stringIdOfComputer = static_cast<ostringstream*>(&(ostringstream() << idOfComputer) )->str();

    int currentlySelectedScientistIndex = ui->list_scientists_add_connections->currentIndex().row();
    Scientist currentlySelectedScientist = currentlyDisplayedScientists.at(currentlySelectedScientistIndex);
    int idOfScientist = currentlySelectedScientist.getId();
    string stringIdOfScientist = static_cast<ostringstream*>(&(ostringstream() << idOfScientist) )->str();

    bool success = connectionService.addConnection(stringIdOfScientist, stringIdOfComputer);

    if (success) {
      this->done(1);
    } else {
      this->done(-1);
    }
}

void AddConnectionsDialog::on_list_computers_add_connections_clicked(const QModelIndex &index) {
    enableAddButton();
}

void AddConnectionsDialog::on_list_scientists_add_connections_clicked(const QModelIndex &index) {
    enableAddButton();
}

void AddConnectionsDialog::displayScientistsForAddConnections(vector<Scientist> scientists) {
    ui->list_scientists_add_connections->clear();
    for (unsigned int i = 0; i < scientists.size(); i++) {
        Scientist currentScientist = scientists.at(i);
        string name_temp = currentScientist.getFirstName() +  " " + currentScientist.getLastName();
        QString name = QString::fromStdString(name_temp);

        ui->list_scientists_add_connections->addItem(name);
    }
    currentlyDisplayedScientists = scientists;
}

void AddConnectionsDialog::displayAllScientistsForAddConnections() {
    vector<Scientist> scientists = sciService.sort("firstName", "ASC");
    displayScientistsForAddConnections(scientists);
}

void AddConnectionsDialog::displayComputersForAddConnections(vector<Computer> computers) {
    ui->list_computers_add_connections->clear();
    for(unsigned int i = 0; i < computers.size(); i++) {
        Computer currentComputer = computers.at(i);
        QString name = QString::fromStdString(currentComputer.getName());

        ui->list_computers_add_connections->addItem(name);
    }
    currentlyDisplayedComputers = computers;
}

void AddConnectionsDialog::displayAllComputersForAddConnections() {
    vector<Computer> computers = compService.sort("Name", "ASC");
    displayComputersForAddConnections(computers);
}
