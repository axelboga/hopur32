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
    bool checkBirth(string s);
    bool checkDeath(string d, string b);
    bool add(Scientist c);
    vector<Scientist> search(string searchTerm, string sortBy);
    vector<Scientist> sort(string sortBy);
    bool remove(string my_id);
    vector<Scientist> getScientistsByComputerId(string c_id);
private:
    ScientistRepository sciRepo;
};

#endif // LOGIC_H
