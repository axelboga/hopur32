#include "repository.h"
#include <fstream>
#include <iomanip>

repository::repository()
{
    compSciVector = vector<ComputerScientist>();
    ifstream ins ("list6.txt");
    if (ins.is_open()){
        cout << "ja" << endl;
        ComputerScientist c;
        c.fillVectorFromList(ins, compSciVector); //eða ekki friend fall heldur nota getters ?
        ins.close();
    }
    else {
        cout << "no" << endl;
    }
}

void repository::getVector(vector<ComputerScientist>& v) {
    v = compSciVector;
}

void repository::add(ComputerScientist c){
    compSciVector.push_back(c); //add to the vector

    ofstream outs;   //also add to the list/file.
    outs.open("list6.txt", ios::app);
    if (outs.fail()) {
        cout << "failed" << endl;
    }
    outs << c;
    outs.close();
}

void repository::outputList(vector<ComputerScientist>& v) {
    cout << left << setw(15) << "First name" << left << setw(15) << "Last name"
             << left << setw(15) << "Gender" << left <<setw(15) << "Date of birth"
             << left <<setw(15) << "Date of death" << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    for (unsigned int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}
