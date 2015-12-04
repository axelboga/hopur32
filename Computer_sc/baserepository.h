#ifndef BASEREPSITORY_H
#define BASEREPSITORY_H
#include <QtSql>
#include <string>
#include <iostream>
using namespace std;

class BaseRepository
{
public:
    BaseRepository();
    QSqlDatabase ConnectDatabase();
    QSqlDatabase datab;
};

#endif // BASEREPSOITORY_H
