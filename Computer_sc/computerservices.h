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
    bool checkSearch(string searchTerm);
    void view();
    void add(Computer computer);
    void search(string searchTerm);
    void sort(string sortBy);
    void output(vector<Computer>& v);
    void remove(string my_id);
    bool checkRemove(string my_id, string& name);
private:
    ComputerRepository compRepo;
};

#endif // COMPUTERSERVICES_H
