#include "scientistrepository.h"

ScientistRepository::ScientistRepository() {
    datab = baseRepo.CreateConnection();
    //datab.open();
}

ScientistRepository::~ScientistRepository() {
    //datab.close();
}

void ScientistRepository::fillVectorFromDatabase(vector<ComputerScientist>& v, string sql) {
    ComputerScientist c;
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

void ScientistRepository::add(ComputerScientist scientist){
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Scientists VALUES (:FirstName, :LastName, :Gender, :BirthYear, :DeathYear)");
    query.bindValue(":FirstName", QString::fromStdString(scientist.getFirstName()));
    query.bindValue(":LastName", QString::fromStdString(scientist.getLastName()));
    query.bindValue(":Gender", QString::fromStdString(scientist.getSex()));
    query.bindValue(":BirthYear", QString::fromStdString(scientist.getYearOfBirth()));
    query.bindValue(":DeathYear", QString::fromStdString(scientist.getYearOfDeath()));
    query.exec();
}

vector<ComputerScientist> ScientistRepository::search(string input) {
    vector<ComputerScientist> v;
    string s = "SELECT rowid, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists WHERE rowid LIKE '%" + input + "%' OR FirstName LIKE '%" + input + "%' OR LastName LIKE '%" + input + "%' OR Gender LIKE '%" + input + "%' OR BirthYear LIKE '%" + input + "%' OR DeathYear LIKE '%" + input + "%'";
    fillVectorFromDatabase(v, s);
    return v;
}

vector<ComputerScientist> ScientistRepository::sort(string sortBy) {
    vector<ComputerScientist> v;
    string s = "SELECT rowid, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists ORDER BY " + sortBy;
    fillVectorFromDatabase(v, s);
    return v;
}

void ScientistRepository::remove(string my_id) {
    QSqlQuery query(datab);

    query.prepare("DELETE FROM Scientists WHERE rowid = :my_id");
    query.bindValue(":my_id", std::atoi(my_id.c_str()));
    query.exec();
}
