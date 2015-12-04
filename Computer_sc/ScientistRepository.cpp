#include "scientistrepository.h"
#include <fstream>
#include <algorithm>

ScientistRepository::ScientistRepository() {
    datab = QSqlDatabase::addDatabase("QSQLITE");
    datab.setDatabaseName("Database.sqlite");
    //datab.open();
}

ScientistRepository::~ScientistRepository() {
    datab.close();
}

void ScientistRepository::add(ComputerScientist scientist){

    //datab = QSqlDatabase::addDatabase("QSQLITE");
    //datab.setDatabaseName("Database.sqlite");
    datab.open();

    QSqlQuery query(datab);
<<<<<<< HEAD
    query.prepare("INSERT INTO Scientist VALUES (:FirstName, :LastName, :Gender, :BirthYear, :DeathYear)");
=======
    query.prepare("INSERT INTO Scientists VALUES (:FirstName, :LastName, :Gender, :BirthYear, :DeathYear)");
>>>>>>> 174fe26f718941902a3cdf220a4240df25e831bb
    query.bindValue(":FirstName", QString::fromStdString(scientist.getFirstName()));
    query.bindValue(":LastName", QString::fromStdString(scientist.getLastName()));
    query.bindValue(":Gender", QString::fromStdString(scientist.getSex()));
    query.bindValue(":BirthYear", QString::fromStdString(scientist.getYearOfBirth()));
    query.bindValue(":DeathYear", QString::fromStdString(scientist.getYearOfDeath()));
    query.exec();

    //datab.close();
}

vector<ComputerScientist> ScientistRepository::getVector(){
    return compSciVector;
}

void ScientistRepository::outputList(vector<ComputerScientist>& v) {
    cout << " _____________________________________________________________________ " << endl;
    cout << " No.| Name                    | Gender | Date of Birth | Date of Death   " << endl;
    cout << " ___|_________________________|________|_______________|______________ " << endl;
    for (unsigned int i = 0; i < v.size(); i++){
        cout<< " " << left << setw(5)<< setfill(' ');
        cout << i+1 << v[i];
    }
    cout << " _____________________________________________________________________" << endl;
}

void ScientistRepository::removeScientist(int number) {
    ComputerScientist c = compSciVector[number - 1]; //get name of the scientist to be deleted
    string name = c.getFirstName();
    name[0] = toupper(name[0]);

    compSciVector.erase(compSciVector.begin() + (number - 1));  //remove from vector

    ofstream outs("list.txt", ios::out);
    outs.close();
    ofstream out;   //also add to the list/file.
    out.open("list.txt", ios::app);
    if (out.fail()){
        cout << "failed" << endl;
    }
    for(unsigned int i = 0; i != compSciVector.size(); i++) {
        ComputerScientist temp = compSciVector[i];
        //also add to the list/file.
        readToFile(out, temp);
    }
    out.close();

    cout << "The scientist " << name << " has been removed from the list" << endl;
}

vector<ComputerScientist> ScientistRepository::search(string input) {
    vector<ComputerScientist> v;
    string s = "SELECT * FROM Scientists WHERE rowid LIKE '%" + input + "%' OR FirstName LIKE '%" + input + "%' OR LastName LIKE '%" + input + "%' OR Gender LIKE '%" + input + "%' OR BirthYear LIKE '%" + input + "%' OR DeathYear LIKE '%" + input + "%'";
    return v;
}

void ScientistRepository::fillVectorFromDatabase(vector<ComputerScientist>& v, string sql) {
    ComputerScientist c;
    QSqlQuery query;
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
}
