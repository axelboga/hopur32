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

bool ScientistRepository::addToDatabase(Scientist scientist){
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Scientists (FirstName, LastName, Gender, BirthYear, DeathYear) VALUES"
                  " (:FirstName, :LastName, :Gender, :BirthYear, :DeathYear)");
    query.bindValue(":FirstName", QString::fromStdString(scientist.getFirstName()));
    query.bindValue(":LastName", QString::fromStdString(scientist.getLastName()));
    query.bindValue(":Gender", QString::fromStdString(scientist.getSex()));
    query.bindValue(":BirthYear", QString::fromStdString(scientist.getYearOfBirth()));
    query.bindValue(":DeathYear", QString::fromStdString(scientist.getYearOfDeath()));
    bool success = query.exec();
    return success;
}

vector<Scientist> ScientistRepository::searchInDatabase(string input, string sortBy, string ascendingOrder) {
    vector<Scientist> v;
    string s = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM "
               "Scientists WHERE ID LIKE '%" + input + "%' OR FirstName LIKE '%" + input + "%' "
               "OR LastName LIKE '%" + input + "%' OR Gender LIKE '%" + input + "%' OR BirthYear LIKE '%"
               + input + "%' OR DeathYear LIKE '%" + input + "%' ORDER BY " + sortBy + " " + ascendingOrder;
    fillVectorFromDatabase(v, s);
    return v;
}

vector<Scientist> ScientistRepository::sortDatabase(string sortBy, string ascendingOrder) {
    vector<Scientist> v;
    string s = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists ORDER BY " + sortBy + " " + ascendingOrder;
    fillVectorFromDatabase(v, s);
    return v;
}

bool ScientistRepository::removeFromDatabase(string my_id) {
    QSqlQuery query(datab);

    query.prepare("DELETE FROM ScientistComputerConnections WHERE sId = :my_id");
    query.bindValue(":my_id", std::atoi(my_id.c_str()));
    bool success1 = query.exec();
    //^Also delete the connections*/

    query.prepare("DELETE FROM Scientists WHERE ID = :my_id");
    query.bindValue(":my_id", std::atoi(my_id.c_str()));
    bool success2 = query.exec();

    return (success1 && success2);
}

/*************************************CONNECTIONS********************************************/

vector<Scientist> ScientistRepository::getScientistsByComputerId(string id){
    vector<Scientist> v;
    QSqlQuery query(datab);
    string sql = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists s "
                  "INNER JOIN ScientistComputerConnections scc "
                  "ON s.ID = scc.sId "
                  "WHERE scc.cId = '" + id + "'";
    fillVectorFromDatabase(v, sql);
    return v;
}
