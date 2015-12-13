#ifndef ADDSCIENTISTDIALOG_H
#define ADDSCIENTISTDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <scientistservices.h>

namespace Ui {
class AddScientistDialog;
}

class AddScientistDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddScientistDialog(QWidget *parent = 0);
    ~AddScientistDialog();

private slots:
    void on_button_add_scientist_clicked();

    void on_checkbox_scientist_is_dead_toggled(bool checked);

private:
    Ui::AddScientistDialog *ui;
    ScientistServices sciService;
    bool checkInput();
};

#endif // ADDSCIENTISTDIALOG_H
