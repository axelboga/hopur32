#include "computerservices.h"
#include "computer.h"
#include "computerrepository.h"

const int CURRENT_YEAR = 2015;

ComputerServices::ComputerServices(){
    compRepo = ComputerRepository();
}

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
    v = compRepo.search(searchTerm);
    if (v.size() < 1) {
        return false;
    }
    else {
        return true;
    }
}

void ComputerServices::view() {
    vector<Computer> v;
    string sql = "SELECT rowid, Name, YearBuilt, Type, WasBuilt FROM Computers";
    compRepo.fillVectorFromDatabase(v, sql);
    output(v);
}

void ComputerServices::add(Computer computer){
    compRepo.add(computer);
}

void ComputerServices::search(string searchTerm) {
    vector<Computer> v;
    v = compRepo.search(searchTerm);
    output(v);
}

void ComputerServices::sort(string sortBy){
    vector<Computer> v;
    v = compRepo.sort(sortBy);
    output(v);
}

void ComputerServices::remove(string my_id) {
    cout << "inni í ComServ remove";
    compRepo.remove(my_id);
}

void ComputerServices::output(vector<Computer>& v) {
    cout << " _______________________________________________________________________ " << endl;
    cout << " No.| Name                    |       Type         | Built? | Year Built " << endl;
    cout << " ___|_________________________|____________________|________|___________ " << endl;
    cout << setfill(' ');
    for (unsigned int i = 0; i < v.size(); i++){
        cout << setw(4) << right << i+1;
        cout << "| " << left << setw(24) << v[i].getId();
        cout << "| " << left << setw(24) << v[i].getName();
        cout << "| " << left << setw(19) << v[i].getType();
        cout << "| " << left << setw(7) << v[i].getWasBuilt();
        cout << "| " << left << setw(6) << v[i].getYear() << endl;


    }
    cout << " _______________________________________________________________________" << endl;
}
