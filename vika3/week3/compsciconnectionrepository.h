#ifndef COMPSCICONNECTIONREPOSITORY_H
#define COMPSCICONNECTIONREPOSITORY_H
#include "baserepository.h"
#include <vector>
#include <iostream>
using namespace std;


class CompSciConnectionRepository
{
public:
    CompSciConnectionRepository();
    ~CompSciConnectionRepository();
    bool addConnection(string sci_id, string comp_id);
    void removeConnection(string sci_id, string comp_id);
private:
    BaseRepository baseRepo;
    QSqlDatabase datab;
};

#endif // COMPSCICONNECTIONREPOSITORY_H
