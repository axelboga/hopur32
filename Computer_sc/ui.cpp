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
                else{
                    cout << "Wrong input. Try again" << endl;
                }
            }
            while (ch != '1' && ch!= '2' && ch != '3' && ch != '4' && ch != '5' && ch!= '6' && ch != '7');

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
    cout << " 1.\t" << "First Name (a-z)" << endl;
    cout << " 2.\t" << "First Name (z-a)" << endl;
    cout << " 3.\t" << "Last Name (a-z)" << endl;
    cout << " 4.\t" << "Last Name (z-a)" << endl;
    cout << " 5.\t" << "Gender" << endl;
    cout << " 6.\t" << "Year of Birth" << endl;
    cout << " 7.\t" << "Year of Death" << endl;
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
