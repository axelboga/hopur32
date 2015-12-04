#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H
#include "computerscientist.h"

#include <QtSql>

class ScientistRepository {
public:
    ScientistRepository();
    ~ScientistRepository() ;
    void add(ComputerScientist scientist);
    vector<ComputerScientist> getVector();
    void output(vector<ComputerScientist>& v);
    void removeScientist(int number);
    void fillVectorFromList(istream& ins, ComputerScientist& c);
    vector<ComputerScientist> search(string input);
    void fillVectorFromDatabase(vector<ComputerScientist>& v, string sql);
private:
    vector<ComputerScientist> compSciVector;
    QSqlDatabase datab;
};

#endif // REPOSITORY_H
