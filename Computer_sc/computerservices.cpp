#include "computerservices.h"
#include "computer.h"
#include "computerrepository.h"

const int CURRENT_YEAR = 2015;

ComputerServices::ComputerServices(){
    compRepo = ComputerRepository();
}

void ComputerServices::add(Computer computer){
    compRepo.add(computer);
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
        return true;
        answ = "yes";
    }
    else if (answ == "n" || answ == "no"){
        return true;
        answ = "no";
    }
    return false;
}

void ComputerServices::view() {
    compRepo.view();
    vector<Computer> v;
    string sql = "SELECT * FROM Computers";
    compRepo.fillVectorFromDatabase(v, sql);
    //return v;
    compRepo.output(v);
}

void ComputerServices::searchComputer(string searchTerm) {
    compRepo.search(searchTerm);
}
