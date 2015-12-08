#include "compsciconnectionrepository.h"

CompSciConnectionRepository::CompSciConnectionRepository() {
    datab = baseRepo.CreateConnection();
}

CompSciConnectionRepository::~CompSciConnectionRepository() {
}

void CompSciConnectionRepository::addConnection(string sci_id, string comp_id){
    QSqlQuery query(datab);
    query.prepare("INSERT INTO ScientistComputerConnections (sId, cId) VALUES(:sId, :cId)");
    query.bindValue(":sId", atoi(sci_id.c_str()));
    query.bindValue(":cId", atoi(comp_id.c_str()));
    query.exec();
}

void CompSciConnectionRepository::removeConnection(string sci_id, string comp_id){
    QSqlQuery query(datab);

    query.prepare("DELETE FROM ScientistComputerConnections "
                  "WHERE sId = :sci_id "
                  "AND cId = :comp_id");
    query.bindValue(":sci_id", atoi(sci_id.c_str()));
    query.bindValue(":comp_id", atoi(comp_id.c_str()));

    query.exec();
}
