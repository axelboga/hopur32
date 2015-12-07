#include "baserepository.h"

QSqlDatabase BaseRepository::CreateConnection(){
    QString connectionName = "ComputerScienceConnection";
    QSqlDatabase database;

    if(QSqlDatabase::contains(connectionName)){
        database = QSqlDatabase::database(connectionName);
    }
    else{
        database = QSqlDatabase::addDatabase("QSQLITE", connectionName);
        database.setDatabaseName("Database.sqlite");
        database.open();

        QSqlQuery query;
        query.exec("PRAGMA FOREIGN_KEYS = ON");
    }
    return database;
}
