#include "logic.h"
#include <iostream>
#include <string>

logic::logic()
 {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist& c)
{
    addFirstName(c);
    addLastName(c);
    addSex(c);

    addYearOfBirth(c);
    addYearOfDeath(c);

    compSciRepo.add(c);
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
        setYearOfBirth(c);
        valid = checkBirth(c.getYearOfBirth());
        if (!valid) {
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addYearOfDeath(ComputerScientist& c) {
    bool valid = false;
    char answ = c.isAlive();
    while (!valid){
        setYearOfDeath(c, answ);
        valid = checkDeath(c, c.getYearOfBirth());
        if (!valid) {
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
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

bool logic::checkDeath(ComputerScientist& c, string s) {
    int  yearOfDeath = atoi(s.c_str());
    int yearOfBirth = atoi(c.getYearOfBirth().c_str());

    for (unsigned int i = 0; i < s.length(); i++){
        if (!isdigit(s[i])) {
            return false;
        }
        if(s.length() != 4){
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

    if(s != "male" && s != "female")
    {
        return false;
    }

    return true;

}

void logic::view() {
    vector<ComputerScientist> v;
    compSciRepo.getVector(v);
    compSciRepo.outputList(v);
}
bool logic::compareByFirstName(ComputerScientist a, ComputerScientist b)
{
    return a.getFirstName() < b.getFirstName();
}
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
bool logic::compareByDeath(ComputerScientist a, ComputerScientist b)
{
    return a.getYearOfDeath() < b.getYearOfDeath();
}
