#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include "ComputerScientist.h"
using namespace std;

class repository
{
private:
    vector<ComputerScientist> compSciVector;
public:
    repository();
    void add(ComputerScientist c);
};

#endif // REPOSITORY_H
