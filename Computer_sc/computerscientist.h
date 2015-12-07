#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class ComputerScientist {
public:
    ComputerScientist();
    int getId() const;
    string getFirstName() const;
    string getLastName() const;
    string getName() const;
    string getSex() const;
    string getYearOfBirth() const;
    string getYearOfDeath() const;
    void setId(int my_id);
    void setFirstName(string f_name);
    void setLastName(string l_name);
    void setName();
    void setSex(string gender);
    void setYearOfBirth(string b_year);
    void setYearOfDeath(string d_year);
    friend ostream& operator << (ostream& outs, ComputerScientist& c);
    friend ostream& readToFile(ostream& outs, ComputerScientist& c);
    friend bool operator == (ComputerScientist& c1, ComputerScientist& c2);
    friend bool operator == (string s, ComputerScientist& c);
    void fillVectorFromList(istream& ins, vector<ComputerScientist>& v);
    bool compareByName(ComputerScientist a, ComputerScientist b);
    bool compareByLastName(ComputerScientist a, ComputerScientist b);
    bool compareByReverseName(ComputerScientist a, ComputerScientist b);
    bool compareByReverseLastName(ComputerScientist a, ComputerScientist b);
    bool compareBySex(ComputerScientist a, ComputerScientist b);
    bool compareByYear(ComputerScientist a, ComputerScientist b);
private:
    int id;
    string firstName;
    string lastName;
    string name;
    string yearOfBirth;
    string yearOfDeath;
    string sex;
    bool found (string a, string b);
};

#endif // COMPUTERSCIENTIST_H
