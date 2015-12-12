#ifndef ADDCOMPUTERDIALOG_H
#define ADDCOMPUTERDIALOG_H

#include <QDialog>
#include <computerservices.h>
namespace Ui {
class AddComputerDialog;
}

class AddComputerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddComputerDialog(QWidget *parent = 0);
    ~AddComputerDialog();

private slots:
    void on_button_add_computer_clicked();

    void on_checkbox_computer_was_built_toggled(bool checked);

private:
    Ui::AddComputerDialog *ui;
    ComputerServices compService;
};

#endif // ADDCOMPUTERDIALOG_H
