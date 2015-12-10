#include "computer.h"
#include <iostream>
using namespace std;

Computer::Computer(){
    id = 0;
    name = "";
    year = "-";
    type = "",
    wasBuilt = "";
}

int Computer::getId() const {
    return id;
}

void Computer::setId(int my_id) {
    id = my_id;
}

string Computer::getName() const {
    return name;
}

void Computer::setName(string my_name) {
    name = my_name;
}

string Computer::getYear() const {
    return year;
}

void Computer::setYear(string my_year) {
    year = my_year;
}

string Computer::getType() const {
    return type;
}

void Computer::setType(string my_type) {
    type = my_type;
}

string Computer::getWasBuilt() const {
    return wasBuilt;
}

void Computer::setWasBuilt(string my_wasBuilt) {
    wasBuilt = my_wasBuilt;
}

/*
ostream& operator <<(ostream& outs, Computer& c) { //how to output the object computerScientist
    string tempN = c.getName();
    tempN[0] = toupper(tempN[0]);
    outs << left << setw(11) << tempN << left << setw(15) << c.type << left << setw(9)
         << c.wasBuilt << left << setw(16)<< c.year << endl;
    return outs;
}
*/
