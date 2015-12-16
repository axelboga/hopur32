#include "scientist.h"

Scientist::Scientist() {
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
    transform(f_name.begin(), f_name.end(), f_name.begin(), ::tolower);
    firstName = f_name;
}

void Scientist::setLastName(string l_name) {
   transform(l_name.begin(), l_name.end(), l_name.begin(), ::tolower);
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
