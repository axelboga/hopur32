#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H
#include "scientist.h"
#include "baserepository.h"
#include <QtSql>

class ScientistRepository {
public:
    ScientistRepository();
    ~ScientistRepository();
    void removeFromDatabase(string my_id);
    void fillVectorFromDatabase(vector<Scientist>& v, string sql);
    bool addToDatabase(Scientist scientist);
    vector<Scientist> searchInDatabase(string input, string sortBy);
    vector<Scientist> sortDatabase(string sortBy);
    vector<Scientist> getScientistsByComputerId(string id);
private:
    BaseRepository baseRepo;
    QSqlDatabase datab;
};

#endif // REPOSITORY_H
