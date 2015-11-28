#include "logic.h"
#include <stdlib.h>
logic::logic()
 {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist& c)
{
    cout << endl;
    bool valid = false;
    while (!valid){
        setName(c);
        valid = checkName(c.getName());
        if (!valid) {
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
    valid = false;
    while (!valid){
        setSex(c);
        valid = checkSex(c.getSex());
        if (!valid) {
            cout << "Sex must be either female or male." << endl;
            cout << "Please try again." << endl;
        }
    }

    setYearOfBirth(c); //Þarf að tjékka hvort árið sé löglegt
    setYearOfDeath(c); //Það þarf tjékka hvort Death komi á eftir Birth
                       //Mjög erfitt að gera með strings. Breyta í int?

    compSciRepo.add(c);
}

bool logic::checkName(string s) {
    for (unsigned int i = 0; i < s.length(); i++){
        if (!isalpha(s[i])) {
            if (s[i] != ' ' && s[i] != '\'') {
                return false;
            }
        }
    }
   return true;
}
bool logic::checkSex(string s) {

    if(s != "male" && s != "female")
    {
        return false;
    }

    return true;

}
