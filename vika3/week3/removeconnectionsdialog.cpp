#include "removeconnectionsdialog.h"
#include "ui_removeconnectionsdialog.h"
#include <sstream>
#include <qDebug>

RemoveConnectionsDialog::RemoveConnectionsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveConnectionsDialog)
{
    ui->setupUi(this);
    displayAllScientistsForRemoveConnections();
    displayAllComputersForRemoveConnections();
}

RemoveConnectionsDialog::~RemoveConnectionsDialog()
{
    delete ui;
}

void RemoveConnectionsDialog::on_button_remove_clicked()
{
    int currentlySelectedComputerIndex = ui->list_computers_remove_connections->currentIndex().row();
    Computer currentlySelectedComputer = currentlyDisplayedComputers.at(currentlySelectedComputerIndex);
    int idOfComputer = currentlySelectedComputer.getId();
    string stringIdOfComputer = static_cast<ostringstream*>(&(ostringstream() << idOfComputer) )->str();
    qDebug() << currentlySelectedComputerIndex;

    int currentlySelectedScientistIndex = ui->list_scientists_remove_connections->currentIndex().row();
    Scientist currentlySelectedScientist = currentlyDisplayedScientists.at(currentlySelectedScientistIndex);
    int idOfScientist = currentlySelectedScientist.getId();
    string stringIdOfScientist = static_cast<ostringstream*>(&(ostringstream() << idOfScientist) )->str();
    qDebug() << currentlySelectedScientistIndex;

    int answer = QMessageBox::question(this, "confirm", "Are you sure?");
    if (answer == QMessageBox::No) {
        return;
    }

    bool success = connectionService.removeConnection(stringIdOfScientist, stringIdOfComputer);

    if (success){
        this->done(0); //0 er gott, notum í on_button_add_computer í mainwindow.cpp
    }
   else{
        this->done(-1); //-1 er villa, notum í on_button_add_computer í mainwindow.cpp
    }
}

void RemoveConnectionsDialog::displayScientistsForRemoveConnections(vector<Scientist> scientists) {
    ui->list_scientists_remove_connections->clear();
    for(unsigned int i = 0; i < scientists.size(); i++) {
        Scientist currentScientist = scientists.at(i);
        string name_temp = currentScientist.getFirstName() +  " " + currentScientist.getLastName();
        QString name = QString::fromStdString(name_temp);

        ui->list_scientists_remove_connections->addItem(name);
    }
    currentlyDisplayedScientists = scientists;
}

void RemoveConnectionsDialog::displayAllScientistsForRemoveConnections() {
    vector<Scientist> scientists = sciService.sort("firstName");
    displayScientistsForRemoveConnections(scientists);
}

void RemoveConnectionsDialog::displayComputersForRemoveConnections(vector<Computer> computers) {
    ui->list_computers_remove_connections->clear();
    for(unsigned int i = 0; i < computers.size(); i++){
        Computer currentComputer = computers.at(i);
        QString name = QString::fromStdString(currentComputer.getName());

        ui->list_computers_remove_connections->addItem(name);
    }
    currentlyDisplayedComputers = computers;
}

void RemoveConnectionsDialog::displayAllComputersForRemoveConnections() {
    vector<Computer> computers = compService.sort("Name");
    displayComputersForRemoveConnections(computers);
}