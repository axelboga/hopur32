#include "scientist.h"

Scientist::Scientist(){
    firstName = "";
    lastName = "";
    sex = "";
    yearOfBirth = "";
    yearOfDeath = "-";
}

int Scientist::getId() const {
    return id;
}

string Scientist::getFirstName() const {

   string capitalized = firstName;
   capitalized[0] = toupper(capitalized[0]);
   return capitalized;
}

string Scientist::getLastName() const {
    string capitalized = lastName;
    capitalized[0] = toupper(capitalized[0]);
    return capitalized;
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

void Scientist::setSex(string gender) {
    sex = gender;
}

void Scientist::setYearOfBirth(string b_year) {
    yearOfBirth = b_year;
}

void Scientist::setYearOfDeath(string d_year) {
    yearOfDeath = d_year;
}
/*
ostream& operator <<(ostream& outs, Scientist& c) { //how to output the object computerScientist
    string tempF = c.getFirstName();
    tempF[0] = toupper(tempF[0]);
    string tempL = c.getLastName();
    tempL[0] = toupper(tempL[0]);
    outs << left << setw(11) << tempF << left << setw(15) << tempL << left << setw(9)
         << c.sex << left << setw(16)<< c.yearOfBirth << left <<setw(4) << c.yearOfDeath << endl;
    return outs;
}
*/
