#include "repository.h"
#include <fstream>
#include <algorithm>

repository::repository() {
    compSciVector = vector<ComputerScientist>();
    ifstream ins ("list.txt");
    if (ins.is_open()){
        ComputerScientist c;
        c.fillVectorFromList(ins, compSciVector);
        ins.close();
    }
}

vector<ComputerScientist> repository::getVector(){
    return compSciVector;
}

void repository::add(const ComputerScientist& c){
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

void repository::outputList(vector<ComputerScientist>& v) {
    cout << " __________________________________________________________________ " << endl;
    cout << " Name                    | Gender | Date of Birth | Date of Death   " << endl;
    cout << " ________________________|________|_______________|________________ " << endl;
    int space = 3;
    for (unsigned int i = 0; i < v.size(); i++){

            if(i >= 9) { //aligns the spacing between the number and first name
                space = 2;
            }
            else if(i >= 99) {
                space = 1;
            }

        cout << i+1 << setw(space) << "." << v[i];
    }
    cout << " __________________________________________________________________" << endl;
}

void repository::removeScientist(int number) {
    ComputerScientist c = compSciVector[number - 1]; //get name of the scientist to be deleted
    string name = c.getFirstName();
    name[0] = toupper(name[0]);

    compSciVector.erase(compSciVector.begin() + (number - 1));  //remove from vector
    ofstream outs("list.txt", ios::out);

    for(unsigned int i = 0; i != compSciVector.size(); i++) {    //remove from list
        outs << compSciVector[i] << endl;
    }
    outs.close();

    cout << "The scientist " << name << " has been removed from the list" << endl;
}
