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
    void mainMenu();
    void banner();
    void banner2();
    void scientistLoop();
    void computerLoop();
    void connectionLoop();
    void scientistSortUI();
    void scientistMenu();
    void clearScreen();
    void computerSortUI();
    void computerMenu();
    void readComputer(Computer& c);
    void readScientist(Scientist& c);
    void promptForViewingScientistComputerConnections();
    void promptForViewingComputerScientistConnections();
    void promptForAddingConnections();
    void promptToRemoveConnections();
    void promptForRemoveScientist();
    void promptToSortScientist();
    void promptToSearchScientist();
    void promptForRemoveComputer();
    void promptToSortComputer();
    void promptToSearchComputer();
    void computerArt();
    void flush (istream& in);
    void enterToContinue();
    void connectionMenu();
    void connectionViewUI();

private:
    ScientistServices sciServices;
    ComputerServices compServices;
    CompSciConnectionServices connectionServices;
};

#endif // UI_H
