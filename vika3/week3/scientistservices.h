#ifndef SCIENTISTSERVICES_H
#define SCIENTISTSERVICES_H
#include "scientist.h"
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
    bool checkSearch(string searchTerm, string sortBy);
    bool checkIfIdExists(string my_id, string& name);
    bool checkCompSciConnections(string c_id);
    bool isAlive(string& answ);
    void add(Scientist c);
    void view();
    void search(string searchTerm, string sortBy);
    void sort(string sortBy);
    void remove(string my_id);
    void output(vector<Scientist>& v);
    void getScientistsByComputerId(string c_id);
private:
    ScientistRepository sciRepo;
};

#endif // LOGIC_H
