#include "logic.h"

logic::logic()
 {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist c)
{
    compSciRepo.add(c);
}

bool logic::isValid(string s) {
    for (unsigned int i = 0; i < s.length(); i++){
        if (!isalpha(s[i])) {
            if (s[i] != ' ') {
                return false;
            }
        }
    }
   return true;
}
