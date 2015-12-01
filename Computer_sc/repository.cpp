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

void repository::add(const ComputerScientist& c) {
    ComputerScientist temp = c;
    compSciVector.push_back(temp); //add to the vector

    ofstream outs;   //also add to the list/file.
    outs.open("list6.txt", ios::app);
    if (outs.fail()){
        cout << "failed" << endl;
    }
    outs << temp;
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

void repository::removeScientist(int number) {
    ComputerScientist c = compSciVector[number - 1]; //get name of the scientist to be deleted
    string name = c.getFirstName()+" "+c.getLastName();

    compSciVector.erase(compSciVector.begin() + (number - 1));  //remove from Vector
    ofstream outs("list6.txt", ios::out);

    for(int i = 0; i != compSciVector.size(); i++) {    //remove from list
        outs << compSciVector[i] << endl;
    }
    outs.close();


    cout << "The scientist " << name << " has been removed from the list" << endl;
}

