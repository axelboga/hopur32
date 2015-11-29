#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ComputerScientist
{
public:
    ComputerScientist();
    string getFirstName();
    string getLastName();
    string getSex();
    string getYearOfBirth();
    string getYearOfDeath();
    friend void setFirstName(ComputerScientist& c);
    friend void setLastName(ComputerScientist& c);
    friend void setSex(ComputerScientist& c);
    friend void setYearOfBirth(ComputerScientist& c);
    friend void setYearOfDeath(ComputerScientist& c, char ch);
    char isAlive();
    friend ostream& operator <<(ostream& outs, ComputerScientist& c);
    void fillVectorFromList(istream& ins, vector<ComputerScientist>& v);
private:
    string firstName;
    string lastName;
    string yearOfBirth;
    string yearOfDeath;
    string sex;
};

#endif // COMPUTERSCIENTIST_H
