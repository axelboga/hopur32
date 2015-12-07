#include "scientistrepository.h"

ScientistRepository::ScientistRepository() {
    datab = baseRepo.CreateConnection();
}

ScientistRepository::~ScientistRepository() {
}

void ScientistRepository::fillVectorFromDatabase(vector<Scientist>& v, string sql) {
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

void ScientistRepository::addToDatabase(Scientist scientist){
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Scientists (FirstName, LastName, Gender, BirthYear, DeathYear) VALUES (:FirstName, :LastName, :Gender, :BirthYear, :DeathYear)");
    query.bindValue(":FirstName", QString::fromStdString(scientist.getFirstName()));
    query.bindValue(":LastName", QString::fromStdString(scientist.getLastName()));
    query.bindValue(":Gender", QString::fromStdString(scientist.getSex()));
    query.bindValue(":BirthYear", QString::fromStdString(scientist.getYearOfBirth()));
    query.bindValue(":DeathYear", QString::fromStdString(scientist.getYearOfDeath()));
    query.exec();
}

vector<Scientist> ScientistRepository::searchInDatabase(string input) {
    vector<Scientist> v;
    string s = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists WHERE rowid LIKE '%" + input + "%' OR FirstName LIKE '%" + input + "%' OR LastName LIKE '%" + input + "%' OR Gender LIKE '%" + input + "%' OR BirthYear LIKE '%" + input + "%' OR DeathYear LIKE '%" + input + "%'";
    fillVectorFromDatabase(v, s);
    return v;
}

vector<Scientist> ScientistRepository::sortDatabase(string sortBy) {
    vector<Scientist> v;
    string s = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists ORDER BY " + sortBy;
    fillVectorFromDatabase(v, s);
    return v;
}

void ScientistRepository::removeFromDatabase(string my_id) {
    QSqlQuery query(datab);

    query.prepare("DELETE FROM Scientists WHERE ID = :my_id");
    query.bindValue(":my_id", std::atoi(my_id.c_str()));
    query.exec();
}

/*************************************CONNECTIONS********************************************/


void ScientistRepository::addConnection(string sci_id, string comp_id){
    QSqlQuery query(datab);
    query.prepare("INSERT INTO ScientistComputerConnections2 (sId, cId) VALUES(:sId, :cId)");
    query.bindValue(":sId", atoi(sci_id.c_str()));
    query.bindValue(":cId", atoi(comp_id.c_str()));
    query.exec();
}

vector<Scientist> ScientistRepository::getScientistsByComputerId(string id){
    vector<Scientist> v;
    QSqlQuery query(datab);
    string sql = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists s "
                  "INNER JOIN ScientistComputerConnections2 scc "
                  "ON s.ID = scc.sId "
                  "WHERE scc.cId = '" + id + "'";
    fillVectorFromDatabase(v, sql);
    return v;
}
