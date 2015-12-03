#ifndef COMPUTERREPOSITORY_H
#define COMPUTERREPOSITORY_H
#include "baserepository.h"
#include "computer.h"

class ComputerRepository {
public:
    ComputerRepository();
    void add(Computer computer);
private:
    BaseRepository baseRepo;
};

#endif // COMPUTERREPOSITORY_H
