#include "computerscientist.h"
#include <iomanip>

ComputerScientist::ComputerScientist() {
    firstName = "";
    lastName = "";
    sex = "";
    yearOfBirth = "";
    yearOfDeath = "na";
}

string ComputerScientist::getFirstName() const {
   return firstName;
}

string ComputerScientist::getLastName() {
   return lastName;
}

string ComputerScientist::getSex() {
    return sex;
}

string ComputerScientist::getYearOfBirth() {
    return yearOfBirth;
}

string ComputerScientist::getYearOfDeath() {
    return yearOfDeath;
}

void ComputerScientist::setFirstName(string f_name) {
   firstName = f_name;
}

void setLastName(ComputerScientist& c) {
    cout << "Input last name: ";
    cin >> c.lastName;
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

string ComputerScientist::isAlive() {
    string answ = "no";
    cout << "Is " << firstName << " still alive ? " << endl;
    cout << "yes/no : ";
    cin >> answ;

    return answ;
}

ostream& operator <<(ostream& outs, ComputerScientist& c) {
    outs << left << setw(14) << c.firstName << left << setw(16) << c.lastName << left << setw(16)<<
            c. sex << left << setw(16)<< c.yearOfBirth << left <<setw(15) << c.yearOfDeath << endl;
    return outs;
}

void ComputerScientist::fillVectorFromList(istream& ins, vector<ComputerScientist>& v){
    while(ins >> firstName >> lastName >> sex >> yearOfBirth >> yearOfDeath) {
        v.push_back(*this);
    }
}

bool operator == (ComputerScientist& c1, ComputerScientist& c2) {
    if (c1.firstName == c2.firstName && c1.lastName == c2.lastName &&
            c1.yearOfBirth == c2.yearOfBirth && c1.yearOfDeath == c2.yearOfDeath) {
        return true;
    }
    else {
        return false;
    }
}

bool operator == (string s, ComputerScientist& c) {
    if (c.found(c.firstName, s) || c.found(c.lastName, s) || c.found(c.yearOfBirth, s) || c.found(c.yearOfDeath, s)) {
        return true;
    }
    return false;
}

bool ComputerScientist::found(string a, string b) {
   int n;
   n = a.find(b);
   if (n < 0) {
     return false;
    }
   return true;
}
