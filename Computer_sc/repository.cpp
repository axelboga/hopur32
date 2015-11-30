#include "repository.h"
#include <fstream>
#include <iomanip>
#include <algorithm>

repository::repository() {
    compSciVector = vector<ComputerScientist>();
    ifstream ins ("list6.txt");
    if (ins.is_open()){
        ComputerScientist c;
        c.fillVectorFromList(ins, compSciVector); //eða ekki friend fall heldur nota getters ?
        ins.close();
    }
}

vector<ComputerScientist> repository::getVector() {
    return compSciVector;
}

void repository::add(ComputerScientist c) {
    compSciVector.push_back(c); //add to the vector

    ofstream outs;   //also add to the list/file.
    outs.open("list6.txt", ios::app);
    if (outs.fail()){
        cout << "failed" << endl;
    }
    outs << c;
    outs.close();
}

void repository::outputList(vector<ComputerScientist>& v) {
    cout << " ________________________________________________________________________________" << endl;
    cout << "  First name\t Last name \t Gender\t\t Date of Birth\t Date of Death\t" << endl;
    cout << " ________________________________________________________________________________" << endl;

    for (unsigned int i = 0; i < v.size(); i++){
        cout << i+1 << ". "<< v[i] << endl;
    }

    cout << " ________________________________________________________________________________" << endl;
}

void repository::eraseFromVector(int number) {
    compSciVector.erase(compSciVector.begin() + (number - 1));
    cout << "The scientist number " << number << " has been erased from the list" << endl;
}
