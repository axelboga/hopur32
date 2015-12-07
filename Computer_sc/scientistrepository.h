#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H
#include "Scientist.h"
#include "baserepository.h"
#include <QtSql>

class ScientistRepository {
public:
    ScientistRepository();
    ~ScientistRepository();
    QSqlDatabase datab;
    void remove(string my_id);
    void fillVectorFromDatabase(vector<Scientist>& v, string sql);
    void add(Scientist scientist);
    vector<Scientist> search(string input);
    vector<Scientist> sort(string sortBy);
private:
    BaseRepository baseRepo;
};

#endif // REPOSITORY_H
