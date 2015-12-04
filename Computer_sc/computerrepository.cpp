#include "computerrepository.h"
#include <iostream>
using namespace std;

ComputerRepository::ComputerRepository(){ 
    datab = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Database.sqlite";
    datab.setDatabaseName(dbName);
    //datab.open();
}
ComputerRepository::~ComputerRepository(){
    datab.close();
}

void ComputerRepository::add(Computer computer) {

    //datab = QSqlDatabase::addDatabase("QSQLITE");
    //datab.setDatabaseName("/Users/hafdisinga/Desktop/hopur32/build-Computer_sc-Desktop_Qt_5_5_1_clang_64bit-Debug");
    datab.open();

    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computers VALUES (:Name, :Type, :WasBuilt, :YearBuilt)");
    query.bindValue(":Name", QString::fromStdString(computer.getName()));
    query.bindValue(":Type", QString::fromStdString(computer.getType()));
    query.bindValue(":WasBuilt", QString::fromStdString(computer.getWasBuilt()));
    query.bindValue(":YearBuilt", QString::fromStdString(computer.getYear()));
    query.exec();

    datab.close();
}

void ComputerRepository::fillVectorFromDatabase(vector<Computer>& v, string sql) {
    datab.open();
    Computer c;
    QSqlQuery query;
    query.prepare(QString::fromStdString(sql));
    query.exec();
    //Ef við viljum birta allan listann þá látum við string sql = "SELECT * FROM computers".
    //En t.d. ef bara birta lista yfir þá sem hafa ákv saerch term er sql = search term.
    while(query.next()){
        c.setId(query.value("rowid").toUInt());
        c.setName(query.value("Name").toString().toStdString());
        c.setWasBuilt(query.value("WasBuilt").toString().toStdString());
        c.setYear(query.value("YearBuilt").toString().toStdString());
        c.setType(query.value("Type").toString().toStdString());
        v.push_back(c);
    }
}

vector<Computer> ComputerRepository::search(string input) {
    datab.open();
    vector<Computer> v;
    string s = "SELECT * FROM Computers WHERE id LIKE '%" + input + "%' OR name LIKE '%" + input + "%' OR yearbuilt LIKE '%" + input + "%' OR type LIKE '%" + input + "%' OR wasbuilt LIKE '%" + input + "%'";
    fillVectorFromDatabase(v, s);
    return v;
}


void ComputerRepository::output(vector<Computer>& v) {
    cout << " _____________________________________________________________________ " << endl;
    cout << " No.| Name                    | Gender | Date of Birth | Date of Death   " << endl;
    cout << " ___|_________________________|________|_______________|______________ " << endl;
    for (unsigned int i = 0; i < v.size(); i++){
        cout<< " " << left << setw(5)<< setfill(' ');
        cout << i+1 << v[i];
    }
    cout << " _____________________________________________________________________" << endl;
}

void ComputerRepository::view() {
    datab.open();
}
