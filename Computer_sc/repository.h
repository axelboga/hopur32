#ifndef REPOSITORY_H
#define REPOSITORY_H
#include "computerscientist.h"

class repository {
public:
    repository();
    vector<ComputerScientist> getVector();
    void add(const ComputerScientist& c);
    void outputList(vector<ComputerScientist>& v);
    void removeScientist(int number);
    void fillVectorFromList(istream& ins, ComputerScientist& c);
    void headerAndSpaces(vector<ComputerScientist>& v);
private:
    vector<ComputerScientist> compSciVector;
};

#endif // REPOSITORY_H
