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
        CompSciLogic.add(c);
    }
};
