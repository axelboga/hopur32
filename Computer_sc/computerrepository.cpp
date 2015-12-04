#include "computerrepository.h"
#include <iostream>
using namespace std;

ComputerRepository::ComputerRepository(){ 
    baseRepo = BaseRepository();
    baseRepo.datab.open();
}

ComputerRepository::~ComputerRepository(){
    //baseRepo.datab.close();
}

void ComputerRepository::add(Computer computer) {
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computers VALUES (:Name, :Type, :WasBuilt, :YearBuilt)");
    query.bindValue(":Name", QString::fromStdString(computer.getName()));
    query.bindValue(":Type", QString::fromStdString(computer.getType()));
    query.bindValue(":WasBuilt", QString::fromStdString(computer.getWasBuilt()));
    query.bindValue(":YearBuilt", QString::fromStdString(computer.getYear()));
    query.exec();
}

void ComputerRepository::fillVectorFromDatabase(vector<Computer>& v, string sql) {
    Computer c;
    QSqlQuery query(datab);
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
    vector<Computer> v;
    string s = "SELECT * FROM Computers WHERE rowid LIKE '%" + input + "%' OR Name LIKE '%" + input + "%' OR YearBuilt LIKE '%" + input + "%' OR Type LIKE '%" + input + "%' OR WasBuilt LIKE '%" + input + "%'";
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
    //baseRepo.datab.open();
}

vector<Computer> ComputerRepository::sort(string sortBy){
    vector<Computer> v;
    string s = "SELECT rowid, Name, YearBuilt, Type, WasBuilt FROM Computers ORDER"+sortBy;
    fillVectorFromDatabase(v, s);
    return v;
}
