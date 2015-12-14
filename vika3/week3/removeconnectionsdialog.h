#ifndef REMOVECONNECTIONSDIALOG_H
#define REMOVECONNECTIONSDIALOG_H

#include <QDialog>
#include <scientistservices.h>
#include <computerservices.h>
#include <compsciconnectionservices.h>
#include <QMessageBox>

namespace Ui {
class RemoveConnectionsDialog;
}

class RemoveConnectionsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveConnectionsDialog(QWidget *parent = 0);
    ~RemoveConnectionsDialog();

private slots:
    void on_button_remove_clicked();
    void displayScientistsForRemoveConnections(vector<Scientist> scientists);
    void displayAllScientistsForRemoveConnections();
    void displayComputersForRemoveConnections(vector<Computer> computers);
    void displayAllComputersForRemoveConnections();

private:
    Ui::RemoveConnectionsDialog *ui;

    vector<Computer> currentlyDisplayedComputers;
    vector<Scientist> currentlyDisplayedScientists;

    ScientistServices sciService;
    ComputerServices compService;
    CompSciConnectionServices connectionService;
};

#endif // REMOVECONNECTIONSDIALOG_H
