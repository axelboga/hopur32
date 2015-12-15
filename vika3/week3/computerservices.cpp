#include "computerservices.h"
#include "computer.h"
#include "computerrepository.h"

const int CURRENT_YEAR = 2015;

ComputerServices::ComputerServices() {
    compRepo = ComputerRepository();
}

/*********************************** "CHECK"-INPUT *************************************/

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

/********************************** MAIN FUNCTIONS **************************************/

bool ComputerServices::add(Computer computer) {
    return compRepo.addToDatabase(computer);
}

vector<Computer> ComputerServices::search(string searchTerm, string sortBy, string ascendingOrder) {
    vector<Computer> v;
    v = compRepo.searchInDatabase(searchTerm, sortBy, ascendingOrder);
    return v;
}

vector<Computer> ComputerServices::sort(string sortBy, string ascendingOrder) {
    vector<Computer> v;
    v = compRepo.sortDatabase(sortBy, ascendingOrder);
    return v;
}

bool ComputerServices::remove(string my_id) {
    return compRepo.removeFromDatabase(my_id);
}

/************************************* CONNECTIONS ****************************************/

vector<Computer> ComputerServices::getComputersByScientistId(string s_id) {
    vector<Computer> v;
    v = compRepo.getComputersByScientistId(s_id);
    return v;
}

