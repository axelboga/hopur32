#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H
#include <iostream>
#include <string>
using namespace std;

class ComputerScientist
{
public:
    ComputerScientist();
    string getName();
    string getSex();
    string getYearOfBirth();
    string getYearOfDeath();
    friend void setName(ComputerScientist& c);
    friend void setSex(ComputerScientist& c);
    friend void setYearOfBirth(ComputerScientist& c);
    friend void setYearOfDeath(ComputerScientist& c);
    friend ostream& operator <<(ostream& outs, ComputerScientist& c);
private:
    string name;
    string yearOfBirth;
    string yearOfDeath;
    string sex;
};

#endif // COMPUTERSCIENTIST_H
