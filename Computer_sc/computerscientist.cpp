#include "ComputerScientist.h"


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
   cout << "Input name (first name, second name, last name): ";
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
