#include "baserepository.h"

QSqlDatabase BaseRepository::CreateConnection(){
    QString connectionName = "ComputerScienceConnection";
    QSqlDatabase database;

    if(QSqlDatabase::contains(connectionName)){ //check if there is an open database connection
        database = QSqlDatabase::database(connectionName);
    }
    else{
        database = QSqlDatabase::addDatabase("QSQLITE", connectionName); //adding a new database connection
        database.setDatabaseName("Database.sqlite");                     //and opening it
        database.open();

        QSqlQuery query;
        query.exec("PRAGMA FOREIGN_KEYS = ON");
    }
    return database;
}
