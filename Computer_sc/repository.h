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
    void add(const ComputerScientist& c);
    void outputList(vector<ComputerScientist>& v);
    void removeScientist(int number);
};

#endif // REPOSITORY_H
