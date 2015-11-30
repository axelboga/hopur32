#ifndef LOGIC_H
#define LOGIC_H

#include "computerscientist.h"
#include "repository.h"
#include <ctype.h>
#include <cctype>
#include <algorithm>
#include <stdlib.h>
#include <iomanip>
class logic {
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
    bool checkDeath(string d, string b);
    bool compareByFirstName(const ComputerScientist& a, const ComputerScientist& b);
    bool compareByLastName(ComputerScientist a, ComputerScientist b);
    bool compareBySex(ComputerScientist a, ComputerScientist b);
    bool compareByBirth(ComputerScientist a, ComputerScientist b);
    bool compareByDeath(ComputerScientist a, ComputerScientist b);
    bool checkDeath(ComputerScientist& c, string s);
    bool okToAdd(ComputerScientist& c);
    void sorting();
    void searching();
    void eraseFromVector();
};

#endif // LOGIC_H
