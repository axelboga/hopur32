#include "ComputerScientist.h"


ComputerScientist::ComputerScientist()
{
    name = "";
    sex = "";
    yearOfBirth = 0;
    yearOfDeath = 0;
}

string ComputerScientist::getName()
{
   return name;
}

string ComputerScientist::getSex()
{
    return sex;
}

int ComputerScientist::getYearOfBirth()
{
    return yearOfBirth;
}

int ComputerScientist::getYearOfDeath()
{   
    return yearOfDeath;
}

void setName(ComputerScientist& c) {
    cout << "Input name (first name, second name, last name): ";

    char ch;
    do {
        cin.get(ch);
    }
    while(ch != '\n');

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
