#ifndef LOGIC_H
#define LOGIC_H

#include "computerscientist.h"
#include "repository.h"
#include <ctype.h>

class logic
{
private:
    repository compSciRepo;
public:
    logic();
    void add(ComputerScientist& c);
<<<<<<< HEAD
    void addName(ComputerScientist& c);
    void addSex(ComputerScientist& c);
=======
    void addFirstName(ComputerScientist& c);
    void addLastName(ComputerScientist& c);
>>>>>>> 7327be1963dc897d92309c0136c9def24b41c092
    void view();
    bool checkName(string s);
    bool checkSex(string s);
    bool checkBirth(string s);

};

#endif // LOGIC_H
