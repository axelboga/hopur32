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
    int getYearOfBirth();
    int getYearOfDeath();
    friend void setName(ComputerScientist& c);
    friend void setSex(ComputerScientist& c);
    friend void setYearOfBirth(ComputerScientist& c);
    friend void setYearOfDeath(ComputerScientist& c);
private:
    string name;
    int yearOfBirth;
    int yearOfDeath;
    string sex;
};

#endif // COMPUTERSCIENTIST_H
