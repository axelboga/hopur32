#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
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
    bool getWasBuilt() const;
    void setWasBuilt(string my_wasBuilt);

private:
    int id;
    string name;
    string year;
    string type;
    bool wasBuilt;
};

#endif // COMPUTER_H
