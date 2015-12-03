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
    vector<Computer> searchComputer(string searchTerm);
private:
    ComputerRepository compRepo;
};

#endif // COMPUTERSERVICES_H
