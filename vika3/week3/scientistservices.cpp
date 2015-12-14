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

bool ScientistServices::checkGender(string& s) {
    if(s == "m" || s  == "ma" || s  == "mal" || s  == "male"){
        s = "male";
        return true;
    }
    else if(s == "f" || s == "fe" || s == "fem" || s == "fema" || s == "femal" || s == "female"){
        s = "female";
        return true;
    }
    return false;
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

bool ScientistServices::checkSearch(string searchTerm, string sortBy) {
    vector<Scientist> v;
    v = sciRepo.searchInDatabase(searchTerm, sortBy );
    if (v.size() < 1) { //if the vector is empty, nothing has been found
        return false;
    }
    return true;
}

bool ScientistServices::checkIfIdExists(string my_id, string& name) {
    vector<Scientist> v;
    string sql = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists";
    sciRepo.fillVectorFromDatabase(v, sql);
    //^put all the data from the table "Scientists"  in a vector

    int int_id = atoi(my_id.c_str());

    for(unsigned int i = 0; i < v.size(); i++){
        if(v[i].getId() == int_id){
            name = v[i].getFirstName(); //get the name of the scientist with the ID my_id.
            name[0] = toupper(name[0]);
            return true;
        }
    }
    return false;
}

bool ScientistServices::checkCompSciConnections(string c_id) {
    vector<Scientist> v;
    v = sciRepo.getScientistsByComputerId(c_id);
    if (v.size() < 1) { //if the vector is empty, nothing has been found
        return false;
    }
    return true;
}

bool ScientistServices::isAlive(string& answ) {
    transform(answ.begin(), answ.end(), answ.begin(), ::tolower);
    if (answ == "n" || answ == "no"){
        return true;
    }
    else if (answ == "y" || answ == "ye" || answ == "yes") {
        answ = "yes";
        return true;
    }
    return false;
}

/*********************************** MAIN FUNCTIONS **************************************/

bool ScientistServices::add(Scientist c) {
    return sciRepo.addToDatabase(c);
}

void ScientistServices::view() {
    vector<Scientist> v;
    string sql = "SELECT ID, FirstName, LastName, Gender, BirthYear, DeathYear FROM Scientists ORDER BY FirstName";
    sciRepo.fillVectorFromDatabase(v, sql);
    //output(v);
}

vector<Scientist> ScientistServices::search(string searchTerm, string sortBy) {
    vector<Scientist> v;
    v = sciRepo.searchInDatabase(searchTerm, sortBy);
    //output(v);
    return v;
}

vector<Scientist> ScientistServices::sort(string sortBy) {
    vector<Scientist> v;
    v = sciRepo.sortDatabase(sortBy);
    //output(v);
    return v;
}

bool ScientistServices::remove(string my_id) {
    return sciRepo.removeFromDatabase(my_id);
}

void ScientistServices::output(vector<Scientist>& v) {
    cout << " _____________________________________________________________________________ " << endl;
    cout << " ID | Name                          |  Gender  | Date of Birth | Date of Death   " << endl;
    cout << " ___|_______________________________|__________|_______________|______________" << endl;
    for (unsigned int i = 0; i < v.size(); i++){
        cout << right << setw(4) << v[i].getId();
        string tempF = v[i].getFirstName();
        tempF[0] = toupper(tempF[0]); //Capitalize first name
        string tempL = v[i].getLastName();
        tempL[0] = toupper(tempL[0]); //Capitalize last name
        string fullName = tempF + " " + tempL; //Combine names with space inbetween
        cout << "| " << left << setw(30) << fullName;
        cout << "| " << left << setw(9) << v[i].getSex();
        cout << "|     " << left << setw(10) << v[i].getYearOfBirth();
        cout << "|      " << left << setw(9) << v[i].getYearOfDeath() << endl;

    }
    cout << " _____________________________________________________________________________" << endl;
}

/*************************************CONNECTIONS********************************************/

vector<Scientist> ScientistServices::getScientistsByComputerId(string c_id) {
    vector<Scientist> v;
    v = sciRepo.getScientistsByComputerId(c_id);
    return v;
}
