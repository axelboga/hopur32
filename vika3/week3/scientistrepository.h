#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H
#include "scientist.h"
#include "baserepository.h"
#include <string>
#include <vector>
#include <QtSql>
#include <iostream>
using namespace std;

class ScientistRepository {
public:
    ScientistRepository();
    ~ScientistRepository();
    bool removeFromDatabase(string my_id);
    void fillVectorFromDatabase(vector<Scientist>& v, string sql);
    bool addToDatabase(Scientist scientist);
    vector<Scientist> searchInDatabase(string input, string sortBy, string ascendingOrder);
    vector<Scientist> sortDatabase(string sortBy, string ascendingOrder);
    vector<Scientist> getScientistsByComputerId(string id);
private:
    BaseRepository baseRepo;
    QSqlDatabase datab;
};

#endif // REPOSITORY_H
