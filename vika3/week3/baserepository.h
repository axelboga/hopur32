#ifndef BASEREPOSITORY_H
#define BASEREPOSITORY_H

#include <QtSql>

class BaseRepository{
public:
        QSqlDatabase CreateConnection();
};

#endif // BASEREPOSITORY_H
