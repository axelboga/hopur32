#include "Scientist.h"

Scientist::Scientist(){
    firstName = "";
    lastName = "";
    name = "";
    sex = "";
    yearOfBirth = "";
    yearOfDeath = "-";
}

int Scientist::getId() const {
    return id;
}

string Scientist::getFirstName() const {
   return firstName;
}

string Scientist::getLastName() const {
   return lastName;
}

string Scientist::getName() const {
   return name;
}

string Scientist::getSex() const {
    return sex;
}

string Scientist::getYearOfBirth() const {
    return yearOfBirth;
}

string Scientist::getYearOfDeath() const {
    return yearOfDeath;
}

void Scientist::setId(int my_id) {
    id = my_id;
}

void Scientist::setFirstName(string f_name) {
   firstName = f_name;
}

void Scientist::setLastName(string l_name) {
   lastName = l_name;
}

void Scientist::setName(){
    name = firstName+" "+lastName;
}

void Scientist::setSex(string gender) {
    sex = gender;
}

void Scientist::setYearOfBirth(string b_year) {
    yearOfBirth = b_year;
}

void Scientist::setYearOfDeath(string d_year) {
    yearOfDeath = d_year;
}

ostream& operator <<(ostream& outs, Scientist& c) { //how to output the object computerScientist
    string tempF = c.getFirstName();
    tempF[0] = toupper(tempF[0]);
    string tempL = c.getLastName();
    tempL[0] = toupper(tempL[0]);
    outs << left << setw(11) << tempF << left << setw(15) << tempL << left << setw(9)
         << c.sex << left << setw(16)<< c.yearOfBirth << left <<setw(4) << c.yearOfDeath << endl;
    return outs;
}

ostream& readToFile(ostream& outs, Scientist& c) { //put the scientist into the file
    outs << left << setw(11) << c.firstName << left << setw(12) << c.lastName << left << setw(14)
         << c.sex << left << setw(16)<< c.yearOfBirth << left <<setw(4) << c.yearOfDeath << endl;
    return outs;
}

void Scientist::fillVectorFromList(istream& ins, vector<Scientist>& v) {
    while(ins >> firstName >> lastName >> sex >> yearOfBirth >> yearOfDeath){
        name = firstName+" "+lastName;
        v.push_back(*this);
    }
}

bool operator == (Scientist& c1, Scientist& c2) { //returns true if two objects are exactly the same
    if (c1.name == c2.name && c1.yearOfBirth == c2.yearOfBirth && c1.yearOfDeath == c2.yearOfDeath){
        return true;
    }
    else{
        return false;
    }
}

bool operator == (string s, Scientist& c) { //return true if string, s, is a substring in any of the object's variables
    if (c.found(c.name, s) || c.found(c.yearOfBirth, s) || c.found(c.yearOfDeath, s)){
        return true;
    }
    else{
        return false;
    }
}

bool Scientist::found(string a, string b) { //returns true if a certain substring exists in a string
   int n;
   n = a.find(b);
   if (n < 0){
     return false;
    }
   return true;
}
