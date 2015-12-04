#ifndef COMPUTERREPOSITORY_H
#define COMPUTERREPOSITORY_H
#include <string>
#include "baserepository.h"
#include "computer.h"
#include <QtSql>
using namespace std;

class ComputerRepository {
public:
    ComputerRepository();
    ~ComputerRepository();
    void add(Computer computer);
    void fillVectorFromDatabase(vector<Computer>& v, string sql);
    vector<Computer> search(string input);
    void output(vector<Computer>& v);
    void view();
    vector<Computer> sort(string sortBy);
private:
    BaseRepository baseRepo;
    QSqlDatabase datab;
};

#endif // COMPUTERREPOSITORY_H
