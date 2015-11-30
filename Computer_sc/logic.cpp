#include "logic.h"
#include <iostream>
#include <string>

logic::logic() {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist& c) {
    addFirstName(c);
    addLastName(c);
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

bool logic::okToAdd(ComputerScientist& c) {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    for (unsigned int i = 0; i < v.size(); i++){
        if (v[i] == c){
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
    bool valid = false;
    while (!valid){
        cout << "Input gender(female / male): ";
        cin >> gender;
        c.setSex(gender);
        valid = checkSex(c.getSex());
        if (!valid){
            cout << "Sex must be either female or male." << endl;
            cout << "Please try again." << endl;
        }
    }
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
    string answ = c.isAlive();
    if (answ != "y" && answ != "Y" && answ != "yes" && answ != "Yes" && answ != "YES" ){
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

bool logic::checkBirth(string s) {
    int  year = atoi(s.c_str());

    for (unsigned int i = 0; i < s.length(); i++){
        if (!isdigit(s[i])){
            return false;
        }
        if(s.length() != 4){
            return false;
        }
        if(year > 2015){
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

bool logic::checkSex(string s) {

    if(islower(s != "male" && s != "female")){
        return false;
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

bool compareByFirstName(ComputerScientist a, ComputerScientist b){
    return a.getFirstName() < b.getFirstName();
}

bool compareByLastName(ComputerScientist a, ComputerScientist b)
{
    return a.getLastName() < b.getLastName();
}

bool compareByReverseFirstName(ComputerScientist a, ComputerScientist b){
    return a.getFirstName() > b.getFirstName();
}

bool compareByReverseLastName(ComputerScientist a, ComputerScientist b){
    return a.getLastName() > b.getLastName();
}

bool compareBySex(ComputerScientist a, ComputerScientist b){
    return a.getSex() < b.getSex();
}

/*
bool logic::compareByBirth(ComputerScientist a, ComputerScientist b)
{
    return a.getYearOfBirth() < b.getYearOfBirth();
}
bool logic::compareByDeath(ComputerScientist& a, ComputerScientist& b)
{
    return a.getYearOfDeath() < b.getYearOfDeath();
}

*/

void logic::sortByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByFirstName);
}

void logic::sortByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByLastName);
}

void logic::sortReverseByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseFirstName);
}

void logic::sortReverseByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseLastName);
}

void logic::sortBySex(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareBySex);
}

void logic::searching() {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    string input;
    cin >> input;
    for (unsigned int i = 0; i < v.size(); i++){
        if (input == v[i]){  //== is overloaded for string and object
            cout << v[i];
        }
    }
}

void logic::eraseFromVector() {
    int number;
    cout << "Input the number of the scientist you want to erase: ";
    cin >> number;

    compSciRepo.eraseFromVector(number);
}
