#ifndef COMPUTERSERVICES_H
#define COMPUTERSERVICES_H
#include "computer.h"
#include "computerrepository.h"
#include <vector>
class ComputerServices{

public:
    ComputerServices();
    void addComputer(Computer computer);
    void removeComputer(string id);
    vector<Computer> searchComputer(string searchTerm);
};

#endif // COMPUTERSERVICES_H
