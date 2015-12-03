#include "computerrepository.h"

ComputerRepository::ComputerRepository(){ 
    datab.open();
}

void ComputerRepository::add(Computer computer) {
    /*
    datab = QSqlDatabase::addDatabase("QSQLITE");
    datab.setDatabaseName("Database.sqlite");
    datab.open();
    */

    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computers VALUES (:name,:yearbuilt,:type,:wasbuilt)");
    query.bindValue(":name", QString::fromStdString(computer.getName()));
    query.bindValue(":yearbuilt", QString::fromStdString(computer.getYear()));
    query.bindValue(":type", QString::fromStdString(computer.getType()));
    query.bindValue(":wasbuilt", computer.getWasBuilt());
    query.exec();
}

void ComputerRepository::fillVectorFromDatabase(vector<Computer>& v, string sql) {
    Computer c;
    QSqlQuery query;
    query.prepare(QString::fromStdString(sql));
    query.exec();
    //Ef við viljum birta allan listann þá látum við string sql = "SELECT * FROM computers".
    //En t.d. ef bara birta lista yfir þá sem hafa ákv saerch term er sql = search term.
    while(query.next()){
        c.setId(query.value("id").toUInt());
        c.setName(query.value("name").toString().toStdString());
        c.setYear(query.value("yearbuilt").toString().toStdString());
        //c.setWasBuilt(query.value("wasbuilt"));
        c.setType(query.value("type").toString().toStdString());
        v.push_back(c);
    }
}

vector<Computer> ComputerRepository::search(string input) {
    vector<Computer> v;
    string s = "SELECT * FROM Computers WHERE id LIKE '%" + input + "%' OR name LIKE '%" + input + "%' OR yearbuilt LIKE '%" + input + "%' OR type LIKE '%" + input + "%' OR wasbuilt LIKE '%" + input + "%'";
    return v;
}
