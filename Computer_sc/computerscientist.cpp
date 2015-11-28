#include "computerscientist.h"
#include <iomanip>

ComputerScientist::ComputerScientist()
{
    name = "";
    sex = "";
    yearOfBirth = "";
    yearOfDeath = "";
}

string ComputerScientist::getName()
{
   return name;
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
   cout << "Input name (first name, middle name, surname): ";
   cin.ignore();
   getline(cin, c.name);
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
    cout << "Is " << c.name << " still alive ? " << endl;
    cout << "y for yes: ";
    cin >> answ;
    if (answ != 'y' && answ != 'Y') {
        cout << "Input year of death: ";
        cin >> c.yearOfDeath;
    }
}

ostream& operator <<(ostream& outs, ComputerScientist& c) {
    outs << left << setw(15) << c.name << left << setw(8) << c.sex <<
            right << setw(8) << c.yearOfBirth << setw(10) << c.yearOfDeath << endl;
    return outs;
}
