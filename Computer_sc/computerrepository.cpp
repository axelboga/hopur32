#include "computerrepository.h"

ComputerRepository::ComputerRepository(){ 
    //datab.open();
}

void ComputerRepository::add(Computer computer) {
    datab = QSqlDatabase::addDatabase("QSQLITE");
    datab.setDatabaseName("Database.sqlite");
    datab.open();

    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computer VALUES (:name,:yearbuilt,:type,:wasbuilt)");
    query.bindValue(":name", QString::fromStdString(computer.getName()));
    query.bindValue(":yearbuilt", QString::fromStdString(computer.getYear()));
    query.bindValue(":type", QString::fromStdString(computer.getType()));
    query.bindValue(":wasbuilt", computer.getWasBuilt());
    query.exec();
}

void ComputerRepository::fillVectorFromDatabase(vector<Computer>& v) {
    Computer c;
    QSqlQuery query(datab);
    query.exec("SELECT * FROM Computer");
    while(query.next()){
        c.setId(query.value("id").toUInt());
        c.setName(query.value("name").toString().toStdString());
        c.setYear(query.value("yearbuilt").toString().toStdString());
        //c.setWasBuilt(query.value("wasbuilt"));
        c.setType(query.value("type").toString().toStdString());
        v.push_back(c);
    }
}
