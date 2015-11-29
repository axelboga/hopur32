#include "computerscientist.h"
#include <iomanip>

ComputerScientist::ComputerScientist() {
    firstName = "";
    lastName = "";
    sex = "";
    yearOfBirth = "";
    yearOfDeath = "na";
}

string ComputerScientist::getFirstName() {
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

void setFirstName(ComputerScientist& c) {
   cout << "Input first name: ";
   cin >> c.firstName;

}

void setLastName(ComputerScientist& c) {
    cout << "Input last name: ";
    cin >> c.lastName;
}

void setSex(ComputerScientist& c) {
    cout << "Input sex (female / male): " ;
    cin >> c.sex;
}

void setYearOfBirth(ComputerScientist& c) {
    cout << "Input year of birth: ";
    cin >> c.yearOfBirth;
}
void setYearOfDeath(ComputerScientist& c, char ch) {
    if (ch != 'y' && ch != 'Y') {
        cout << "Input year of death: ";
        cin >> c.yearOfDeath;
    }
}

char ComputerScientist::isAlive() {
    char answ = 'n';
    cout << "Is " << firstName << " still alive ? " << endl;
    cout << "y for yes: ";
    cin >> answ;

    return answ;
}

ostream& operator <<(ostream& outs, ComputerScientist& c) {
    outs << left << setw(16) << c.firstName << left << setw(16) << c.lastName << left << setw(16)<<
            c. sex << left << setw(16)<< c.yearOfBirth << left <<setw(15) << c.yearOfDeath << endl;
    return outs;
}

void ComputerScientist::fillVectorFromList(istream& ins, vector<ComputerScientist>& v){
    while(ins >> firstName >> lastName >> sex >> yearOfBirth >> yearOfDeath) {
        v.push_back(*this);
    }
}
