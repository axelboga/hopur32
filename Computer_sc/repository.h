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
    void outputList(vector<ComputerScientist>& v);
    void getVector(vector<ComputerScientist>& v);
};

#endif // REPOSITORY_H
