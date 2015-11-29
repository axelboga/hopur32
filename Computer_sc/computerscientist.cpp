#include "computerscientist.h"
#include <iomanip>

ComputerScientist::ComputerScientist()
{
    firstName = "";
    lastName = "";
    sex = "";
    yearOfBirth = "";
    yearOfDeath = "na";
}

string ComputerScientist::getfirstName()
{
   return firstName;
}

string ComputerScientist::getlastName()
{
   return lastName;
}

string ComputerScientist::getSex()
{
    return sex;
}

string ComputerScientist::getYearOfBirth()
{
    return yearOfBirth;
}

string ComputerScientist::getYearOfDeath()
{   
    return yearOfDeath;
}

void setName(ComputerScientist& c) {
   cout << "Input first name: ";
   cin >> c.firstName;
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
void setYearOfDeath(ComputerScientist& c){
    char answ = 'n';
    cout << "Is " << c.firstName << " still alive ? " << endl;
    cout << "y for yes: ";
    cin >> answ;
    if (answ != 'y' && answ != 'Y') {
        cout << "Input year of death: ";
        cin >> c.yearOfDeath;
    }
}

ostream& operator <<(ostream& outs, ComputerScientist& c) {
    outs << left << setw(15) << c.firstName << left << setw(15) << c.lastName << left << setw(15)<<
            c. sex << right << setw(13)<< c.yearOfBirth << right <<setw(15) << c.yearOfDeath << endl;
    return outs;
}

void ComputerScientist::fillVectorFromList(istream& ins, vector<ComputerScientist>& v){
    while(ins >> firstName >> lastName >> sex >> yearOfBirth >> yearOfDeath) {
        v.push_back(*this);
    }
}
