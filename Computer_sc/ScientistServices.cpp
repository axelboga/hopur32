#include "scientistservices.h"

const int CURRENT_YEAR = 2015;

ScientistServices::ScientistServices() {
    compSciRepo = ScientistRepository();
 }

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

void ScientistServices::add(ComputerScientist c) {
    compSciRepo.add(c);
}

void ScientistServices::view() {
    vector<ComputerScientist> v;
    string sql = "SELECT * FROM Scientists";
    compSciRepo.fillVectorFromDatabase(v, sql);
    output(v);
}

void ScientistServices::output(vector<ComputerScientist>& v) {
    cout << " _____________________________________________________________________ " << endl;
    cout << " No.| Name                    | Gender | Date of Birth | Date of Death   " << endl;
    cout << " ___|_________________________|________|_______________|______________ " << endl;
    for (unsigned int i = 0; i < v.size(); i++){
        cout<< " " << left << setw(5)<< setfill(' ');
        cout << i+1 << v[i];
    }
    cout << " _____________________________________________________________________" << endl;
}
