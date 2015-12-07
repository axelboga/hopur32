#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H
#include "computerscientist.h"
#include "baserepository.h"
#include <QtSql>

class ScientistRepository {
public:
    ScientistRepository();
    ~ScientistRepository();
    QSqlDatabase datab;
    void fillVectorFromDatabase(vector<ComputerScientist>& v, string sql);
    void add(ComputerScientist scientist);
    vector<ComputerScientist> search(string input);
    vector<ComputerScientist> sort(string sortBy);
private:
    BaseRepository baseRepo;
};

#endif // REPOSITORY_H
