#include "baserepository.h"

BaseRepository::BaseRepository(){
    datab = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Database.sqlite";
    datab.setDatabaseName(dbName);
}

