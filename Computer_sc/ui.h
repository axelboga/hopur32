#ifndef UI_H
#define UI_H
#include "logic.h"
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
    logic CompSciLogic;
};

#endif // UI_H
