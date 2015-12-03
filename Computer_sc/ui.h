#ifndef UI_H
#define UI_H
#include "scientistservices.h"
#include "computerservices.h"
#include <string>
#include <iostream>

class UI {
public:
    UI();
    void start();
    void mainMenu();
    void banner();
    void banner2();
    void scientistLoop();
    void computerLoop();
    void scientistSortUI();
    void scientistMenu();
    void clearScreen();
    void computerSortUI();
    void computerMenu();

private:
    ScientistServices sciServices;
    ComputerServices compServices;
};

#endif // UI_H
