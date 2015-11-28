#include "logic.h"

logic::logic()
 {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist& c)
{
    bool valid = false;
    while (!valid){
        setName(c);
        valid = isValid(c.getName());
        if (!valid) {
            cout << "Invalid input!" << endl;
        }
    }
    setSex(c);
    setYearOfBirth(c);
    setYearOfDeath(c);
    compSciRepo.add(c);
}

bool logic::isValid(string s) {
    for (unsigned int i = 0; i < s.length(); i++){
        if (!isalpha(s[i])) {
            if (s[i] != ' ' && s[i] != '\'') {
                return false;
            }
        }
    }
   return true;
}
