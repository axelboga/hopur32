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
    if (okToAdd(c)) {
        compSciRepo.add(c);
    }
    else {
        cout << "This Computer Scientist is already listed" << endl;
    }
}

bool logic::okToAdd(ComputerScientist& c) {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    for (unsigned int i = 0; i < v.size(); i++) {
        if (v[i] == c) {
            return false;
        }
    }
    return true;
}

void logic::addFirstName(ComputerScientist& c) {
    bool valid = false;
    while (!valid){
        setFirstName(c);
        valid = checkName(c.getFirstName());
        if (!valid) {
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addLastName(ComputerScientist& c) {
    bool valid = false;
    while (!valid){
        setLastName(c);
        valid = checkName(c.getLastName());
        if (!valid) {
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addSex(ComputerScientist& c) {
    bool valid = false;
    while (!valid){
        setSex(c);
        valid = checkSex(c.getSex());
        if (!valid) {
            cout << "Sex must be either female or male." << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addYearOfBirth(ComputerScientist& c) {
    bool valid = false;
    while (!valid){
        string b_year;
        cout << "Input year of birth: ";
        cin >> b_year;
        c.setYearOfBirth(b_year);
        valid = checkBirth(c.getYearOfBirth());
        if (!valid) {
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addYearOfDeath(ComputerScientist& c) {
    bool valid = false;
    string answ = c.isAlive();
    if (answ != "y" && answ != "Y" && answ != "yes" && answ != "Yes" && answ != "YES" ) {
        while (!valid){
            setYearOfDeath(c);
            valid = checkDeath(c.getYearOfDeath(), c.getYearOfBirth());
            if (!valid) {
                cout << "Invalid year!" << endl;
                cout << "Please try again." << endl;
            }
        }
    }
}

bool logic::checkBirth(string s){
    int  year = atoi(s.c_str());

    for (unsigned int i = 0; i < s.length(); i++){
        if (!isdigit(s[i])) {
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
            if (s[i] != ' ' && s[i] != '\'') {
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

void logic::view() { 
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    compSciRepo.outputList(v);
}

bool logic::compareByFirstName(const ComputerScientist& a, const ComputerScientist& b){

    return a.getFirstName() < b.getFirstName();
}
/*
bool logic::compareByLastName(ComputerScientist a, ComputerScientist b)
{
    return a.getLastName() < b.getLastName();
}
bool logic::compareBySex(ComputerScientist a, ComputerScientist b)
{
    return a.getSex() < b.getSex();
}
bool logic::compareByBirth(ComputerScientist a, ComputerScientist b)
{
    return a.getYearOfBirth() < b.getYearOfBirth();
}
bool logic::compareByDeath(ComputerScientist& a, ComputerScientist& b)
{
    return a.getYearOfDeath() < b.getYearOfDeath();
}

*/

/*void logic::sorting() {
    vector<ComputerScientist> v;
    ComputerScientist a;
    ComputerScientist b;
    v = compSciRepo.getVector();
}
*/

void logic::searching(){
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
