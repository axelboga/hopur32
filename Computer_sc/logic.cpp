#include "logic.h"
#include <iostream>
#include <string>

const int CURRENT_YEAR = 2015;

logic::logic() {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist& c) {
    addFirstName(c);
    addLastName(c);
    addSex(c);
    addYearOfBirth(c);
    addYearOfDeath(c);
    if (okToAdd(c)){
        compSciRepo.add(c);
    }
    else{
        cout << "This Computer Scientist is already listed" << endl;
    }
}

bool logic::okToAdd(ComputerScientist& c) { //returns true if the object c is not equal to any other objects in the vector
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    for (unsigned int i = 0; i < v.size(); i++){
        if (v[i] == c){ //the operator == has bin overloaded
            return false;
        }
    }
    return true;
}

void logic::addFirstName(ComputerScientist& c) {
    string f_name;
    bool valid = false;
    while (!valid){
        cout << "Input first name: ";
        cin >> f_name;
        transform(f_name.begin(), f_name.end(), f_name.begin(), ::tolower);
        // ^ converts to lowercase
        f_name[0] = toupper(f_name[0]);
        // ^ converts first char to uppercase
        c.setFirstName(f_name);
        valid = checkName(c.getFirstName());
        if (!valid){
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }

}

void logic::addLastName(ComputerScientist& c) {
    string l_name;
    bool valid = false;
    while (!valid){
        cout << "Input last name: ";
        cin >> l_name;
        transform(l_name.begin(), l_name.end(), l_name.begin(), ::tolower);
        // ^ converts to lowercase
        l_name[0] = toupper(l_name[0]);
        // ^ converts first char to uppercase
        c.setLastName(l_name);
        valid = checkName(c.getLastName());
        if (!valid){
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addSex(ComputerScientist& c) {
    string gender;
    bool valid = false;
    while (!valid){
        cout << "Input gender(female / male): ";
        cin >> gender;
        transform(gender.begin(), gender.end(), gender.begin(), ::tolower);
        // ^ converts to lowercase
        c.setSex(gender);
        valid = checkSex(c.getSex());
        if (!valid){
            cout << "Sex must be either female or male." << endl;
            cout << "Please try again." << endl;
        }

    }
    if(c.getSex() == "m" || c.getSex() == "ma" || c.getSex() == "mal" || c.getSex() == "male")
    {
        gender = "male";
        c.setSex(gender);
    }
    else
    {
        gender = "female";
        c.setSex(gender);
    }
}

void logic::addYearOfBirth(ComputerScientist& c) {
    string b_year;
    bool valid = false;
    while (!valid){
        cout << "Input year of birth: ";
        cin >> b_year;
        c.setYearOfBirth(b_year);
        valid = checkBirth(c.getYearOfBirth());
        if (!valid){
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
        }
    }
}

void logic::addYearOfDeath(ComputerScientist& c) {
    string d_year;
    bool valid = false;
    string answ = isAlive(c);
    transform(answ.begin(), answ.end(), answ.begin(), ::tolower);
    // ^ converts to lowercase
    if (answ != "y" && answ != "ye" && answ != "yes"){
        while (!valid){
            cout << "Input year of death: ";
            cin >> d_year;
            c.setYearOfDeath(d_year);
            valid = checkDeath(c.getYearOfDeath(), c.getYearOfBirth());
            if (!valid){
                cout << "Invalid year!" << endl;
                cout << "Please try again." << endl;
            }
        }
    }
}

string logic::isAlive(ComputerScientist& c) {
    string answ = "no";
    do {
        cout << "Is " << c.getFirstName() << " still alive ? " << endl;
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

bool logic::checkBirth(string s) {//returns false if user inputs non-digits, wrong length or year greater than 2015
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

bool logic::checkDeath(string d, string b) {
    int yearOfDeath = atoi(d.c_str());
    int yearOfBirth = atoi(b.c_str());

    for (unsigned int i = 0; i < d.length(); i++){
        if (!isdigit(d[i])) {
            return false;
        }
        if(d.length() != 4){
            return false;
        }
        if(yearOfDeath > 2015){
            return false;
        }
        if(yearOfBirth > yearOfDeath){
            return false;
        }
    }
   return true;
}

bool logic::checkName(string s) {
    for (unsigned int i = 0; i < s.length(); i++){
        if (!isalpha(s[i])) {
            if (s[i] != ' ' && s[i] != '\''){
                return false;
            }
        }
    }
   return true;
}

bool logic::checkSex(string s) {

    if(islower(s != "male" && s != "female")){
        return false;
    }
    return true;

}

void logic::view(vector<ComputerScientist>& v) {
    compSciRepo.outputList(v);
}

void logic::view() {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    compSciRepo.outputList(v);
}

bool compareByFirstName(ComputerScientist a, ComputerScientist b){
    return a.getFirstName() < b.getFirstName();
}

bool compareByLastName(ComputerScientist a, ComputerScientist b)
{
    return a.getLastName() < b.getLastName();
}

bool compareByReverseFirstName(ComputerScientist a, ComputerScientist b){
    return a.getFirstName() > b.getFirstName();
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

void logic::sortBySex(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareBySex);
}

void logic::sortByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByFirstName);
}

void logic::sortByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByLastName);
}

void logic::sortReverseByFirstName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseFirstName);
}

void logic::sortReverseByLastName(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByReverseLastName);
}

void logic::sortByBirthYear(vector<ComputerScientist>& v) {
    v = compSciRepo.getVector();
    sort(v.begin(), v.end(), compareByYear);
}

void logic::searching() {
    vector<ComputerScientist> v;
    v = compSciRepo.getVector();
    string input;
    cin >> input;
    //transform(input.begin(), input.end(), input.begin(), ::tolower);
    header();
    int p = 1;
    int counter = 0;
    for (unsigned int i = 0; i < v.size(); i++){
        if (input == v[i]){  //== is overloaded for string and object
            cout << p << ". " << v[i];
        }
        else {
            counter++;
        }
    }
    footer();
    if (counter >= 5) {
         cout << "The search didn't match anything in the list!" << endl;
    }
}
void logic::header()
{
    cout << " ________________________________________________________________________________" << endl;
    cout << "  First name\t Last name \t Gender\t\t Date of Birth\t Date of Death\t" << endl;
    cout << " ________________________________________________________________________________" << endl;

}
void logic::footer()
{
    cout << " ________________________________________________________________________________" << endl;

}

void logic::removeScientist() {
    int number;
    cout << "Input the number of the scientist you want to erase: ";
    cin >> number;
    compSciRepo.removeScientist(number);
}
