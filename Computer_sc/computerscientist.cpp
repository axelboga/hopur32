#include "computerscientist.h"

ComputerScientist::ComputerScientist(){
    firstName = "";
    lastName = "";
    name = "";
    sex = "";
    yearOfBirth = "";
    yearOfDeath = "-";
}

string ComputerScientist::getFirstName() const {
   return firstName;
}

string ComputerScientist::getLastName() const {
   return lastName;
}

string ComputerScientist::getName() const {
   return name;
}

string ComputerScientist::getSex() const {
    return sex;
}

string ComputerScientist::getYearOfBirth() const {
    return yearOfBirth;
}

string ComputerScientist::getYearOfDeath() const {
    return yearOfDeath;
}

void ComputerScientist::setFirstName(string f_name) {
   firstName = f_name;
}

void ComputerScientist::setLastName(string l_name) {
   lastName = l_name;
}

void ComputerScientist::setName(){
    name = firstName+" "+lastName;
}

void ComputerScientist::setSex(string gender) {
    sex = gender;
}

void ComputerScientist::setYearOfBirth(string b_year) {
    yearOfBirth = b_year;
}

void ComputerScientist::setYearOfDeath(string d_year) {
    yearOfDeath = d_year;
}

/*ostream& operator <<(ostream& outs, ComputerScientist& c) { //how to output the object computerScientist
    string tempF = c.getFirstName();
    tempF[0] = toupper(tempF[0]);
    string tempL = c.getLastName();
    tempL[0] = toupper(tempL[0]);
    outs << left << setw(11) << tempF << left << setw(12) << tempL << left << setw(14)
         << c.sex << left << setw(16)<< c.yearOfBirth << left <<setw(4) << c.yearOfDeath << endl;
    return outs;
}
*/

ostream& operator <<(ostream& outs, ComputerScientist& c) { //how to output the object computerScientist
    string tempF = c.getFirstName();
    tempF[0] = toupper(tempF[0]);
    string tempL = c.getLastName();
    tempL[0] = toupper(tempL[0]);
    outs << left << setw(11) << tempF << left << setw(12) << tempL << left << setw(14)
         << c.sex << left << setw(16)<< c.yearOfBirth << left <<setw(4) << c.yearOfDeath << endl;
    return outs;
}

ostream& readToFile(ostream& outs, ComputerScientist& c) { //put the scientist into the file
    outs << left << setw(11) << c.firstName << left << setw(12) << c.lastName << left << setw(14)
         << c.sex << left << setw(16)<< c.yearOfBirth << left <<setw(4) << c.yearOfDeath << endl;
    return outs;
}

void ComputerScientist::fillVectorFromList(istream& ins, vector<ComputerScientist>& v) {
    while(ins >> firstName >> lastName >> sex >> yearOfBirth >> yearOfDeath){
        name = firstName+" "+lastName;
        v.push_back(*this);

    }
}

bool operator == (ComputerScientist& c1, ComputerScientist& c2) { //returns true if two objects are exactly the same
    if (c1.name == c2.name && c1.yearOfBirth == c2.yearOfBirth && c1.yearOfDeath == c2.yearOfDeath){
        return true;
    }
    else{
        return false;
    }
}

bool operator == (string s, ComputerScientist& c) { //return true if string, s, is a substring in any of the object's variables
    if (c.found(c.name, s) || c.found(c.yearOfBirth, s) || c.found(c.yearOfDeath, s)){
        return true;
    }
    else{
        return false;
    }
}

bool ComputerScientist::found(string a, string b) { //returns true if a certain substring exists in a string
   int n;
   n = a.find(b);
   if (n < 0){
     return false;
    }
   return true;
}
