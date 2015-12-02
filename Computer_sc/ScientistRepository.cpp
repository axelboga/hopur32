#include "ScientistRepository.h"
#include <fstream>
#include <algorithm>

ScientistRepository::ScientistRepository() {
    compSciVector = vector<ComputerScientist>();
    ifstream ins ("list.txt");
    if (ins.is_open()){
        ComputerScientist c;
        c.fillVectorFromList(ins, compSciVector);
        ins.close();
    }
}

vector<ComputerScientist> ScientistRepository::getVector(){
    return compSciVector;
}

void ScientistRepository::add(const ComputerScientist& c){
    ComputerScientist temp = c;
    compSciVector.push_back(temp); //add to the vector

    ofstream outs;   //also add to the list/file.
    outs.open("list.txt", ios::app);
    if (outs.fail()){
        cout << "failed" << endl;
    }
    readToFile(outs, temp);
    outs.close();
}


void ScientistRepository::outputList(vector<ComputerScientist>& v) {
    cout << " _____________________________________________________________________ " << endl;
    cout << " No.| Name                    | Gender | Date of Birth | Date of Death   " << endl;
    cout << " ___|_________________________|________|_______________|______________ " << endl;
    for (unsigned int i = 0; i < v.size(); i++){
        cout<< " " << left << setw(5)<< setfill(' ');
        cout << i+1 << v[i];
    }
    cout << " _____________________________________________________________________" << endl;
}

void ScientistRepository::removeScientist(int number) {
    ComputerScientist c = compSciVector[number - 1]; //get name of the scientist to be deleted
    string name = c.getFirstName();
    name[0] = toupper(name[0]);

    compSciVector.erase(compSciVector.begin() + (number - 1));  //remove from vector

    ofstream outs("list.txt", ios::out);
    outs.close();
    ofstream out;   //also add to the list/file.
    out.open("list.txt", ios::app);
    if (out.fail()){
        cout << "failed" << endl;
    }
    for(unsigned int i = 0; i != compSciVector.size(); i++) {
        ComputerScientist temp = compSciVector[i];
        //also add to the list/file.
        readToFile(out, temp);
    }
    out.close();

    cout << "The scientist " << name << " has been removed from the list" << endl;
}
