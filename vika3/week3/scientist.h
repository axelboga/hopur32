#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <vector>
#include <iomanip>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Scientist {
public:
    Scientist();
    int getId() const;
    string getFirstName() const;
    string getLastName() const;
    string getSex() const;
    string getYearOfBirth() const;
    string getYearOfDeath() const;
    void setId(int my_id);
    void setFirstName(string f_name);
    void setLastName(string l_name);
    void setSex(string gender);
    void setYearOfBirth(string b_year);
    void setYearOfDeath(string d_year);
    friend ostream& operator << (ostream& outs, Scientist& c);
    void fillVectorFromList(istream& ins, vector<Scientist>& v);
private:
    int id;
    string firstName;
    string lastName;
    string name;
    string yearOfBirth;
    string yearOfDeath;
    string sex;
};

#endif // COMPUTERSCIENTIST_H
