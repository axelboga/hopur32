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
    string getFirstName() const;
    string getLastName();
    string getSex();
    string getYearOfBirth();
    string getYearOfDeath();
    friend void setFirstName(ComputerScientist& c);
    friend void setLastName(ComputerScientist& c);
    friend void setSex(ComputerScientist& c);
    friend void setYearOfBirth(ComputerScientist& c);
    friend void setYearOfDeath(ComputerScientist& c);
    string isAlive();
    friend ostream& operator << (ostream& outs, ComputerScientist& c);
    friend bool operator == (ComputerScientist& c1, ComputerScientist& c2);
    friend bool operator == (string s, ComputerScientist& c);
    void fillVectorFromList(istream& ins, vector<ComputerScientist>& v);
    bool found (string a, string b);
private:
    string firstName;
    string lastName;
    string yearOfBirth;
    string yearOfDeath;
    string sex;
};

#endif // COMPUTERSCIENTIST_H
