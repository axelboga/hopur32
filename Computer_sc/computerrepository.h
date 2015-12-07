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
    void fillVectorFromDatabase(vector<Computer>& v, string sql);
    void addToDatabase(Computer computer);
    vector<Computer> searchInDatabase(string input);
    vector<Computer> sortDatabase(string sortBy);
    void removeFromDatabase (string ID);
    void addConnection(string sci_id, string comp_id);
    vector<Computer> getComputersByScientistId(string id);
private:
    BaseRepository baseRepo;
    QSqlDatabase datab;
};

#endif // COMPUTERREPOSITORY_H
