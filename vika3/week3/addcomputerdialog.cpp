#include "addcomputerdialog.h"
#include "ui_addcomputerdialog.h"

AddComputerDialog::AddComputerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddComputerDialog)
{
    ui->setupUi(this);
}

AddComputerDialog::~AddComputerDialog()
{
    delete ui;
}

void AddComputerDialog::on_button_add_computer_clicked(){
    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->text();
    QString yearBuilt = ui->input_computer_year_built->text();

    bool thereWasAnError = false;

    if (name.isEmpty()){
        ui->label_error_computer_name->setText("<span style='color: #ED1C58'>Name cannot be empty</span>");
        thereWasAnError = true;
    }

    if (type.isEmpty()){
        ui->label_error_computer_type->setText("<span style='color: #ED1C58'>Type cannot be empty</span>");
        thereWasAnError = true;
    }
    else if (!compService.checkType(type.toStdString())) {
        ui->label_error_computer_type->setText("<span style='color: #ED1C58'>Invalid type</span>");
        thereWasAnError = true;
    }

    if (ui->checkbox_computer_was_built->isChecked()== true && yearBuilt.isEmpty()){
        ui->label_error_computer_year_built->setText("<span style='color: #ED1C58'>Year built cannot be emty </span>");
        thereWasAnError = true;
    }

    bool temp = compService.checkYear(yearBuilt.toStdString());
    if(!temp && ui->checkbox_computer_was_built->isChecked()== true){
        ui->label_error_computer_year_built->setText("<span style='color: #ED1C58'> Invalid year </span>");
        thereWasAnError = true;
    }

    if (thereWasAnError){
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
        ui->input_computer_type->setText("");
        ui->input_computer_year_built->setText("");

        this->done(0); //0 er gott;
    }
    else{
        this->done(-1); //villa
        // there was some error, tell the user
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
