#ifndef COMPUTERREPOSITORY_H
#define COMPUTERREPOSITORY_H
//#include "baserepository.h"
#include "computer.h"
#include <QtSql>

class ComputerRepository {
public:
    ComputerRepository();
    void add(Computer computer);
    void fillVectorFromDatabase(vector<Computer>& v, string sql);
    vector<Computer> search(string input);
    ~ComputerRepository();
    void output(vector<Computer>& v);
    void view();

private:
    //BaseRepository baseRepo;
    QSqlDatabase datab;
};

#endif // COMPUTERREPOSITORY_H
