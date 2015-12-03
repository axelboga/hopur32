#include "computerrepository.h"

ComputerRepository::ComputerRepository(){ 
    baseRepo = BaseRepository();
}

void ComputerRepository::add(Computer computer) {
    QSqlDatabase datab = baseRepo.ConnectDatabase();
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computers (name, yearBuilt, type, wasBuilt) VALUES (:name,:yearbuilt,:type,:wasbuilt)");
    query.bindValue(":name", QString::fromStdString(computer.getName()));
    query.bindValue(":yearbuilt", QString::fromStdString(computer.getYear()));
    query.bindValue(":type", QString::fromStdString(computer.getType()));
    query.bindValue(":wasbuilt", computer.getWasBuilt());
    query.exec();
}
