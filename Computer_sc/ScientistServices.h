#ifndef SCIENTISTSERVICES_H
#define SCIENTISTSERVICES_H
#include "computerscientist.h"
#include "scientistrepository.h"
#include <cctype>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class ScientistServices {
public:
    ScientistServices();
    void add(ComputerScientist& c);
    void addFirstName(ComputerScientist& c);
    void addLastName(ComputerScientist& c);
    void addSex(ComputerScientist& c);
    void addYearOfBirth(ComputerScientist& c);
    void addYearOfDeath(ComputerScientist& c);
    void view(vector<ComputerScientist>& v);
    void view();
    bool checkName(string s);
    bool checkBirth(string s);
    bool checkDeath(string d, string b);
    bool okToAdd(ComputerScientist& c);
    void sortByFirstName(vector<ComputerScientist>& v);
    void sortByLastName(vector<ComputerScientist>& v);
    void sortReverseByFirstName(vector<ComputerScientist>& v);
    void sortReverseByLastName(vector<ComputerScientist>& v);
    void sortBySex(vector<ComputerScientist>& v);
    void sortByBirthYear(vector<ComputerScientist>& v);
    void searching();
    void removeScientist();
    void header();
    void footer();
private:
    ScientistRepository compSciRepo;
    string isAlive(ComputerScientist& c);
};

#endif // LOGIC_H
