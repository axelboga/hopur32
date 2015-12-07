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
    bool checkName(string s);
    bool checkGender(string& s);
    bool checkBirth(string s);
    bool checkDeath(string d, string b);
    bool isAlive(string& answ);
    void add(ComputerScientist c);
    void view();
    void search(string searchTerm);
    void sort(string sortBy);
    void output(vector<ComputerScientist>& v);
    void remove(string my_id);
private:
    ScientistRepository compSciRepo;
};

#endif // LOGIC_H
