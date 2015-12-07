#include "scientistrepository.h"

ScientistRepository::ScientistRepository() {
    datab = baseRepo.CreateConnection();
    //datab.open();
}

ScientistRepository::~ScientistRepository() {
    //datab.close();
}

void ScientistRepository::fillVectorFromDatabase(vector<Scientist>& v, string sql) {
    Scientist c;
    QSqlQuery query(datab);
    query.prepare(QString::fromStdString(sql));
    query.exec();
    //Ef við viljum birta allan listann þá látum við string sql = "SELECT * FROM computers".
    //En t.d. ef bara birta lista yfir þá sem hafa ákv saerch term er sql = search term.
    while(query.next()){
        c.setId(query.value("rowid").toInt());
        c.setFirstName(query.value("FirstName").toString().toStdString());
        c.setLastName(query.value("LastName").toString().toStdString());
        c.setSex(query.value("Gender").toString().toStdString());
        c.setYearOfBirth(query.value("BirthYear").toString().toStdString());
        c.setYearOfDeath(query.value("DeathYear").toString().toStdString());
        v.push_back(c);
    }
}

void ScientistRepository::add(Scientist scientist){
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Scientists VALUES (:FirstName, :LastName, :Gender, :BirthYear, :DeathYear)");
    query.bindValue(":FirstName", QString::fromStdString(scientist.getFirstName()));
    query.bindValue(":LastName", QString::fromStdString(scientist.getLastName()));
    query.bindValue(":Gender", QString::fromStdString(scientist.getSex()));
    query.bindValue(":BirthYear", QString::fromStdString(scientist.getYearOfBirth()));
    query.bindValue(":DeathYear", QString::fromStdString(scientist.getYearOfDeath()));
    query.exec();
}

vector<Scientist> ScientistRepository::search(string input) {
    vector<Scientist> v;
    string s = "SELECT rowid, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists WHERE rowid LIKE '%" + input + "%' OR FirstName LIKE '%" + input + "%' OR LastName LIKE '%" + input + "%' OR Gender LIKE '%" + input + "%' OR BirthYear LIKE '%" + input + "%' OR DeathYear LIKE '%" + input + "%'";
    fillVectorFromDatabase(v, s);
    return v;
}

vector<Scientist> ScientistRepository::sort(string sortBy) {
    vector<Scientist> v;
    string s = "SELECT rowid, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists ORDER BY " + sortBy;
    fillVectorFromDatabase(v, s);
    return v;
}

