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
            CompSciLogic.view();
            cout << endl;
            sortUI();
            cin >> input;
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

    cout << "   ______                            __           " << endl;
    cout << "  / ____/___  ____ ___  ____  __  __/ /____  _____" << endl;
    cout << " / /   / __ \\/ __ `__ \\/ __ \\/ / / / __/ _ \\/ ___/" << endl;
    cout << "/ /___/ /_/ / / / / / / /_/ / /_/ / /_/  __/ /    " << endl;
    cout << "\\____/\\____/_/ /_/ /_/ .___/\\__,_/\\__/\\___/_/     " << endl;
    cout << "   _____      _     /_/    __  _      __          " << endl;
    cout << "  / ___/_____(_)__  ____  / /_(_)____/ /______    " << endl;
    cout << "  \\__ \\/ ___/ / _ \\/ __ \\/ __/ / ___/ __/ ___/    " << endl;
    cout << " ___/ / /__/ /  __/ / / / /_/ (__  ) /_(__  )     " << endl;
    cout << "/____/\\___/_/\\___/_/ /_/\\__/_/____/\\__/____/      " << endl;
    cout << endl;
}

void UI::sortUI() {

    cout << "Sort list by:" << endl;
    cout << " ___________________________________________" << endl;
    cout << " 1.\t" << "Name" << endl;
    cout << " 2.\t" << "Gender" << endl;
    cout << " 3.\t" << "Year of Birth" << endl;
    cout << " 4.\t" << "Year of Death" << endl;
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
