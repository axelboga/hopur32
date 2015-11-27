#ifndef LOGIC_H
#define LOGIC_H

#include "ComputerScientist.h"
#include "repository.h"

class logic
{
private:
    repository compSciRepo;
public:
    logic();
    void add(ComputerScientist c);
};

#endif // LOGIC_H
