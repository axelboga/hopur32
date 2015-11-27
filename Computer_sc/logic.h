#ifndef LOGIC_H
#define LOGIC_H

#include "ComputerScientist.h"
#include "repository.h"
#include <ctype.h>

class logic
{
private:
    repository compSciRepo;
public:
    logic();
    void add(ComputerScientist c);
    bool isValid(string s);
};

#endif // LOGIC_H
