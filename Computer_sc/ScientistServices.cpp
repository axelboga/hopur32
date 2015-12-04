#include "scientistservices.h"

const int CURRENT_YEAR = 2015;

ScientistServices::ScientistServices() {
    compSciRepo = ScientistRepository();
 }

void ScientistServices::add(ComputerScientist c) {
    compSciRepo.add(c);
}

bool ScientistServices::okToAdd(ComputerScientist& c) { //returns true if the object c is not equal to any other objects in the vector
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    for (unsigned int i = 0; i < v.size(); i++){
        if (v[i] == c){ //the operator == has bin overloaded
            return false;
        }
    }
    return true;
}

string ScientistServices::isAlive(ComputerScientist& c) {
    string answ = "no";
    do {
        string name = c.getFirstName();
        name[0] = toupper(name[0]);
        cout << "Is " << name << " still alive ? " << endl;
        cout << "yes/no : ";
        cin >> answ;
        transform(answ.begin(), answ.end(), answ.begin(), ::tolower);
        if (answ != "y" && answ != "ye" && answ != "yes" && answ != "n" && answ != "no"){
            cout << "Invalid input! Try again!" << endl;
        }
    }
    while(answ != "y" && answ != "ye" && answ != "yes" && answ != "n" && answ != "no");

    return answ;
}

bool ScientistServices::checkName(string s) {
    for (unsigned int i = 0; i < s.length(); i++){
        if (!isalpha(s[i])) {
            if (s[i] != ' ' && s[i] != '\''){
                return false;
            }
        }
    }
   return true;
}


bool ScientistServices::checkGender(string& s) {
    if(s == "m" || s  == "ma" || s  == "mal" || s  == "male"){
        s = "male";
        return true;
    }
    else if(s == "f" || s == "fe" || s == "fem" || s == "fema" || s == "femal" || s == "female"){
        s = "female";
        return true;
    }
    return false;
}

bool ScientistServices::checkBirth(string s) {//returns false if user inputs non-digits, wrong length or year greater than 2015
    int  year = atoi(s.c_str());

    for (unsigned int i = 0; i < s.length(); i++){
        if (!isdigit(s[i])){
            return false;
        }
        if(s.length() != 4){
            return false;
        }
        if(year > CURRENT_YEAR){
            return false;
        }
    }
   return true;
}

bool ScientistServices::checkDeath(string d, string b) {
    int yearOfDeath = atoi(d.c_str());
    int yearOfBirth = atoi(b.c_str());

    for (unsigned int i = 0; i < d.length(); i++){
        if (!isdigit(d[i])) {
            return false;
        }
        if(d.length() != 4){
            return false;
        }
        if(yearOfDeath > CURRENT_YEAR){
            return false;
        }
        if(yearOfBirth > yearOfDeath){
            return false;
        }
    }
   return true;
}

void ScientistServices::view(vector<ComputerScientist>& v) {
    compSciRepo.outputList(v);
}

void ScientistServices::view() {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    compSciRepo.outputList(v);
}

bool compareByName(ComputerScientist a, ComputerScientist b){
    return a.getName() < b.getName();
}

bool compareByLastName(ComputerScientist a, ComputerScientist b){
    return a.getLastName() < b.getLastName();
}

bool compareByReverseName(ComputerScientist a, ComputerScientist b){
    return a.getName() > b.getName();
}

bool compareByReverseLastName(ComputerScientist a, ComputerScientist b){
    return a.getLastName() > b.getLastName();
}

bool compareBySex(ComputerScientist a, ComputerScientist b){
    return a.getSex() < b.getSex();
}

bool compareByYear(ComputerScientist a, ComputerScientist b){
    return a.getYearOfBirth() < b.getYearOfBirth();
}

void ScientistServices::sortBySex(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareBySex);
}

void ScientistServices::sortByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByName);
}

void ScientistServices::sortByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByLastName);
}

void ScientistServices::sortReverseByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseName);
}

void ScientistServices::sortReverseByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseLastName);
}

void ScientistServices::sortByBirthYear(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByYear);
}

void ScientistServices::searching() {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    string input;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    header();
    unsigned int counter = 0;
    int tempCount = 1;
    for (unsigned int i = 0; i < v.size(); i++){
        if (input == v[i]){
            cout<< " " << left << setw(5)<< setfill(' ');
            cout << tempCount << v[i];
            tempCount++;
        }
        else{
            counter++;
        }
        if(counter >= v.size()){
            cout << endl;
            cout << "The search didn't match anything in the list!" << endl;
        }
    }
    footer();
}

void ScientistServices::header() {
    cout << " ______________________________________________________________________ " << endl;
    cout << " No.|Name                    | Gender | Date of Birth | Date of Death   " << endl;
    cout << " ___|________________________|________|_______________|________________ " << endl;
}

void ScientistServices::footer() {
    cout << " _____________________________________________________________________" << endl;
}

void ScientistServices::removeScientist() {
    unsigned int number;
    cout << "Input the number of the scientist you want to remove: ";
    do{
        cin >> number;
        if(number < 1 || number > compSciRepo.getVector().size()){
            cout << "invalid input, please pick a number that is in the list" << endl;
        }
    }while(number < 1 || number > compSciRepo.getVector().size());
        compSciRepo.removeScientist(number);
}
