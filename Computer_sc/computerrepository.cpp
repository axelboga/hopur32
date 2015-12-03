#include "computerrepository.h"

ComputerRepository::ComputerRepository(){ 
    baseRepo = BaseRepository();
}

void ComputerRepository::add(Computer computer) {
    QSqlDatabase datab = baseRepo.ConnectDatabase();
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computers (name, yearBuilt, type, wasBuilt) VALUES (:name,:year built,:type,:was built)");
    query.bindValue(":name", QString::fromStdString(computer.getName()));
    query.bindValue(":yearBuilt", QString::fromStdString(computer.getYear()));
    query.bindValue(":type", QString::fromStdString(computer.getType()));
    query.bindValue(":was built", computer.getWasBuilt());
    query.exec();
}
