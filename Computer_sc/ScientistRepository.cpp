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
    query.prepare("INSERT INTO Computers VALUES (:FirstName, :LastName, :Gender, :BirthYear, :DeathYear)");
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
    string s = "SELECT * FROM Scientists WHERE id LIKE '%" + input + "%' OR Firstname LIKE '%" + input + "%' OR Lastname LIKE '%" + input + "%' OR Gender LIKE '%" + input + "%' OR BirthYear LIKE '%" + input + "%' OR DeathYear LIKE '%" + input + "%'";
    return v;
}
