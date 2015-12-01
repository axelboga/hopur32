#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include "computerscientist.h"
using namespace std;

class repository {
public:
    repository();
    vector<ComputerScientist> getVector();
    void add(const ComputerScientist& c);
    void outputList(vector<ComputerScientist>& v);
    void removeScientist(int number);
    void fillVectorFromList(istream& ins, ComputerScientist& c);
private:
    vector<ComputerScientist> compSciVector;
};

#endif // REPOSITORY_H
