#ifndef COMPUTERSERVICES_H
#define COMPUTERSERVICES_H
#include "computer.h"
#include "computerrepository.h"
#include <vector>

class ComputerServices{

public:
    ComputerServices();
    bool checkYear(string my_year);
    bool checkType(string my_type);
    bool checkWasBuilt(string& answ);
    bool checkSearch(string searchTerm, string orderBy);
    bool checkIfIdExists(string my_id, string& name);
    bool checkSciCompConnections(string s_id);
    vector<Computer> view(string sortBy);
    bool add(Computer computer);
    vector<Computer> search(string searchTerm, string sortBy);
    vector<Computer> sort(string sortBy);
    void output(vector<Computer>& v);
    bool remove(string my_id);
    void getComputersByScientistId(string s_id);
private:
    ComputerRepository compRepo;
};

#endif // COMPUTERSERVICES_H
