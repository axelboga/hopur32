#include "ui.h"
using namespace std;


UI::UI()
{
    logic CompSciLogic();
}

void UI::start() {
    string input;
    cout << "Welcome!" << endl;
    cout << "The commands are:\t add";
    cin >> input;

    if (input == "add") {
        ComputerScientist c = ComputerScientist();
        setName(c);
        setSex(c);
        setYearOfBirth(c);
        setYearOfDeath(c);
        CompSciLogic.add(c);
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
