#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H
#include "scientist.h"
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
    vector<Scientist> getScientistsByComputerId(string id);
    void addConnection(string sci_id, string comp_id);
private:
    BaseRepository baseRepo;
};

#endif // REPOSITORY_H
