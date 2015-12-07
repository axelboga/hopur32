#ifndef COMPSCICONNECTIONSREPOSITORY_H
#define COMPSCICONNECTIONSREPOSITORY_H
#include "baserepository.h"
#include "scientist.h"
#include <string>
#include <QtSql>
#include <vector>
#include <iostream>
using namespace std;

class CompSciConnectionsRepository
{
public:
    CompSciConnectionsRepository();
    void addConnection(string sci_id, string comp_id);
    void fillVectorWithScientistsFromDatabase(vector<Scientist>& v, string sql);
    vector<Scientist> getScientistsByComputerId(string id);
    QSqlDatabase datab;
private:
    BaseRepository baseRepo;
};

#endif // COMPSCICONNECTIONSREPOSITORY_H
