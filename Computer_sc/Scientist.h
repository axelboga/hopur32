#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Scientist {
public:
    Scientist();
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
    friend ostream& operator << (ostream& outs, Scientist& c);
    friend ostream& readToFile(ostream& outs, Scientist& c);
    friend bool operator == (Scientist& c1, Scientist& c2);
    friend bool operator == (string s, Scientist& c);
    void fillVectorFromList(istream& ins, vector<Scientist>& v);
    bool compareByName(Scientist a, Scientist b);
    bool compareByLastName(Scientist a, Scientist b);
    bool compareByReverseName(Scientist a, Scientist b);
    bool compareByReverseLastName(Scientist a, Scientist b);
    bool compareBySex(Scientist a, Scientist b);
    bool compareByYear(Scientist a, Scientist b);
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
