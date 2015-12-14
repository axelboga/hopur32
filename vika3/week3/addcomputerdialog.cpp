#include "addcomputerdialog.h"
#include "ui_addcomputerdialog.h"
#include <QMessageBox>

AddComputerDialog::AddComputerDialog(QWidget *parent) : QDialog(parent), ui(new Ui::AddComputerDialog){
    ui->setupUi(this);
}

AddComputerDialog::~AddComputerDialog(){
    delete ui;
}

bool AddComputerDialog::checkInput() {
    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->currentText();
    QString yearBuilt = ui->input_computer_year_built->text();

    bool thereWasAnError = false;

    if (name.isEmpty()){
        ui->label_error_computer_name->setText("<span style='color: #ED1C58'>Name cannot be empty</span>");
        thereWasAnError = true;
    }

    bool yearInputOK = compService.checkYear(yearBuilt.toStdString());

    if (ui->checkbox_computer_was_built->isChecked()== true && yearBuilt.isEmpty()){
        ui->label_error_computer_year_built->setText("<span style='color: #ED1C58'>Year built cannot be emty </span>");
        thereWasAnError = true;
    }

    else if (ui->checkbox_computer_was_built->isChecked()== true && !yearInputOK){
        ui->label_error_computer_year_built->setText("<span style='color: #ED1C58'> Invalid year </span>");
        thereWasAnError = true;
    }
    return thereWasAnError;
}

void AddComputerDialog::on_button_add_computer_clicked(){
    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->currentText();
    QString yearBuilt = ui->input_computer_year_built->text();

    bool thereWasAnError = checkInput();

    if (thereWasAnError){
        return;
    }

    int answer = QMessageBox::question(this, "confirm", "Are you sure?");
    if (answer == QMessageBox::No) {
        this->done(1);
        return;
    }

    Computer c;
    c.setName(name.toStdString());
    c.setType(type.toStdString());
    if(ui->checkbox_computer_was_built->isChecked()==true){
        c.setWasBuilt("Yes");
        c.setYear(yearBuilt.toStdString());
    }
    else if(ui->checkbox_computer_was_built->isChecked()==false){
        c.setWasBuilt("No");
        c.setYear("-");
    }

    bool success = compService.add(c);

    if (success){
        ui->input_computer_name->setText("");
        ui->input_computer_year_built->setText("");
        this->done(0); //0 er gott, notum í on_button_add_computer í mainwindow.cpp
    }
    else{
        this->done(-1); //-1 er villa, notum í on_button_add_computer í mainwindow.cpp
    }
}

void AddComputerDialog::on_checkbox_computer_was_built_toggled(bool checked){
    if(checked==true){
        ui->label_computer_year_built->setEnabled(true);
        ui->input_computer_year_built->setEnabled(true);
    }
    else if(checked==false){
        ui->label_computer_year_built->setEnabled(false);
        ui->input_computer_year_built->setEnabled(false);
    }
}
