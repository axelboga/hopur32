#include "ui.h"
#include <stdlib.h>
using namespace std;

UI::UI() {
    sciServices = ScientistServices();
    compServices = ComputerServices();
}

void UI::start() {
    do {
        //clearScreen();
        char input;
        mainMenu();
        cin >> input;

        clearScreen();

        if (input == '1') {
            scientistLoop();
        }
        else if (input == '2') {
            computerLoop();
        }
        else if (input == '3') {
            cout << "Sorry!" << endl;
            cout << "Feature not ready!" << endl;
        }
        else if (input == '4') {
            cout << "Terminating Program" << endl;
            cout << "Goodbye." << endl;
            exit(1);
        }
        else {
            cout << "Invalid input!" << endl;
            cout << "Please try again." << endl;
        }

    } while (true);
}
void UI::banner() {
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
    cout << " 5\t" << "Back to Menu" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}
void UI::clearScreen() {
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
    cout << " 5\t" << "Back to Main Menu" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
}
void UI::mainMenu() {
    banner();
    cout << "Welcome to the Computers & Scientists Program." << endl << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << " 1\t" << "Scientists" << endl;
    cout << " 2\t" << "Computers" << endl;
    cout << " 3\t" << "View Connections" << endl;
    cout << " 4\t" << "Back to Main Menu" << endl;
    cout << " _____________________________________________________________________" << endl;
    cout << "Enter your Selection: ";
}
void UI::scientistLoop() {
    do {
        char input;
        scientistMenu();
        cin >> input;
        cout << endl;

        if (input == '1') {
            Scientist c;
            readScientist(c);
            sciServices.add(c);
        }
        else if (input == '2') {
            string my_id;
            string name;
            do{
                sciServices.view();
                cout << "Enter the ID of the scientist you wish to remove: ";
                cin >> my_id;
                if(sciServices.checkRemove(my_id, name)){
                    sciServices.remove(my_id);
                    cout << "The scientist " << name << " has been successfully removed!" << endl;
                }
                else{
                    cout << "This is not a valid ID!" << endl;
                    cout << "Please try again." << endl;
                }
            }
            while(!sciServices.checkRemove(my_id, name));
        }
        else if (input == '3') {
            char ch;
            cout << endl;
            do {
                scientistSortUI();
                cin >> ch;
                clearScreen();

                if (ch == '1') {
                    sciServices.sort("FirstName");

                }
                else if (ch == '2') {
                    sciServices.sort("FirstName DESC");
                }
                else if (ch == '3') {
                    sciServices.sort("LastName");

                }
                else if (ch == '4') {
                    sciServices.sort("LastName DESC");
                }
                else if (ch == '5') {
                    sciServices.sort("Gender");
                }
                else if (ch == '6') {
                    sciServices.sort("BirthYear");
                }
                else {
                    cout << "Wrong input. Try again" << endl;
                }
            }while (ch != '1' && ch!= '2' && ch != '3'
                        && ch != '4' && ch != '5' && ch!= '6');
        }
        else if (input == '4') {
            clearScreen();
            string searchTerm;
            cout << "Search word: ";
            cin >> searchTerm;
            transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower);
            sciServices.search(searchTerm);

        }
        else if (input == '5') {
            cout << "Returning to Main Menu." << endl;
            return;
        }
        else {
             cout << "Invalid input, try again: " << endl;
        }
    } while (true);

}
void UI::computerLoop() {
    do {
        clearScreen();
        computerArt();
        char input;
        computerMenu();
        cin >> input;
        cout << endl;
        clearScreen();

        if (input == '1') {
            computerArtAdd();
            Computer c = Computer();
            readComputer(c);
            compServices.add(c);
        }
        else if (input == '2') {
            string my_id;
            string name;
            do{
                compServices.view();
                cout << "Enter the ID of the computer you wish to remove: ";
                cin >> my_id;
                if(compServices.checkRemove(my_id, name)){
                    compServices.remove(my_id);
                    cout << "The computer " << name << " has been successfully removed!" << endl;
                }
                else{
                    cout << "This is not a valid ID!" << endl;
                    cout << "Please try again." << endl;
                }
            }
            while(!compServices.checkRemove(my_id, name));
        }
        else if (input == '3') {
            char ch;
            char toContinue;
            cout << endl;

            do {
                computerSortUI();
                cin >> ch;
                clearScreen();
                //cout << "The sorted list is: " << endl;
                if (ch == '1') {
                    computerArtSortByName();
                    compServices.sort("Name");
                    cout << "Press any key to continue..." << endl;
                    cin >> toContinue;

                }
                else if (ch == '2') {
                    computerArtSortByName();
                    compServices.sort("Name DESC");
                    cout << "Press any key to continue..." << endl;
                    cin >> toContinue;
                }
                else if (ch == '3') {
                    computerArtSortByYearBuilt();
                    compServices.sort("YearBuilt");
                    cout << "Press any key to continue..." << endl;
                    cin >> toContinue;
                }
                else if (ch == '4') {
                    computerArtSortByType();
                    compServices.sort("Type");
                    cout << "Press any key to continue..." << endl;
                    cin >> toContinue;
                }
                else {
                    cout << "Wrong input. Try again" << endl;
                }
            } while (ch != '1' && ch!= '2' && ch != '3' &&
                     ch != '4');

        }
        else if (input == '4') {
            clearScreen();
            string searchTerm;
            cout << "Search word: ";
            cin >> searchTerm;
            transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower);

            if (!compServices.checkSearch(searchTerm)) {
                cout << "Nothing found" << endl;
            }
            else {
                cout << "Search results for computers:" << endl;
                compServices.search(searchTerm);
            }
        }
        else if (input == '5') {
            cout << "Returning to Main Menu." << endl;
            cout << endl;
            return;
        }
        else {
            cout << "Invalid input, try again: " << endl;
        }
    } while (true);
}
void UI::readComputer(Computer& c) {
    string my_name;
    cout << "Name: ";
    cin.ignore();
    getline(cin, my_name);
    //transform(my_name.begin(), my_name.end(), my_name.begin(), ::tolower);
    c.setName(my_name);

    string my_type;
    do {
        cout << "Type: ";
        cin >> my_type;
        transform(my_type.begin(), my_type.end(), my_type.begin(), ::tolower);
        if (compServices.checkType(my_type)) {
                c.setType(my_type);
        } else {
                cout << "Types may only contain alphabetic characters!" << endl;
                cout << "Please try again." << endl;
        }
    } while (!compServices.checkType(my_type));

    string answ;
    do {
        cout << "Was the computer ever built (yes/no) ? ";
        cin >> answ;
        transform(answ.begin(), answ.end(), answ.begin(), ::tolower);
        if (compServices.checkWasBuilt(answ)) {
            c.setWasBuilt(answ);
        }
        else {
            cout << "Invalid answer!" << endl;
            cout << "Please try again." << endl;
        }
    } while (!compServices.checkWasBuilt(answ));

    if (answ == "yes"){
        string my_year;
        do {
            cout << "Year built: ";
            cin >> my_year;
            transform(my_year.begin(), my_year.end(), my_year.begin(), ::tolower);
            if (compServices.checkYear(my_year)) {
                    c.setYear(my_year);
            } else {
                    cout << "Invalid year!" << endl;
                    cout << "Please try again." << endl;
            }
        } while (!compServices.checkYear(my_year));
    }
}

void UI::readScientist(Scientist& c) {
    string f_name;
    do{
        cout << "Input first name: ";
        cin >> f_name;
        transform(f_name.begin(), f_name.end(), f_name.begin(), ::tolower);
        if (sciServices.checkName(f_name)){
            c.setFirstName(f_name);
        }
        else {
            cout << "Name may only contain alphabetic charachters!" << endl;
        }
    } while (!sciServices.checkName(f_name));

    string l_name;
    do{
        cout << "Input last name: ";
        cin >> l_name;
        transform(l_name.begin(), l_name.end(), l_name.begin(), ::tolower);
        if (sciServices.checkName(l_name)){
            c.setLastName(l_name);
        }
        else {
            cout << "Name may only contain alphabetic charachters!" << endl;
            cout << "Please try again" << endl;
        }
     } while(!sciServices.checkName(l_name));

    string my_gender;
    do {
        cout << "Input gender (male/female): ";
        cin >> my_gender;
        transform(my_gender.begin(), my_gender.end(), my_gender.begin(), ::tolower);
        if (sciServices.checkGender(my_gender)) {
                c.setSex(my_gender);
        }
        else {
            cout << "Invalid input!" << endl;
            cout << "Please try again." << endl;
        }
    } while (!sciServices.checkGender(my_gender));

    string b_year;
    do {
        cout << "Input year of birth: ";
        cin >> b_year;
        transform(b_year.begin(), b_year.end(), b_year.begin(), ::tolower);
        if (sciServices.checkBirth(b_year)) {
            c.setYearOfBirth(b_year);
        }
        else {
                cout << "Invalid year!" << endl;
                cout << "Please try again." << endl;
        }
    } while (!sciServices.checkBirth(b_year));

    string answ;
    do {
        string name = c.getFirstName();
        name[0] = toupper(name[0]);
        cout << "Is " << name << " still alive ? " << endl;
        cout << "yes/no : ";
        cin >> answ;
        if (!sciServices.isAlive(answ)) {
            cout <<  "Invalid input!" << endl;
            cout << "Try again!" << endl;
        }
     }while (!sciServices.isAlive(answ));

    if (answ != "yes") {
        string d_year;
        do {
            cout << "Input year of death: ";
            cin >> d_year;
            transform(d_year.begin(), d_year.end(), d_year.begin(), ::tolower);
            if (sciServices.checkDeath(d_year, b_year)) {
                c.setYearOfDeath(d_year);
            }
            else {
                cout << "Invalid year!" << endl;
                cout << "Please try again." << endl;
            }
        } while (!sciServices.checkDeath(d_year, b_year));
    }
}
void UI::computerArt() {

    cout << "                         .,,uod8B8bou,,.                           " << endl;
    cout << "              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.                    " << endl;
    cout << "         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||                   " << endl;
    cout << "         !...:!TVBBBRPFT||||||||||!!^^\"\"\'   ||||                   " << endl;
    cout << "         !.......:!?|||||!!^^\"\"\'            ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||  ##                 ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         `.........||||                    ,||||                   " << endl;
    cout << "          .;.......||||               _.-!!|||||                   " << endl;
    cout << "   .,uodWBBBBb.....||||       _.-!!|||||||||!:\'                    " << endl;
    cout << "!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....               " << endl;
    cout << "!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.             " << endl;
    cout << "!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.           " << endl;
    cout << "!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^\"`;:::       `.         " << endl;
    cout << "!........YBBBBBBBBBBRPFT?!::::::::::^\'\'...::::::;         iBBbo.   " << endl;
    cout << "`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo. " << endl;
    cout << " `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^\' " << endl;
    cout << "   `........::::::::::::::::;iof688888888888888888888b.     `      " << endl;
    cout << "    `......:::::::::;iof688888888888888888888888888888b.           " << endl;
    cout << "      `....:::;iof688888888888888888888888888888888899fT!          " << endl;
    cout << "       `..::!8888888888888888888888888888888899fT|!^\"\'             " << endl;
    cout << "         `\' !!988888888888888888888888899fT|!^\"\'                   " << endl;
    cout << "           `!!8888888888888888899fT|!^\"\'                           " << endl;
    cout << "              `!988888888899fT|!^\"\'                                " << endl;
    cout << "                `!9899fT|!^\"\'                                      " << endl;
    cout << "                  `!^\"\'                                            " << endl;
    cout << endl << endl;

}
void UI::computerArtAdd() {

    cout << "                         .,,uod8B8bou,,.                           " << endl;
    cout << "              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.                    " << endl;
    cout << "         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||                   " << endl;
    cout << "         !...:!TVBBBRPFT||||||||||!!^^\"\"\'   ||||                   " << endl;
    cout << "         !.......:!?|||||!!^^\"\"\'            ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||  ## Adding Computer ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         `.........||||                    ,||||                   " << endl;
    cout << "          .;.......||||               _.-!!|||||                   " << endl;
    cout << "   .,uodWBBBBb.....||||       _.-!!|||||||||!:\'                    " << endl;
    cout << "!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....               " << endl;
    cout << "!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.             " << endl;
    cout << "!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.           " << endl;
    cout << "!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^\"`;:::       `.         " << endl;
    cout << "!........YBBBBBBBBBBRPFT?!::::::::::^\'\'...::::::;         iBBbo.   " << endl;
    cout << "`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo. " << endl;
    cout << " `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^\' " << endl;
    cout << "   `........::::::::::::::::;iof688888888888888888888b.     `      " << endl;
    cout << "    `......:::::::::;iof688888888888888888888888888888b.           " << endl;
    cout << "      `....:::;iof688888888888888888888888888888888899fT!          " << endl;
    cout << "       `..::!8888888888888888888888888888888899fT|!^\"\'             " << endl;
    cout << "         `\' !!988888888888888888888888899fT|!^\"\'                   " << endl;
    cout << "           `!!8888888888888888899fT|!^\"\'                           " << endl;
    cout << "              `!988888888899fT|!^\"\'                                " << endl;
    cout << "                `!9899fT|!^\"\'                                      " << endl;
    cout << "                  `!^\"\'                                            " << endl;
    cout << endl << endl;

}
void UI::computerArtSortByName() {

    cout << "                         .,,uod8B8bou,,.                           " << endl;
    cout << "              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.                    " << endl;
    cout << "         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||                   " << endl;
    cout << "         !...:!TVBBBRPFT||||||||||!!^^\"\"\'   ||||                   " << endl;
    cout << "         !.......:!?|||||!!^^\"\"\'            ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||  ## Sorted by Name  ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         `.........||||                    ,||||                   " << endl;
    cout << "          .;.......||||               _.-!!|||||                   " << endl;
    cout << "   .,uodWBBBBb.....||||       _.-!!|||||||||!:\'                    " << endl;
    cout << "!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....               " << endl;
    cout << "!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.             " << endl;
    cout << "!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.           " << endl;
    cout << "!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^\"`;:::       `.         " << endl;
    cout << "!........YBBBBBBBBBBRPFT?!::::::::::^\'\'...::::::;         iBBbo.   " << endl;
    cout << "`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo. " << endl;
    cout << " `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^\' " << endl;
    cout << "   `........::::::::::::::::;iof688888888888888888888b.     `      " << endl;
    cout << "    `......:::::::::;iof688888888888888888888888888888b.           " << endl;
    cout << "      `....:::;iof688888888888888888888888888888888899fT!          " << endl;
    cout << "       `..::!8888888888888888888888888888888899fT|!^\"\'             " << endl;
    cout << "         `\' !!988888888888888888888888899fT|!^\"\'                   " << endl;
    cout << "           `!!8888888888888888899fT|!^\"\'                           " << endl;
    cout << "              `!988888888899fT|!^\"\'                                " << endl;
    cout << "                `!9899fT|!^\"\'                                      " << endl;
    cout << "                  `!^\"\'                                            " << endl;
    cout << endl << endl;

}
void UI::computerArtSortByYearBuilt() {

    cout << "                         .,,uod8B8bou,,.                           " << endl;
    cout << "              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.                    " << endl;
    cout << "         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||                   " << endl;
    cout << "         !...:!TVBBBRPFT||||||||||!!^^\"\"\'   ||||                   " << endl;
    cout << "         !.......:!?|||||!!^^\"\"\'            ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||  ## Sorted by       ||||                   " << endl;
    cout << "         !.........||||  ## Year Built      ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         `.........||||                    ,||||                   " << endl;
    cout << "          .;.......||||               _.-!!|||||                   " << endl;
    cout << "   .,uodWBBBBb.....||||       _.-!!|||||||||!:\'                    " << endl;
    cout << "!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....               " << endl;
    cout << "!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.             " << endl;
    cout << "!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.           " << endl;
    cout << "!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^\"`;:::       `.         " << endl;
    cout << "!........YBBBBBBBBBBRPFT?!::::::::::^\'\'...::::::;         iBBbo.   " << endl;
    cout << "`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo. " << endl;
    cout << " `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^\' " << endl;
    cout << "   `........::::::::::::::::;iof688888888888888888888b.     `      " << endl;
    cout << "    `......:::::::::;iof688888888888888888888888888888b.           " << endl;
    cout << "      `....:::;iof688888888888888888888888888888888899fT!          " << endl;
    cout << "       `..::!8888888888888888888888888888888899fT|!^\"\'             " << endl;
    cout << "         `\' !!988888888888888888888888899fT|!^\"\'                   " << endl;
    cout << "           `!!8888888888888888899fT|!^\"\'                           " << endl;
    cout << "              `!988888888899fT|!^\"\'                                " << endl;
    cout << "                `!9899fT|!^\"\'                                      " << endl;
    cout << "                  `!^\"\'                                            " << endl;
    cout << endl << endl;

}
void UI::computerArtSortByType() {

    cout << "                         .,,uod8B8bou,,.                           " << endl;
    cout << "              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.                    " << endl;
    cout << "         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||                   " << endl;
    cout << "         !...:!TVBBBRPFT||||||||||!!^^\"\"\'   ||||                   " << endl;
    cout << "         !.......:!?|||||!!^^\"\"\'            ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||  ## Sorted by Type  ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         !.........||||                     ||||                   " << endl;
    cout << "         `.........||||                    ,||||                   " << endl;
    cout << "          .;.......||||               _.-!!|||||                   " << endl;
    cout << "   .,uodWBBBBb.....||||       _.-!!|||||||||!:\'                    " << endl;
    cout << "!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....               " << endl;
    cout << "!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.             " << endl;
    cout << "!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.           " << endl;
    cout << "!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^\"`;:::       `.         " << endl;
    cout << "!........YBBBBBBBBBBRPFT?!::::::::::^\'\'...::::::;         iBBbo.   " << endl;
    cout << "`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo. " << endl;
    cout << " `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^\' " << endl;
    cout << "   `........::::::::::::::::;iof688888888888888888888b.     `      " << endl;
    cout << "    `......:::::::::;iof688888888888888888888888888888b.           " << endl;
    cout << "      `....:::;iof688888888888888888888888888888888899fT!          " << endl;
    cout << "       `..::!8888888888888888888888888888888899fT|!^\"\'             " << endl;
    cout << "         `\' !!988888888888888888888888899fT|!^\"\'                   " << endl;
    cout << "           `!!8888888888888888899fT|!^\"\'                           " << endl;
    cout << "              `!988888888899fT|!^\"\'                                " << endl;
    cout << "                `!9899fT|!^\"\'                                      " << endl;
    cout << "                  `!^\"\'                                            " << endl;
    cout << endl << endl;

}



