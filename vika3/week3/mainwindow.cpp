#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <sstream>

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
        //ui->list_computers->addItem(QString::fromStdString(currentComputer.getType()));
        //ui->list_computers->addItem(QString::fromStdString(currentComputer.getWasBuilt()));
        //ui->list_computers->addItem(QString::fromStdString(currentComputer.getYear()));

    }

    currentlyDisplayedComputers = computers;
}


void MainWindow::on_input_filter_computers_textChanged(const QString& arg1){
    string userInput = ui->input_filter_computers->text().toStdString();
    vector<Computer> computers = compService.search(userInput);
    displayComputer(computers);
}

void MainWindow::on_pushButton_clicked(){

    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->text();
    QString wasBuilt = ui->input_computer_was_built->text();
    QString yearBuilt = ui->input_computer_year_built->text();

    bool thereWasAnError = false;

    if (name.isEmpty()){
        ui->label_error_computer_name->setText("<span style='color: #ED1C58'>Name cannot be empty</span>");
        thereWasAnError = true;
    }

    if (yearBuilt.isEmpty()){
        ui->label_error_computer_year_built->setText("<span style='color: #ED1C58'>Year built cannot be emty </span>");
        thereWasAnError = true;
    }

    if (thereWasAnError){
        return;
    }

    Computer c;
    c.setName(name.toStdString());
    c.setType(type.toStdString());
    c.setWasBuilt(wasBuilt.toStdString());
    c.setYear(yearBuilt.toStdString());

    bool success = compService.add(c);

    if (success){
        ui->input_filter_computers->setText("");
        displayAllComputers();
        ui->input_computer_name->setText("");
        ui->input_computer_type->setText("");
        ui->input_computer_was_built->setText("");
        ui->input_computer_year_built->setText("");
    }
    else{
        // there was some error, tell the user
    }

}

void MainWindow::on_list_computers_clicked(const QModelIndex &index){
    ui->button_remove_computer->setEnabled(true);
}


void MainWindow::on_button_remove_computer_clicked(){
    int currentlySelectedComputerIndex = ui->list_computers->currentIndex().row();

    Computer currentlySelectedComputer = currentlyDisplayedComputers.at(currentlySelectedComputerIndex);

    int idToRemove = currentlySelectedComputer.getId();
    string stringIdToRemove = static_cast<ostringstream*>( &(ostringstream() << idToRemove) )->str();

    bool success = compService.remove(stringIdToRemove);

    if (success){
     ui->input_filter_computers->setText("");
     displayAllComputers();

     ui->button_remove_computer->setEnabled(false);
    }
    else{
     // display some error
    }
}
