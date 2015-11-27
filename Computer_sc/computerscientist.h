#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H

#include <string>
using namespace std;

class ComputerScientist
{
public:
    ComputerScientist();
    string getName();
    string sex();
    int getYearOfBirth();
    int getYearOfDeath();
private:
    string name;
    int yearOfBirth;
    int yearOfDeath;
    string sex;
};

#endif // COMPUTERSCIENTIST_H
