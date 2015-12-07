#include "compsciconnectionsrepository.h"

CompSciConnectionsRepository::CompSciConnectionsRepository(){
    datab = baseRepo.CreateConnection();
}

void CompSciConnectionsRepository::addConnection(string sci_id, string comp_id){
    QSqlQuery query(datab);
    query.prepare("INSERT INTO ScientistComputerConnections2 (sId, cId) VALUES(:sId, :cId)");
    query.bindValue(":sId", atoi(sci_id.c_str()));
    query.bindValue(":cId", atoi(comp_id.c_str()));
    query.exec();
}

vector<Scientist> CompSciConnectionsRepository::getScientistsByComputerId(string id){
    vector<Scientist> v;
    QSqlQuery query(datab);
    string sql = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists s "
                  "INNER JOIN ScientistComputerConnections2 scc "
                  "ON s.ID = scc.sId "
                  "WHERE scc.cId = '" + id + "'";
    fillVectorWithScientistsFromDatabase(v, sql);
    return v;
}

void CompSciConnectionsRepository::fillVectorWithScientistsFromDatabase(vector<Scientist>& v, string sql){
    Scientist c;
    QSqlQuery query(datab);
    query.prepare(QString::fromStdString(sql));
    query.exec();
    while(query.next()){
        c.setId(query.value("ID").toInt());
        c.setFirstName(query.value("FirstName").toString().toStdString());
        c.setLastName(query.value("LastName").toString().toStdString());
        c.setSex(query.value("Gender").toString().toStdString());
        c.setYearOfBirth(query.value("BirthYear").toString().toStdString());
        c.setYearOfDeath(query.value("DeathYear").toString().toStdString());
        v.push_back(c);
    }
}
