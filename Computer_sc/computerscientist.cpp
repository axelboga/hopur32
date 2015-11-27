#include "ComputerScientist.h"


ComputerScientist::ComputerScientist()
{
    name = "";
    sex = "";
    yearOfBirth = 0;
    yearOfDeath = 0;
}

string ComputerScientist::getName()
{
   return name;
}

string ComputerScientist::getSex()
{
    return sex;
}

int ComputerScientist::getYearOfBirth()
{
    return yearOfBirth;
}

int ComputerScientist::getYearOfDeath()
{   
    return yearOfDeath;
}
