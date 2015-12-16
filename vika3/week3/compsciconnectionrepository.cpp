#include "compsciconnectionrepository.h"

CompSciConnectionRepository::CompSciConnectionRepository() {
    datab = baseRepo.CreateConnection();
}

CompSciConnectionRepository::~CompSciConnectionRepository() {
}

bool CompSciConnectionRepository::addConnection(string sci_id, string comp_id) {
    QSqlQuery query(datab);
    query.prepare("INSERT INTO ScientistComputerConnections (sId, cId) VALUES(:sId, :cId)");
    query.bindValue(":sId", atoi(sci_id.c_str()));
    query.bindValue(":cId", atoi(comp_id.c_str()));
    bool success = query.exec();
    return success;
}

bool CompSciConnectionRepository::removeConnection(string sci_id, string comp_id) {
    QSqlQuery query(datab);
    query.prepare("DELETE FROM ScientistComputerConnections "
                  "WHERE sId = :sci_id "
                  "AND cId = :comp_id");
    query.bindValue(":sci_id", atoi(sci_id.c_str()));
    query.bindValue(":comp_id", atoi(comp_id.c_str()));
    bool success = query.exec();
    return success;
}
