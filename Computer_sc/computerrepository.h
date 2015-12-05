#ifndef COMPUTERREPOSITORY_H
#define COMPUTERREPOSITORY_H
#include "computer.h"
#include "baserepository.h"
#include <string>
#include <QtSql>
#include <vector>
#include <iostream>
using namespace std;

class ComputerRepository {
public:
    ComputerRepository();
    ~ComputerRepository();
    QSqlDatabase datab;
    void fillVectorFromDatabase(vector<Computer>& v, string sql);
    void add(Computer computer);
    vector<Computer> search(string input);
    vector<Computer> sort(string sortBy);
private:
    BaseRepository baseRepo;
};

#endif // COMPUTERREPOSITORY_H
