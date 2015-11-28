#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include "computerscientist.h"
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
