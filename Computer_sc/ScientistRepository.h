#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H
#include "computerscientist.h"

class ScientistRepository {
public:
    ScientistRepository();
    vector<ComputerScientist> getVector();
    void add(const ComputerScientist& c);
    void outputList(vector<ComputerScientist>& v);
    void removeScientist(int number);
    void fillVectorFromList(istream& ins, ComputerScientist& c);
private:
    vector<ComputerScientist> compSciVector;
};

#endif // REPOSITORY_H
