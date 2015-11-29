#ifndef LOGIC_H
#define LOGIC_H

#include "computerscientist.h"
#include "repository.h"
#include <ctype.h>

class logic
{
private:
    repository compSciRepo;
public:
    logic();
    void add(ComputerScientist& c);
    void view();
    bool checkName(string s);
    bool checkSex(string s);
    bool checkBirth(string s);

};

#endif // LOGIC_H
