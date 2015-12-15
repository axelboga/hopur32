#ifndef ADDCONNECTIONSDIALOG_H
#define ADDCONNECTIONSDIALOG_H

#include <QDialog>
#include <scientistservices.h>
#include <computerservices.h>
#include <compsciconnectionservices.h>
#include <QMessageBox>



namespace Ui {
class AddConnectionsDialog;
}

class AddConnectionsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddConnectionsDialog(QWidget *parent = 0);
    ~AddConnectionsDialog();

private slots:
    void on_button_add_connections_clicked();
    
    void on_list_computers_add_connections_clicked(const QModelIndex &index);
    
    void on_list_scientists_add_connections_clicked(const QModelIndex &index);
    
    void enableAddButton();

private:
    Ui::AddConnectionsDialog *ui;
    void displayAllScientistsForAddConnections();
    void displayScientistsForAddConnections(vector<Scientist> scientists);
    void displayComputersForAddConnections(vector<Computer> computers);
    void displayAllComputersForAddConnections();

    vector<Computer> currentlyDisplayedComputers;
    vector<Scientist> currentlyDisplayedScientists;

    ScientistServices sciService;
    ComputerServices compService;
    CompSciConnectionServices connectionService;
};

#endif // ADDCONNECTIONSDIALOG_H
