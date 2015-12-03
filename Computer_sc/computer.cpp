#include "computer.h"

Computer::Computer(){
    id = 0;
    name = "";
    year = "";
    type = "",
    wasBuilt = false;
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

bool Computer::getWasBuilt() const {
    return wasBuilt;
}

void Computer::setWasBuilt(string my_wasBuilt) {
    if (my_wasBuilt == "yes") {
        wasBuilt = true;
    }
    wasBuilt = false;
}
