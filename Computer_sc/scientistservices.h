#ifndef SCIENTISTSERVICES_H
#define SCIENTISTSERVICES_H
#include "scientist.h"
#include "scientistrepository.h"
#include "compsciconnectionsrepository.h"
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
    bool checkRemove(string my_id, string& name);
    bool isAlive(string& answ);
    void add(Scientist c);
    void getScientistsByComputerId(string c_id);
    void view();
    void search(string searchTerm);
    void sort(string sortBy);
    void remove(string my_id);
    void output(vector<Scientist>& v);
    void addConnection(string sci_id, string comp_id);
private:
    ScientistRepository compSciRepo;
};

#endif // LOGIC_H
