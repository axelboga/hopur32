#include "ui.h"
#include <stdlib.h>
using namespace std;

UI::UI() {
    sciServices = ScientistServices();
    compServices = ComputerServices();
}

void UI::start() {

    do {

        clearScreen();
        char input;
        mainMenu();
        cin >> input;
        cout << endl;

        clearScreen();

        if (input == '1'){
            //ComputerScientist c = ComputerScientist();
            //CompSciServices.add(c);
            Computer c;
            compServices.add(c);

       }
        else if(input == '2')
        {
            computerLoop();
           //cout << "Sorry!" << endl;
           //cout << "Feature not ready!" << endl;
        }
        else if(input == '3')
        {
            cout << "Sorry!" << endl;
            cout << "Feature not ready!" << endl;
        }
        else if(input == '4')
        {
            cout << "Terminating Program" << endl;
            cout << "Goodbye." << endl;
            exit(1);
        }
        else
        {
            cout << "Invalid input!" << endl;
            cout << "Please try again." << endl;
        }

    }while(true);

}
void UI::banner(){

    cout << " .d8888b.                                           888                       " << endl;
    cout << "d88P  Y88b                                          888                       " << endl;
    cout << "888    888                                          888                       " << endl;
    cout << "888         .d88b.  88888b.d88b.  88888b.  888  888 888888 .d88b.  888d888    " << endl;
    cout << "888        d88\"\"88b 888 \"888 \"88b 888 \"88b 888  888 888   d8P  Y8b 888P\"      " << endl;
    cout << "888    888 888  888 888  888  888 888  888 888  888 888   88888888 888        " << endl;
    cout << "Y88b  d88P Y88..88P 888  888  888 888 d88P Y88b 888 Y88b. Y8b.     888        " << endl;
    cout << " \"Y8888P\"   \"Y88P\"  888  888  888 88888P\"   \"Y88888  \"Y888 \"Y8888  888        " << endl;
    cout << "                                  888                                         " << endl;
    cout << "                                  888                                         " << endl;
    cout << "                                  888                                         " << endl;
    cout << " .d8888b.           d8b                   888    d8b          888             " << endl;
    cout << "d88P  Y88b          Y8P                   888    Y8P          888             " << endl;
    cout << "Y88b.                                     888                 888             " << endl;
    cout << " \"Y888b.    .d8888b 888  .d88b.  88888b.  888888 888 .d8888b  888888 .d8888b  " << endl;
    cout << "    \"Y88b. d88P\"    888 d8P  Y8b 888 \"88b 888    888 88K      888    88K      " << endl;
    cout << "      \"888 888      888 88888888 888  888 888    888 \"Y8888b. 888    \"Y8888b. " << endl;
    cout << "Y88b  d88P Y88b.    888 Y8b.     888  888 Y88b.  888      X88 Y88b.       X88 " << endl;
    cout << " \"Y8888P\"   \"Y8888P 888  \"Y8888  888  888  \"Y888 888  88888P'  \"Y888  88888P' " << endl;
    cout << endl << endl << endl << endl;
}

void UI::scientistSortUI() {

    cout << "Sort list by:" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << " 1\t" << "First Name (a-z)" << endl;
    cout << " 2\t" << "First Name (z-a)" << endl;
    cout << " 3\t" << "Last Name (a-z)" << endl;
    cout << " 4\t" << "Last Name (z-a)" << endl;
    cout << " 5\t" << "Gender" << endl;
    cout << " 6\t" << "Year of Birth" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}

void UI::scientistMenu() {
    cout << " _____________________________________________________________________" << endl;
    cout << " 1\t" << "Add Scientist" << endl;
    cout << " 2\t" << "Remove Scientist" << endl;
    cout << " 3\t" << "View Scientists" << endl;
    cout << " 4\t" << "Search for Scientists" << endl;
    cout << " 5\t" << "Back" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}
void UI::clearScreen()
{
   if (system("CLS")) system("clear");
}
void UI::computerSortUI() {

    cout << "Sort list by:" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << " 1\t" << "Name of Computer (a-z)" << endl;
    cout << " 2\t" << "Name of Computer (z-a)" << endl;
    cout << " 3\t" << "Year built" << endl;
    cout << " 4\t" << "Computer Type" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}

void UI::computerMenu() {
    cout << " _____________________________________________________________________" << endl;
    cout << " 1\t" << "Add Computer" << endl;
    cout << " 2\t" << "Remove Computer" << endl;
    cout << " 3\t" << "View Computer" << endl;
    cout << " 4\t" << "Search for Computer" << endl;
    cout << " 5\t" << "Exit" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}
void UI::mainMenu(){
    banner();
    cout << "Welcome to the Computers & Scientists Program." << endl;
    cout << "Which database would you like to visit?" << endl;

    cout << " _____________________________________________________________________" << endl;
    cout << " 1\t" << "Scientists" << endl;
    cout << " 2\t" << "Computers" << endl;
    cout << " 3\t" << "View Connections" << endl;
    cout << " 4\t" << "Exit" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}
void UI::scientistLoop(){
    do {
        char input;
        scientistMenu();
        cin >> input;
        cout << endl;
        clearScreen();

        if (input == '1'){
            ComputerScientist c = ComputerScientist();
            sciServices.add(c);

        }
        else if(input == '2'){
            sciServices.view();
            sciServices.removeScientist();
        }
        else if(input == '3'){
            vector<ComputerScientist> v;
            char ch;
            cout << endl;
            do {
                scientistSortUI();
                cin >> ch;
                clearScreen();
                if (ch == '1') {
                    sciServices.sortByFirstName(v);
                    sciServices.view(v);
                }
                else if (ch == '2'){
                    sciServices.sortReverseByFirstName(v);
                    sciServices.view(v);
                }
                else if (ch == '3'){
                    sciServices.sortByLastName(v);
                    sciServices.view(v);
                }
                else if (ch == '4'){
                    sciServices.sortReverseByLastName(v);
                    sciServices.view(v);
                }
                else if (ch == '5'){
                    sciServices.sortBySex(v);
                    sciServices.view(v);
                }
                else if (ch == '6'){
                    sciServices.sortByBirthYear(v);
                    sciServices.view(v);
                }
                else{
                    cout << "Wrong input. Try again" << endl;
                }
            }
            while (ch != '1' && ch!= '2' && ch != '3' && ch != '4' && ch != '5' && ch!= '6');
        }
        else if(input == '4'){
            clearScreen();
            cout << "Search word: ";
            sciServices.searching();
        }
        else if(input == '5'){
            cout << "Returning to Main Menu." << endl;
            cout << endl;
            return;
        }
        else{
            cout << "Invalid input, try again: " << endl;
        }
    }
    while(true);

}
void UI::computerLoop(){
    do {
        char input;
        computerMenu();
        cin >> input;
        cout << endl;
        clearScreen();

        if (input == '1'){
            Computer c = Computer();
            readComputer(c);
            compServices.add(c);

        }
        else if(input == '2'){
            sciServices.view();
            sciServices.removeScientist();
        }
        else if(input == '3'){
            vector<ComputerScientist> v;
            char ch;
            cout << endl;
            do {
                scientistSortUI();
                cin >> ch;
                clearScreen();
                if (ch == '1') {
                    sciServices.sortByFirstName(v);
                    sciServices.view(v);
                }
                else if (ch == '2'){
                    sciServices.sortReverseByFirstName(v);
                    sciServices.view(v);
                }
                else if (ch == '3'){
                    sciServices.sortByLastName(v);
                    sciServices.view(v);
                }
                else if (ch == '4'){
                    sciServices.sortReverseByLastName(v);
                    sciServices.view(v);
                }
                else if (ch == '5'){
                    sciServices.sortBySex(v);
                    sciServices.view(v);
                }
                else if (ch == '6'){
                    sciServices.sortByBirthYear(v);
                    sciServices.view(v);
                }
                else{
                    cout << "Wrong input. Try again" << endl;
                }
            }
            while (ch != '1' && ch!= '2' && ch != '3' && ch != '4' && ch != '5' && ch!= '6');
        }
        else if(input == '4'){
            clearScreen();
            cout << "Search word: ";
            sciServices.searching();
        }
        else if(input == '5'){
            cout << "Returning to Main Menu." << endl;
            cout << endl;
            return;
        }
        else{
            cout << "Invalid input, try again: " << endl;
        }
    }
    while(true);
}

void UI::readComputer(Computer& c){
    string my_name;
    cout << "Name: ";
    cin.ignore();
    getline(cin, my_name);
    c.setName(my_name);

    string my_type;
    do{
        cout << "Type: ";
        cin >> my_type;
        if(compServices.checkType(my_type)){
            c.setType(my_type);
        }
        else{
            cout << "Types may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
    while(!compServices.checkType(my_type));

    string answ;
    do{
        cout << "Was the computer ever built (yes/no) ? ";
        cin >> answ;
        if(compServices.checkWasBuilt(answ)){
            c.setWasBuilt(my_type);
        }
        else{
            cout << "Invalid answer!" << endl;
            cout << "Please try again." << endl;
        }
    }
    while(!compServices.checkWasBuilt(answ));

    string my_year;
    do {
        cout << "Year built: ";
        cin >> my_year;
        if(compServices.checkYear(my_year)){
            c.setYear(my_year);
        }
        else{
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
        }
    }
    while(!compServices.checkYear(my_year));
}


void UI::readScientist(ComputerScientist& c){
    string f_name;
    do{
        cout << "Input first name: ";
        cin >> f_name;
        transform(f_name.begin(), f_name.end(), f_name.begin(), ::tolower);
        // ^ converts to lowercase
        if(sciServices.checkName(f_name)){
            c.setFirstName(f_name);
        }
        else{
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
    while(!sciServices.checkName(f_name));

    string l_name;
    do{
        cout << "Input last name: ";
        cin >> l_name;
        transform(l_name.begin(), l_name.end(), l_name.begin(), ::tolower);
        // ^ converts to lowercase
        if(sciServices.checkName(l_name)){
            c.setLastName(l_name);
        }
        else{
            cout << "Names may only contain alphabetic characters!" << endl;
            cout << "Please try again." << endl;
        }
    }
    while(!sciServices.checkName(l_name));

    string my_gender;
    do{
        cout << "Input gender(female / male): ";
        cin >> my_gender;
        transform(my_gender.begin(), my_gender.end(), my_gender.begin(), ::tolower);
        // ^ converts to lowercase

        if(sciServices.checkGender(my_gender)){
            c.setSex(my_gender);
        }
        else{
            cout << "Sex must be either female or male." << endl;
            cout << "Please try again." << endl;
        }
    }
    while(c.getSex() != "male" && c.getSex() != "female");


    string b_year;
    do{
        cout << "Enter year of birth: ";
        cin >> b_year;
        if(sciServices.checkBirth(b_year)){
            c.setYearOfBirth(b_year);
        }
        else{
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
        }
    }
    while(!sciServices.checkBirth(b_year));

    string d_year;
    do{
        cout << "Enter year of death: ";
        cin >> d_year;
        if(sciServices.checkDeath(d_year, b_year)){
            c.setYearOfDeath(d_year);
        }
        else{
            cout << "Invalid year!" << endl;
            cout << "Please try again." << endl;
        }
    }
    while(!sciServices.checkDeath(d_year, b_year));
}
