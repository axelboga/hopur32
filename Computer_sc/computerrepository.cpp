#include "computerrepository.h"

ComputerRepository::ComputerRepository(){
    datab = baseRepo.CreateConnection();
}

ComputerRepository::~ComputerRepository(){
}

void ComputerRepository::fillVectorFromDatabase(vector<Computer>& v, string sql) {
    Computer c;
    QSqlQuery query(datab);
    query.prepare(QString::fromStdString(sql));
    query.exec();
    while(query.next()){
        c.setId(query.value("Id").toUInt());
        c.setName(query.value("Name").toString().toStdString());
        c.setWasBuilt(query.value("WasBuilt").toString().toStdString());
        c.setYear(query.value("YearBuilt").toString().toStdString());
        c.setType(query.value("Type").toString().toStdString());
        v.push_back(c);
    }
}

void ComputerRepository::addToDatabase(Computer computer) {
    QSqlQuery query(datab);
    query.prepare("INSERT INTO Computers(Name, Type, WasBuilt, YearBuilt) VALUES (:Name, :Type, :WasBuilt, :YearBuilt)");
    query.bindValue(":Name", QString::fromStdString(computer.getName()));
    query.bindValue(":Type", QString::fromStdString(computer.getType()));
    query.bindValue(":WasBuilt", QString::fromStdString(computer.getWasBuilt()));
    query.bindValue(":YearBuilt", QString::fromStdString(computer.getYear()));
    query.exec();
}

vector<Computer> ComputerRepository::searchInDatabase(string input){
    vector<Computer> v;
    string s = "SELECT ID, Name, YearBuilt, Type, WasBuilt FROM Computers WHERE ID LIKE '%" + input + "%' OR Name LIKE '%" + input + "%' OR YearBuilt LIKE '%" + input + "%' OR Type LIKE '%" + input + "%' OR WasBuilt LIKE '%" + input + "%'";
    fillVectorFromDatabase(v, s);
    return v;
}

vector<Computer> ComputerRepository::sortDatabase(string sortBy){
    vector<Computer> v;
    string s = "SELECT ID, Name, YearBuilt, Type, WasBuilt FROM Computers ORDER BY " + sortBy;
    fillVectorFromDatabase(v, s);
    return v;
}

void ComputerRepository::removeFromDatabase(string my_id) {
    QSqlQuery query(datab);

    query.prepare("DELETE FROM Computers WHERE ID = :my_id");
    query.bindValue(":my_id", std::atoi(my_id.c_str()));
    query.exec();

    query.prepare("DELETE FROM ScientistComputerConnections WHERE cId = :my_id");
    query.bindValue(":my_id", std::atoi(my_id.c_str()));
    query.exec();
    //^Also delete the connections
}


/*************************************CONNECTIONS********************************************/

vector<Computer> ComputerRepository::getComputersByScientistId(string id){
    vector<Computer> v;
    QSqlQuery query(datab);
    string sql = "SELECT ID, Name, YearBuilt, Type, WasBuilt FROM Computers c "
                  "INNER JOIN ScientistComputerConnections scc "
                  "ON c.ID = scc.cId "
                  "WHERE scc.sId = '" + id + "'";
    fillVectorFromDatabase(v, sql);
    return v;
}
