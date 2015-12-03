#include "computer.h"

Computer::Computer(){

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
