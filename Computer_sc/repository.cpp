#include "repository.h"

repository::repository()
{
    compSciVector = vector<ComputerScientist>();
}

void repository::add(ComputerScientist c){
    compSciVector.push_back(c);
}
