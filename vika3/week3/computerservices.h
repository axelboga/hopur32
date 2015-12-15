#ifndef COMPUTERSERVICES_H
#define COMPUTERSERVICES_H
#include "computer.h"
#include "computerrepository.h"
#include <vector>

class ComputerServices{

public:
    ComputerServices();
    bool checkYear(string my_year);
    bool add(Computer computer);
    vector<Computer> search(string searchTerm, string sortBy);
    vector<Computer> sort(string sortBy);
    bool remove(string my_id);
    vector<Computer> getComputersByScientistId(string s_id);
private:
    ComputerRepository compRepo;
};

#endif // COMPUTERSERVICES_H
