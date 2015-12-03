#ifndef COMPUTERREPOSITORY_H
#define COMPUTERREPOSITORY_H
#include "baserepository.h"
#include "computer.h"

class ComputerRepository {
public:
    ComputerRepository();
    void add(Computer computer);
    void fillVectorFromDatabase(vector<Computer>& v, string sql);
    vector<Computer> search(string input);
private:
    BaseRepository baseRepo;
    QSqlDatabase datab;
};

#endif // COMPUTERREPOSITORY_H
