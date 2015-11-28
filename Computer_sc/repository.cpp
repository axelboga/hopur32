#include "repository.h"

repository::repository()
{
    compSciVector = vector<ComputerScientist>();

}

void repository::add(ComputerScientist c){ //add to list
    compSciVector.push_back(c);
}

void fillVectorFromList(){

}
