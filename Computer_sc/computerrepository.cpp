#include "computerrepository.h"

ComputerRepository::ComputerRepository(){ 
    datab = QSqlDatabase::addDatabase("QSQLITE");
    datab.setDatabaseName("Database.sqlite");
    //datab.open();
}
ComputerRepository::~ComputerRepository(){
    datab.close();
}

void ComputerRepository::add(Computer computer) {

    //datab = QSqlDatabase::addDatabase("QSQLITE");
    //datab.setDatabaseName("Database.sqlite");
    datab.open();

    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computers VALUES (:Name, :Type, :WasBuilt, :YearBuilt)");
    query.bindValue(":Name", QString::fromStdString(computer.getName()));
    query.bindValue(":Type", QString::fromStdString(computer.getType()));
    query.bindValue(":WasBuilt", QString::fromStdString(computer.getWasBuilt()));
    query.bindValue(":YearBuilt", QString::fromStdString(computer.getYear()));
    query.exec();

    //datab.close();
}

void ComputerRepository::fillVectorFromDatabase(vector<Computer>& v, string sql) {
    Computer c;
    QSqlQuery query;
    query.prepare(QString::fromStdString(sql));
    query.exec();
    //Ef við viljum birta allan listann þá látum við string sql = "SELECT * FROM computers".
    //En t.d. ef bara birta lista yfir þá sem hafa ákv saerch term er sql = search term.
    while(query.next()){
        c.setId(query.value("ID").toUInt());
        c.setName(query.value("Name").toString().toStdString());
        //c.setWasBuilt(query.value("WasBuilt"));
        c.setYear(query.value("YearBuilt").toString().toStdString());
        c.setType(query.value("Type").toString().toStdString());
        v.push_back(c);
    }
}

vector<Computer> ComputerRepository::search(string input) {
    vector<Computer> v;
    string s = "SELECT * FROM Computers WHERE id LIKE '%" + input + "%' OR name LIKE '%" + input + "%' OR yearbuilt LIKE '%" + input + "%' OR type LIKE '%" + input + "%' OR wasbuilt LIKE '%" + input + "%'";
    return v;
}

