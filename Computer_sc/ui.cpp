#include "ui.h"
#include <stdlib.h>
using namespace std;

UI::UI() {
    logic CompSciLogic;
}

void UI::start() {
    cout << "Welcome to the Computer Scientists Program." << endl;
    do {
        char input;
        menu();
        cin >> input;
        cout << endl;

        if (input == '1'){
            ComputerScientist c = ComputerScientist();
            CompSciLogic.add(c);
        }
        else if(input == '2'){
            CompSciLogic.view();
            CompSciLogic.eraseFromVector();
        }
        else if(input == '3'){
            vector<ComputerScientist> v;
            char ch;
            cout << endl;

            do {
                sortUI();
                cin >> ch;

                if (ch == '1') {
                    CompSciLogic.sortByFirstName(v);
                    CompSciLogic.view(v);
                }
                else if (ch == '2'){
                    CompSciLogic.sortReverseByFirstName(v);
                    CompSciLogic.view(v);
                }
                else if (ch == '3'){
                    CompSciLogic.sortByLastName(v);
                    CompSciLogic.view(v);
                }
                else if (ch == '4'){
                    CompSciLogic.sortReverseByLastName(v);
                    CompSciLogic.view(v);
                }
                else if (ch == '5'){
                    CompSciLogic.sortBySex(v);
                    CompSciLogic.view(v);
                }
                else if (ch == '6'){
                    CompSciLogic.sortByBirthYear(v);
                    CompSciLogic.view(v);
                }
                else{
                    cout << "Wrong input. Try again" << endl;
                }
            }
            while (ch != '1' && ch!= '2' && ch != '3' && ch != '4' && ch != '5' && ch!= '6');

        }
        else if(input == '4'){
            cout << "Search word: ";
            CompSciLogic.searching();
        }
        else if(input == '5'){
            cout << "Ending Program." << endl;
            cout << endl;
            exit(1);
        }
        else{
            cout << "Invalid input, try again: " << endl;
        }
    }
    while(true);
};
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

void UI::sortUI() {

    cout << "Sort list by:" << endl;
    cout << " ___________________________________________" << endl;
    cout << " 1.\t" << "First Name (a-z)" << endl;
    cout << " 2.\t" << "First Name (z-a)" << endl;
    cout << " 3.\t" << "Last Name (a-z)" << endl;
    cout << " 4.\t" << "Last Name (z-a)" << endl;
    cout << " 5.\t" << "Gender" << endl;
    cout << " 6.\t" << "Year of Birth" << endl;
    cout << " ___________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}

void UI::menu() {
    cout << " ___________________________________________" << endl;
    cout << " 1.\t" << "Add Scientist" << endl;
    cout << " 2.\t" << "Remove Scientist" << endl;
    cout << " 3.\t" << "View Scientists" << endl;
    cout << " 4.\t" << "Search for Scientists" << endl;
    cout << " 5.\t" << "Exit" << endl;
    cout << " ___________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}
