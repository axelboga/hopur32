#include "computerservices.h"
#include "computer.h"
#include "computerrepository.h"

const int CURRENT_YEAR = 2015;

ComputerServices::ComputerServices(){
    compRepo = ComputerRepository();
}


/*********************************** "CHECK"-FUNCTIONS *************************************/

bool ComputerServices::checkYear(string my_year) {
    int  year = atoi(my_year.c_str());

    for (unsigned int i = 0; i < my_year.length(); i++){
        if (!isdigit(my_year[i])){
            return false;
        }
        if(my_year.length() != 4){
            return false;
        }
        if(year > CURRENT_YEAR){
            return false;
        }
    }
   return true;
}

bool ComputerServices::checkType(string my_type) {
    for (unsigned int i = 0; i < my_type.length(); i++){
        if (!isalpha(my_type[i])) {
            if (my_type[i] != ' ' && my_type[i] != '\''){
                return false;
            }
        }
    }
   return true;
}

bool ComputerServices::checkWasBuilt(string& answ){
    if (answ == "y" || answ == "yes" || answ == "ye") {
        answ = "yes";
        return true;
    }
    else if (answ == "n" || answ == "no"){
        answ = "no";
        return true;
    }
    return false;
}

bool ComputerServices::checkSearch(string searchTerm) {
    vector<Computer> v;
    v = compRepo.searchInDatabase(searchTerm);
    if (v.size() < 1) { //if the vector is empty, nothing has been found
        return false;
    }
    return true;
}

bool ComputerServices::checkIfIdExists(string my_id, string& name) {
    vector<Computer> v;
    string sql = "SELECT ID, Name, Type, WasBuilt, YearBuilt FROM Computers";
    compRepo.fillVectorFromDatabase(v, sql);
    //^put all the data from the "Computers" table in a vector

    int int_id = atoi(my_id.c_str());

    for(unsigned int i = 0; i < v.size(); i++){
        if(v[i].getId() == int_id){
            name = v[i].getName();  //getting the name of the computer with the ID my_id.
            return true;
        }
    }
    return false;
}

bool ComputerServices::checkSciCompConnections(string s_id) {
    vector<Computer> v;
    v = compRepo.getComputersByScientistId(s_id);
    if (v.size() < 1) { //if the vector is empty, nothing has been found
        return false;
    }
    return true;
}

/********************************** MAIN FUNCTIONS **************************************/

vector<Computer> ComputerServices::view() {
    vector<Computer> v;
    string sql = "SELECT ID, Name, YearBuilt, Type, WasBuilt FROM Computers ORDER BY Name";
    compRepo.fillVectorFromDatabase(v, sql);
    //output(v);
    return v;
}

bool ComputerServices::add(Computer computer){
    return compRepo.addToDatabase(computer);
}

vector<Computer> ComputerServices::search(string searchTerm) {
    vector<Computer> v;
    v = compRepo.searchInDatabase(searchTerm);
    return v;
}

void ComputerServices::sort(string sortBy){
    vector<Computer> v;
    v = compRepo.sortDatabase(sortBy);
    output(v);
}

bool ComputerServices::remove(string my_id) {
    return compRepo.removeFromDatabase(my_id);
}

void ComputerServices::output(vector<Computer>& v) {
    cout << " _____________________________________________________________________________ " << endl;
    cout << " ID | Name                          |       Type         | Built? | Year Built " << endl;
    cout << " ___|_______________________________|____________________|________|___________ " << endl;
    cout << setfill(' ');
    for (unsigned int i = 0; i < v.size(); i++){

        cout << right << setw(4) << v[i].getId();
        cout << "| " << left << setw(30) << v[i].getName();
        cout << "| " << left << setw(19) << v[i].getType();
        cout << "| " << left << setw(7) << v[i].getWasBuilt();
        cout << "| " << left << setw(6) << v[i].getYear() << endl;


    }
    cout << " _____________________________________________________________________________" << endl;
}

/************************************* CONNECTIONS ****************************************/


void ComputerServices::getComputersByScientistId(string s_id) {
    vector<Computer> v;
    v = compRepo.getComputersByScientistId(s_id);
    output(v);
}

