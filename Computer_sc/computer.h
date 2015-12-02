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
private:
    int id;
    string name;
    string year;
};

#endif // COMPUTER_H
