#include "baserepository.h"

BaseRepository::BaseRepository(){
    datab = ConnectDatabase();
    if (!datab.isOpen()){
            cout << "Opnening database failed";
         }
}

QSqlDatabase BaseRepository::ConnectDatabase(){
    QSqlDatabase database;

    if(QSqlDatabase::contains("ComuterScience")){
            database = QSqlDatabase::database("ComuterScience");
        }
    else{
        database = QSqlDatabase::addDatabase("QSQLITE", "ComuterScience");
        database.setDatabaseName("Database.sqlite");
        database.open();
    }

    return database;
}
