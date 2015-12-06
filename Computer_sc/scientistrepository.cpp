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
        c.setFirstName(query.value("FirstName").toString().toStdString());
        c.setLastName(query.value("LastName").toString().toStdString());
        c.setSex(query.value("Gender").toString().toStdString());
        c.setYearOfBirth(query.value("BirthYear").toString().toStdString());
        c.setYearOfDeath(query.value("DeathYear").toString().toStdString());
        v.push_back(c);
    }
    datab.close();
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
    datab.close();
}

vector<ComputerScientist> ScientistRepository::search(string input) {
    vector<ComputerScientist> v;
    string s = "SELECT * FROM Scientists WHERE rowid LIKE '%" + input + "%' OR FirstName LIKE '%" + input + "%' OR LastName LIKE '%" + input + "%' OR Gender LIKE '%" + input + "%' OR BirthYear LIKE '%" + input + "%' OR DeathYear LIKE '%" + input + "%'";
    datab.close();
    return v;
}
