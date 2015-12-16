#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include <iomanip>
using namespace std;

class Computer {

public:
    Computer();
    int getId() const;
    void setId(int my_id);
    string getName() const;
    void setName(string my_name);
    string getYear() const;
    void setYear(string my_year);
    string getType() const;
    void setType(string my_type);
    string getWasBuilt() const;
    void setWasBuilt(string my_wasBuilt);

private:
    int id;
    string name;
    string type;
    string wasBuilt;
    string year;
};

#endif // COMPUTER_H
