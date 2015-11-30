#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include "computerscientist.h"
using namespace std;

class repository {
private:
    vector<ComputerScientist> compSciVector;
public:
    repository();
    vector<ComputerScientist> getVector();
    void add(ComputerScientist c);
    void outputList(vector<ComputerScientist>& v);
    void eraseFromVector();
};

#endif // REPOSITORY_H
