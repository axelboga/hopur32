#ifndef UI_H
#define UI_H

#include <string>
#include "logic.h"
#include <iostream>

class UI
{
public:
    UI();
    void start();
    void banner();
private:
    logic CompSciLogic;
};

#endif // UI_H
