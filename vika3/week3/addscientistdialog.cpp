#include "addscientistdialog.h"
#include "ui_addscientistdialog.h"

AddScientistDialog::AddScientistDialog(QWidget *parent) : QDialog(parent), ui(new Ui::AddScientistDialog) {
    ui->setupUi(this);
}

AddScientistDialog::~AddScientistDialog() {
    delete ui;
}

bool AddScientistDialog::checkInput() {
    QString firstName = ui->input_scientist_first_name->text();
    QString lastName = ui->input_scientist_last_name->text();
    QString gender = ui->input_scientist_gender->currentText();
    QString birthYear = ui->input_scientist_year_born->text();
    QString deathYear = ui->input_scientist_year_death->text();

    bool thereWasAnError = false;

    if (firstName.isEmpty()){
        ui->label_error_scientist_first_name->setText("<span style='color: #ED1C58'>Name cannot be empty</span>");
        thereWasAnError = true;
    }
    else if (!sciService.checkName(firstName.toStdString())) {
        ui->label_error_scientist_first_name->setText("<span style='color: #ED1C58'>Invalid name</span>");
        thereWasAnError = true;
    }

    if (lastName.isEmpty()){
        ui->label_error_scientist_last_name->setText("<span style='color: #ED1C58'>Name cannot be empty</span>");
        thereWasAnError = true;
    }
    else if (!sciService.checkName(lastName.toStdString())) {
        ui->label_error_scientist_last_name->setText("<span style='color: #ED1C58'>Invalid name</span>");
        thereWasAnError = true;
    }

    if (birthYear.isEmpty()){
        ui->label_error_scientist_year_born->setText("<span style='color: #ED1C58'>Year of birth cannot be empty</span>");
        thereWasAnError = true;
    }
    else if (!sciService.checkBirth(birthYear.toStdString())) {
        ui->label_error_scientist_year_born->setText("<span style='color: #ED1C58'>Invalid year</span>");
        thereWasAnError = true;
    }

    bool deathInputOK = sciService.checkDeath(deathYear.toStdString(), birthYear.toStdString());

    if (ui->checkbox_scientist_is_dead->isChecked()== true && deathYear.isEmpty()){
        ui->label_error_scientist_year_of_death->setText("<span style='color: #ED1C58'>Year of death cannot be emty </span>");
        thereWasAnError = true;
    }
    else if(ui->checkbox_scientist_is_dead->isChecked()== true && !deathInputOK){
        ui->label_error_scientist_year_of_death->setText("<span style='color: #ED1C58'> Invalid year </span>");
        thereWasAnError = true;
    }

    return thereWasAnError;
}

void AddScientistDialog::on_button_add_scientist_clicked() {
    QString firstName = ui->input_scientist_first_name->text();
    QString lastName = ui->input_scientist_last_name->text();
    QString gender = ui->input_scientist_gender->currentText();
    QString birthYear = ui->input_scientist_year_born->text();
    QString deathYear = ui->input_scientist_year_death->text();

    bool thereWasAnError = checkInput();
    if (thereWasAnError){
        return;
    }

    Scientist s;
    s.setFirstName(firstName.toStdString());
    s.setLastName(lastName.toStdString());
    s.setSex(gender.toStdString());
    s.setYearOfBirth(birthYear.toStdString());
    if(ui->checkbox_scientist_is_dead->isChecked()==true){
        s.setYearOfDeath(deathYear.toStdString());
    }
    else {
        s.setYearOfDeath("-");
    }

    bool success = sciService.add(s);

    if (success){
        ui->input_scientist_first_name->setText("");
        ui->input_scientist_last_name->setText("");
        ui->input_scientist_year_born->setText("");
        ui->input_scientist_year_death->setText("");

        this->done(0); //0 er gott;
    }
    else{
        this->done(-1); //-1 er villa
    }
}

void AddScientistDialog::on_checkbox_scientist_is_dead_toggled(bool checked){
    if(checked==true){
        ui->label_scientist_year_death->setEnabled(true);
        ui->input_scientist_year_death->setEnabled(true);
    }
    else if(checked==false){
    ui->label_scientist_year_death->setEnabled(false);
    ui->input_scientist_year_death->setEnabled(false);
    }
}
