#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ComputerScientist {
public:
    ComputerScientist();
    string getFirstName() const;
    string getLastName() const;
    string getSex() const;
    string getYearOfBirth() const;
    string getYearOfDeath() const;
    void setFirstName(string f_name);
    void setLastName(string l_name);
    void setSex(string gender);
    void setYearOfBirth(string b_year);
    void setYearOfDeath(string d_year);
    friend ostream& operator << (ostream& outs, ComputerScientist& c);
    friend bool operator == (ComputerScientist& c1, ComputerScientist& c2);
    friend bool operator == (string s, ComputerScientist& c);
    void fillVectorFromList(istream& ins, vector<ComputerScientist>& v);
    bool found (string a, string b);
    bool compareByFirstName(ComputerScientist a, ComputerScientist b);
    bool compareByLastName(ComputerScientist a, ComputerScientist b);
    bool compareByReverseFirstName(ComputerScientist a, ComputerScientist b);
    bool compareByReverseLastName(ComputerScientist a, ComputerScientist b);
    bool compareBySex(ComputerScientist a, ComputerScientist b);
    bool compareByYear(ComputerScientist a, ComputerScientist b);

private:
    string firstName;
    string lastName;
    string yearOfBirth;
    string yearOfDeath;
    string sex;
};

#endif // COMPUTERSCIENTIST_H
