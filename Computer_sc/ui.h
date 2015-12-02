#ifndef UI_H
#define UI_H
#include "scientistservices.h"
#include <string>
#include <iostream>

class UI {
public:
    UI();
    void start();
    void banner();
    void sortUI();
    void menu();
    void clearScreen();
private:
    ScientistServices CompSciServices;
};

#endif // UI_H
