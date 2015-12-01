#include "repository.h"
#include <fstream>
#include <iomanip>
#include <algorithm>

repository::repository() {
    compSciVector = vector<ComputerScientist>();
    ifstream ins ("list9.txt");
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
    outs.open("list9.txt", ios::app);
    if (outs.fail()){
        cout << "failed" << endl;
    }
    outs << temp;
    outs.close();
}

void repository::outputList(vector<ComputerScientist>& v) {
    cout << " ________________________________________________________________________________" << endl;
    cout << "  name\t Gender\t\t Date of Birth\t Date of Death\t" << endl;
    cout << " ________________________________________________________________________________" << endl;
    int space = 3;
    for (unsigned int i = 0; i < v.size(); i++){

            if(i >= 9) //aligns the spacing between the number and first name
            {
                space = 2;
            }
            else if(i >= 99)
            {
                space = 1;
            }


        cout << i+1 << setw(space) << "."<< v[i];
    }

    cout << " ________________________________________________________________________________" << endl;
}

void repository::removeScientist(int number) {
    ComputerScientist c = compSciVector[number - 1]; //get name of the scientist to be deleted
    string name = c.getName();

    compSciVector.erase(compSciVector.begin() + (number - 1));  //remove from Vector
    ofstream outs("list9.txt", ios::out);

    for(unsigned int i = 0; i != compSciVector.size(); i++) {    //remove from list
        outs << compSciVector[i] << endl;
    }
    outs.close();


    cout << "The scientist " << name << " has been removed from the list" << endl;
}

