#include "logic.h"
#include <iostream>
#include <string>

const int CURRENT_YEAR = 2015;

logic::logic() {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist& c) {
    addFirstName(c);
    addLastName(c);
    c.setName();
    addSex(c);
    addYearOfBirth(c);
    addYearOfDeath(c);
    if (okToAdd(c)){
        compSciRepo.add(c);
    }
    else{
        cout << "This Computer Scientist is already listed" << endl;
    }
}

bool logic::okToAdd(ComputerScientist& c) { //returns true if the object c is not equal to any other objects in the vector
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    for (unsigned int i = 0; i < v.size(); i++){
        if (v[i] == c){ //the operator == has bin overloaded
            return false;
        }
    }
    return true;
}

void logic::addFirstName(ComputerScientist& c) {
    string f_name;
    bool valid = false;
    while (!valid){
        cout << "Input first name: ";
        cin >> f_name;
        transform(f_name.begin(), f_name.end(), f_name.begin(), ::tolower);
        // ^ converts to lowercase

        c.setFirstName(f_name);
        valid = checkName(c.getFirstName());
        if (!valid){
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addLastName(ComputerScientist& c) {
    string l_name;
    bool valid = false;
    while (!valid){
        cout << "Input last name: ";
        cin >> l_name;
        transform(l_name.begin(), l_name.end(), l_name.begin(), ::tolower);
        // ^ converts to lowercase

        c.setLastName(l_name);
        valid = checkName(c.getLastName());
        if (!valid){
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addSex(ComputerScientist& c) {
    string gender;
    do{
        cout << "Input gender(female / male): ";
        cin >> gender;
        transform(gender.begin(), gender.end(), gender.begin(), ::tolower);
        // ^ converts to lowercase

        if(gender == "m" || gender  == "ma" || gender  == "mal" || gender  == "male"){
            gender = "male";
            c.setSex(gender);
        }
        else if(gender == "f" || gender  == "fe" || gender  == "fem" || gender  == "fema"
              || gender == "femal" || gender == "female"){
            gender = "female";
            c.setSex(gender);
        }
        else{
            cout << "Sex must be either female or male." << endl;
            cout << "Please try again." << endl;
        }
    }while(c.getSex() != "male" && c.getSex() != "female");

}

void logic::addYearOfBirth(ComputerScientist& c) {
    string b_year;
    bool valid = false;
    while (!valid){
        cout << "Input year of birth: ";
        cin >> b_year;
        c.setYearOfBirth(b_year);
        valid = checkBirth(c.getYearOfBirth());
        if (!valid){
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addYearOfDeath(ComputerScientist& c) {
    string d_year;
    bool valid = false;
    string answ = isAlive(c);
    transform(answ.begin(), answ.end(), answ.begin(), ::tolower);
    // ^ converts to lowercase
    if (answ != "y" && answ != "ye" && answ != "yes"){
        while (!valid){
            cout << "Input year of death: ";
            cin >> d_year;
            c.setYearOfDeath(d_year);
            valid = checkDeath(c.getYearOfDeath(), c.getYearOfBirth());
            if (!valid){
                cout << "Invalid year!" << endl;
                cout << "Please try again." << endl;
            }
        }
    }
}

string logic::isAlive(ComputerScientist& c) {
    string answ = "no";
    do {
        string name = c.getFirstName();
        name[0] = toupper(name[0]);
        cout << "Is " << name << " still alive ? " << endl;
        cout << "yes/no : ";
        cin >> answ;
        transform(answ.begin(), answ.end(), answ.begin(), ::tolower);
        if (answ != "y" && answ != "ye" && answ != "yes" && answ != "n" && answ != "no"){
            cout << "Invalid input! Try again!" << endl;
        }
    }
    while(answ != "y" && answ != "ye" && answ != "yes" && answ != "n" && answ != "no");

    return answ;
}

bool logic::checkBirth(string s) {//returns false if user inputs non-digits, wrong length or year greater than 2015
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

bool logic::checkDeath(string d, string b) {
    int yearOfDeath = atoi(d.c_str());
    int yearOfBirth = atoi(b.c_str());

    for (unsigned int i = 0; i < d.length(); i++){
        if (!isdigit(d[i])) {
            return false;
        }
        if(d.length() != 4){
            return false;
        }
        if(yearOfDeath > 2015){
            return false;
        }
        if(yearOfBirth > yearOfDeath){
            return false;
        }
    }
   return true;
}

bool logic::checkName(string s) {
    for (unsigned int i = 0; i < s.length(); i++){
        if (!isalpha(s[i])) {
            if (s[i] != ' ' && s[i] != '\''){
                return false;
            }
        }
    }
   return true;
}

void logic::view(vector<ComputerScientist>& v) {
    compSciRepo.outputList(v);
}

void logic::view() {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    compSciRepo.outputList(v);
}

bool compareByName(ComputerScientist a, ComputerScientist b){
    return a.getName() < b.getName();
}

bool compareByLastName(ComputerScientist a, ComputerScientist b){
    return a.getLastName() < b.getLastName();
}

bool compareByReverseName(ComputerScientist a, ComputerScientist b){
    return a.getName() > b.getName();
}

bool compareByReverseLastName(ComputerScientist a, ComputerScientist b){
    return a.getLastName() > b.getLastName();
}

bool compareBySex(ComputerScientist a, ComputerScientist b){
    return a.getSex() < b.getSex();
}

bool compareByYear(ComputerScientist a, ComputerScientist b){
    return a.getYearOfBirth() < b.getYearOfBirth();
}

void logic::sortBySex(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareBySex);
}

void logic::sortByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByName);
}

void logic::sortByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByLastName);
}

void logic::sortReverseByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseName);
}

void logic::sortReverseByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseLastName);
}

void logic::sortByBirthYear(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByYear);
}

void logic::searching() {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    string input;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    header();
    int space = 3;
    int p = 1;
    unsigned int counter = 0;
    for (unsigned int i = 0; i < v.size(); i++){
        if (input == v[i]){  //== is overloaded for string and object
            if(i >= 9) //aligns the spacing between the number and first name
            {
                space = 2;
            }
            else if(i >= 99)
            {
                space = 1;
            }
            cout << p << setw(space) << "." << v[i];
            p++;
        }
        else{
            counter++;
        }
        if(counter >= v.size()){
            cout << endl;
            cout << "The search didn't match anything in the list!" << endl;
        }
    }
    footer();
}

void logic::header() {
    cout << " __________________________________________________________________ " << endl;
    cout << " Name                    | Gender | Date of Birth | Date of Death   " << endl;
    cout << " ________________________|________|_______________|________________ " << endl;
}

void logic::footer() {
    cout << " __________________________________________________________________" << endl;
}

void logic::removeScientist() {
    int number;
    cout << "Input the number of the scientist you want to remove: ";
    cin >> number;
    compSciRepo.removeScientist(number);
}
