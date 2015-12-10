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

void MainWindow::on_pushButton_clicked(){
    //ui->label_error_student_name->setText("");
    //ui->label_error_student_year_born->setText("");

    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->text();
    QString wasBuilt = ui->input_computer_was_built->text();
    QString yearBuilt = ui->input_computer_year_built->text();

    //bool thereWasAnError = false;

    if (name.isEmpty()){
        //ui->label_error_student_name->setText("<span style='color: #ED1C58'>Name cannot be empty</span>");

        //thereWasAnError = true;
        return;
    }

    if (yearBuilt.isEmpty()){
        //ui->label_error_student_year_born->setText("<span style='color: #ED1C58'>He has to be born</span>");

        //QMessageBox::warning(this, "Super serious error", "Student needs year born");

        //thereWasAnError = true;
        return;
    }

    /*
    if (thereWasAnError){
        return;
    }
    */

    Computer c;
    c.setName(name.toStdString());
    c.setType(type.toStdString());
    c.setWasBuilt(wasBuilt.toStdString());
    c.setYear(yearBuilt.toStdString());

    compService.add(c);
    ui->input_filter_computers->setText("");
    displayAllComputers();

    /*
    if (success){
        ui->input_filter_students->setText("");
        displayAllStudents();

        //ui->input_student_name->setText("");
        //ui->input_student_year_born->setText("");
    }
    else{
        // there was some error, tell the user
    }
    */
}

