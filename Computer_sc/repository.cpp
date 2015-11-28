#include "repository.h"
#include <fstream>

repository::repository()
{
    compSciVector = vector<ComputerScientist>();

}

void repository::add(ComputerScientist c){ //add to list
    compSciVector.push_back(c); //add to the vector

    ofstream outs;   //also add to the list/file.
    outs.open("list.txt", ios::app);
    if (outs.fail()) {
        cout << "failed" << endl;
    }
    outs << c;
    outs.close();
}

void fillVectorFromList(){

}
