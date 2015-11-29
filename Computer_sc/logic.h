#ifndef LOGIC_H
#define LOGIC_H

#include "computerscientist.h"
#include "repository.h"
#include <ctype.h>
<<<<<<< HEAD
#include <algorithm>
=======
#include <stdlib.h>
>>>>>>> 06611104c3e9fb224832658e97db97a8776806df

class logic
{
private:
    repository compSciRepo;
public:
    logic();
    void add(ComputerScientist& c);
    void addFirstName(ComputerScientist& c);
    void addLastName(ComputerScientist& c);
    void addSex(ComputerScientist& c);
    void addYearOfBirth(ComputerScientist& c);
    void addYearOfDeath(ComputerScientist& c);
    void view();
    bool checkName(string s);
    bool checkSex(string s);
    bool checkBirth(string s);
<<<<<<< HEAD
    bool compareByFirstName(ComputerScientist a, ComputerScientist b);
    bool compareByLastName(ComputerScientist a, ComputerScientist b);
    bool compareBySex(ComputerScientist a, ComputerScientist b);
    bool compareByBirth(ComputerScientist a, ComputerScientist b);
    bool compareByDeath(ComputerScientist a, ComputerScientist b);
=======
    bool checkDeath(ComputerScientist& c, string s);
>>>>>>> 06611104c3e9fb224832658e97db97a8776806df

};

#endif // LOGIC_H
