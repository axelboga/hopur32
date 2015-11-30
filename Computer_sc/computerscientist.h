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
<<<<<<< HEAD
    friend void setFirstName(ComputerScientist& c);
    void setLastName(string l_name);
=======
    void setFirstName(string f_name);
    friend void setLastName(ComputerScientist& c);
>>>>>>> 46cd5ec5bf988a13756d3959e62303199a472555
    void setSex(string gender);
    void setYearOfBirth(string b_year);
    void setYearOfDeath(string d_year);
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
