#ifndef UI_H
#define UI_H
#include "scientistservices.h"
#include "computerservices.h"
#include "compsciconnectionservices.h"
#include <string>
#include <iostream>
#include <ios>
#include <istream>
#include <limits>

class UI {
public:
    UI();
    void start();
    void banner();

    void scientistLoop();
    void computerLoop();
    void connectionLoop();

    void readScientist(Scientist& c);
    void promptForRemoveScientist();
    void promptToSortScientist();
    void promptToSearchScientist();

    void readComputer(Computer& c);
    void promptForRemoveComputer();
    void promptToSortComputer();
    void promptToSearchComputer();

    void promptForAddingConnections();
    void promptToRemoveConnections();
    void promptForViewingComputerScientistConnections();
    void promptForViewingScientistComputerConnections();

    void clearScreen();
    void flush (istream& in);
    void enterToContinue();

    void mainMenu();
    void scientistMenu();
    void computerMenu();
    void connectionMenu();
    void scientistSortUI();
    void computerSortUI();
    void connectionViewUI();

    void computerArt();
    void scientistArt();
    void connectionArt();

private:
    ScientistServices sciServices;
    ComputerServices compServices;
    CompSciConnectionServices connectionServices;
};

#endif // UI_H
