#include "ui.h"
using namespace std;


UI::UI()
{
    logic CompSciLogic();
}

void UI::start() {
    int input;
    cout << "Welcome to the Computer Scientists Program." << endl;
    cout << "___________________________________________" << endl;
    cout << "1.\t" << "Add Scientist" << endl;
    cout << "2.\t" << "View Scientist" << endl;
    cout << "3.\t" << "Exit" << endl;
    cout << "___________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
    cin >> input;

    if (input == 1) {
        ComputerScientist c = ComputerScientist();
        CompSciLogic.add(c);
    }
    else if(input == 2){

        cout << "This feature is not yet available :(" << endl;
        cout << endl;

    }
    else if(input == 3){

        cout << "Ending Program." << endl;
        cout << endl;



    }
};
void UI::banner(){

    cout << "   ___                            _            " << endl;
    cout << "  / __\\___  _ __ ___  _ __  _   _| |_ ___ _ __ " << endl;
    cout << " / /  / _ \\| '_ ` _ \\| '_ \\| | | | __/ _ \\ '__|" << endl;
    cout << "/ /__| (_) | | | | | | |_) | |_| | ||  __/ |   " << endl;
    cout << "\\____/\\___/|_| |_| |_| .__/ \\__,_|\\__\\___|_|   " << endl;
    cout << "                     |_|                       " << endl;
    cout << "  __      _            _   _     _             " << endl;
    cout << " / _\\ ___(_) ___ _ __ | |_(_)___| |_ ___       " << endl;
    cout << " \\ \\ / __| |/ _ \\ '_ \\| __| / __| __/ __|      " << endl;
    cout << " _\\ \\ (__| |  __/ | | | |_| \\__ \\ |_\\__ \\      " << endl;
    cout << " \\__/\\___|_|\\___|_| |_|\\__|_|___/\\__|___/      " << endl;
    cout << endl;



}
