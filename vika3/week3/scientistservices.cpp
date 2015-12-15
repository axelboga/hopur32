#include "scientistservices.h"

const int CURRENT_YEAR = 2015;

ScientistServices::ScientistServices() {
    sciRepo = ScientistRepository();
 }

/*********************************** "CHECK"-FUNCTIONS *************************************/

bool ScientistServices::checkName(string s) {
    for (unsigned int i = 0; i < s.length(); i++){
        if (!isalpha(s[i])) {
            if (s[i] != ' ' && s[i] != '\''){
                return false;
            }
        }
    }
   return true;
}

bool ScientistServices::checkBirth(string s) { //returns false if user inputs non-digits, wrong length or year greater than 2015
    int  year = atoi(s.c_str());

    for (unsigned int i = 0; i < s.length(); i++){
        if (!isdigit(s[i])){
            return false;
        }
        if(s.length() != 4){
            return false;
        }
        if(year > CURRENT_YEAR){
            return false;
        }
    }
   return true;
}

bool ScientistServices::checkDeath(string d, string b) {
    int yearOfDeath = atoi(d.c_str());
    int yearOfBirth = atoi(b.c_str());

    for (unsigned int i = 0; i < d.length(); i++){
        if (!isdigit(d[i])) {
            return false;
        }
        if(d.length() != 4){
            return false;
        }
        if(yearOfDeath > CURRENT_YEAR){
            return false;
        }
        if(yearOfBirth > yearOfDeath){
            return false;
        }
    }
   return true;
}

/*********************************** MAIN FUNCTIONS **************************************/

bool ScientistServices::add(Scientist c) {
    return sciRepo.addToDatabase(c);
}

vector<Scientist> ScientistServices::search(string searchTerm, string sortBy, string ascendingOrder) {
    vector<Scientist> v;
    v = sciRepo.searchInDatabase(searchTerm, sortBy, ascendingOrder);
    return v;
}

vector<Scientist> ScientistServices::sort(string sortBy, string ascendingOrder) {
    vector<Scientist> v;
    v = sciRepo.sortDatabase(sortBy, ascendingOrder);
    return v;
}

bool ScientistServices::remove(string my_id) {
    return sciRepo.removeFromDatabase(my_id);
}

/*************************************CONNECTIONS********************************************/

vector<Scientist> ScientistServices::getScientistsByComputerId(string c_id) {
    vector<Scientist> v;
    v = sciRepo.getScientistsByComputerId(c_id);
    return v;
}
