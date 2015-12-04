#ifndef COMPUTERSERVICES_H
#define COMPUTERSERVICES_H
#include "computer.h"
#include "computerrepository.h"
#include <vector>
class ComputerServices{

public:
    ComputerServices();
    void add(Computer computer);
    void removeComputer(string id);
    bool checkSearch(string searchTerm);
    void search(string searchTerm);
    void sort(string sortBy);
    bool checkYear(string my_year);
    bool checkType(string my_type);
    bool checkWasBuilt(string& answ);
    void view();
private:
    ComputerRepository compRepo;
};

#endif // COMPUTERSERVICES_H
