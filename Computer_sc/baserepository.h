#ifndef BASEREPSITORY_H
#define BASEREPSITORY_H
#include <QtSql>
#include <iostream>
using namespace std;

class BaseRepository
{
public:
    BaseRepository();
    QSqlDatabase ConnectDatabase();
private:
    QSqlDatabase datab;
};

#endif // BASEREPSOITORY_H
