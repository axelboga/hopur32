#include "ui.h"
#include <stdlib.h>
using namespace std;

UI::UI() {
        sciServices = ScientistServices();
        compServices = ComputerServices();
        connectionServices = CompSciConnectionServices();
}

/************************ MAIN FUNCTION ********************************/

void UI::start() {
  do {
        clearScreen();
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
          connectionLoop();
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

/*********************************** MAIN LOOPS *************************************/

void UI::scientistLoop() {
  do {
      clearScreen();
      scientistArt();
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
          clearScreen();
          promptForRemoveScientist();
      }
      else if (input == '3') {
          promptToSortScientist();
      }
      else if (input == '4') {
          clearScreen();
          promptToSearchScientist();
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
            Computer c = Computer();
            readComputer(c);
            compServices.add(c);
        }
        else if (input == '2') {
            promptForRemoveComputer();
        }
        else if (input == '3') {
            promptToSortComputer();
        }
        else if (input == '4') {
            clearScreen();
            promptToSearchComputer();
        }
        else if (input == '5') {
            cout << "Returning to Main Menu." << endl;
            cout << endl;
            return;
        }
        else {
            cout << "Invalid input, try again." << endl;
        }
     } while (true);
}
void UI::connectionLoop() {
    do {
        clearScreen();
        connectionArt();
        char input;
        connectionMenu();
        cin >> input;

        if (input == '1') {
            promptForAddingConnections();
        }
        else if (input == '2') {
            promptToRemoveConnections();
        }
        else if (input == '3') {
            char viewInput;
            do {
                connectionViewUI();
                cin >> viewInput;
                if (viewInput == '1') {
                    promptForViewingScientistComputerConnections();
                }
                else if (viewInput == '2') {
                    promptForViewingComputerScientistConnections();
                }
                else if (viewInput == '3') {
                    break;
                }
                else {
                    cout << "Invalid input. Please try again." << endl;
                }

            } while (viewInput != '3');
        }
        else if (input == '4') {
           return;
        }
        else {
            cout << "Invalid input, try again." << endl;
        }

    } while (true);

}
/********************** SCIENTIST HELPER FUNCTIONS AND PROMPTS ************************/

void UI::readScientist(Scientist& c) {
  string f_name;
  do {
         cout << "Input first name: ";
         cin >> f_name;
         transform(f_name.begin(), f_name.end(), f_name.begin(), ::tolower);

         if (sciServices.checkName(f_name)) {
            c.setFirstName(f_name);
         }
         else {
           cout << "Name may only contain alphabetic charachters!" << endl;
         }
     } while (!sciServices.checkName(f_name));

  string l_name;
  do {
         cout << "Input last name: ";
         cin >> l_name;
         transform(l_name.begin(), l_name.end(), l_name.begin(), ::tolower);

         if (sciServices.checkName(l_name)) {
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

      } while (!sciServices.isAlive(answ));

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
void UI::promptForRemoveScientist() {
    string my_id;
    string name;
    do {
        sciServices.view();
        cout << "Input the ID of the scientist you wish to remove or type 'Q' to go back: ";
        cin >> my_id;
        if (sciServices.checkIfIdExists(my_id, name)) {
          sciServices.remove(my_id);
          cout << "The scientist " << name << " has been successfully removed!" << endl;
        }
        else if (my_id == "Q" || my_id == "q") {
            return;
       }
        else {
          cout << "This is not a valid ID!" << endl;
          cout << "Please try again." << endl;
          cout << "If you wish to go back, type 'Q'." << endl;
        }
    } while (!sciServices.checkIfIdExists(my_id, name) &&  my_id != "Q" && my_id != "q");
}
void UI::promptToSortScientist() {
    char ch;
    cout << endl;

    do {
          scientistSortUI();
          cin >> ch;
          clearScreen();

          if (ch == '1') {
              sciServices.sort("FirstName");
              enterToContinue();
          }
          else if (ch == '2') {
              sciServices.sort("FirstName DESC");
              enterToContinue();
          }
          else if (ch == '3') {
              sciServices.sort("LastName");
              enterToContinue();
          }
          else if (ch == '4') {
              sciServices.sort("LastName DESC");
              enterToContinue();
          }
          else if (ch == '5') {
              sciServices.sort("Gender");
              enterToContinue();
          }
          else if (ch == '6') {
              sciServices.sort("BirthYear");
              enterToContinue();
          }
          else if (ch == '7') {
              sciServices.sort("ID");
              enterToContinue();
          }
          else {
              cout << "Wrong input. Try again" << endl;
          }

       } while (ch != '1' && ch!= '2' && ch != '3' && ch != '4' && ch != '5' && ch!= '6' && ch!= '7');
}

void UI::promptToSearchScientist() {
    string searchTerm;
    cout << "Search word: ";
    cin >> searchTerm;
    transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower);

    if (!sciServices.checkSearch(searchTerm)) {
      cout << "Nothing found" << endl;
      enterToContinue();
    }
    else {
      cout << "Search results for scientists:" << endl;
      sciServices.search(searchTerm);
      enterToContinue();
    }
}

/********************** COMPUTER HELPER FUNCTIONS AND PROMPTS ************************/

void UI::readComputer(Computer& c) {
  string my_name;
  cout << "Name: ";
  cin.ignore();
  getline(cin, my_name);
  c.setName(my_name);

  string my_type;
  do {
        cout << "Type: ";
        cin >> my_type;
        transform(my_type.begin(), my_type.end(), my_type.begin(), ::tolower);

        if (compServices.checkType(my_type)) {
          c.setType(my_type);
        }
        else {
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

  if (answ == "yes") {
    string my_year;
    do {
         cout << "Year built: ";
         cin >> my_year;
         transform(my_year.begin(), my_year.end(), my_year.begin(), ::tolower);

         if (compServices.checkYear(my_year)) {
           c.setYear(my_year);
         }
         else {
           cout << "Invalid year!" << endl;
           cout << "Please try again." << endl;
         }

      } while (!compServices.checkYear(my_year));
  }
}

void UI::promptForRemoveComputer() {
    string my_id;
    string name;
    do {
          compServices.view();
          cout << "Input the ID of the computer you wish to remove or type 'Q' to go back: ";
          cin >> my_id;
          if (compServices.checkIfIdExists(my_id, name)) {
            compServices.remove(my_id);
            cout << "The computer " << name << " has been successfully removed!" << endl;
          }
          else if (my_id == "Q" || my_id == "q") {
              return;
          }
          else {
            cout << "This is not a valid ID!" << endl;
            cout << "Please try again." << endl;
          }

       } while (!compServices.checkIfIdExists(my_id, name) &&  my_id != "Q" && my_id != "q");
}

void UI::promptToSortComputer() {
    char ch;
    cout << endl;

    do {
          computerSortUI();
          cin >> ch;
          clearScreen();

          if (ch == '1') {
            compServices.sort("Name");
            enterToContinue();
          }
          else if (ch == '2') {
            compServices.sort("Name DESC");
            enterToContinue();
          }
          else if (ch == '3') {
            compServices.sort("YearBuilt");
            enterToContinue();
          }
          else if (ch == '4') {
            compServices.sort("Type");
            enterToContinue();
          }
          else if (ch == '5') {
              compServices.sort("ID");
              enterToContinue();
          }
          else {
            cout << "Wrong input. Try again" << endl;
          }

       } while (ch != '1' && ch!= '2' && ch != '3' && ch != '4' && ch != '5');
}

void UI::promptToSearchComputer() {
    string searchTerm;
    cout << "Search word: ";
    cin >> searchTerm;

    if (!compServices.checkSearch(searchTerm)) {
      cout << "Nothing found" << endl;
      enterToContinue();
    }
    else {
      cout << "Search results for computers:" << endl;
      compServices.search(searchTerm);
      enterToContinue();
    }
}

/********************** CONNECTIONS HELPER FUNCTIONS AND PROMPTS ************************/

void UI::promptForAddingConnections() {
    string sci_id;
    string comp_id;
    string name_s;
    string name_c;
    do {
        sciServices.view();
        cout << "Input the ID of the scientist to connect: ";
        cin >> sci_id;
        if (!sciServices.checkIfIdExists(sci_id, name_s)) {
            clearScreen();
            cout << "Sorry, this is not a valid ID, please try again!" << endl;
        }
    } while(!sciServices.checkIfIdExists(sci_id, name_s));

    do {
        compServices.view();
        cout << "Input the ID of the computer to connect: ";
        cin >> comp_id;
        if (!compServices.checkIfIdExists(comp_id, name_c)) {
            clearScreen();
            cout << "Sorry, this is not a valid ID, please try again!" << endl;
        }
    } while(!compServices.checkIfIdExists(comp_id, name_c));

    connectionServices.addConnection(sci_id, comp_id);
    cout << "The scientist " << name_s << " and the computer " << name_c << " have now been linked!" << endl;
    enterToContinue();
}
void UI::promptToRemoveConnections() {
    string sci_id;
    string comp_id;
    string name_s;
    string name_c;
    do {
        sciServices.view();
        cout << "Input the ID of the scientist to disconnect: ";
        cin >> sci_id;
        if (!sciServices.checkIfIdExists(sci_id, name_s)) {
            clearScreen();
            cout << "Sorry, this is not a valid ID, please try again!" << endl;
        }
    } while(!sciServices.checkIfIdExists(sci_id, name_s));

    do {
        compServices.view();
        cout << "Input the ID of the computer to disconnect: ";
        cin >> comp_id;
        if (!compServices.checkIfIdExists(comp_id, name_c)) {
            clearScreen();
            cout << "Sorry, this is not a valid ID, please try again!" << endl;
        }
    } while(!compServices.checkIfIdExists(comp_id, name_c));

    connectionServices.removeConnection(sci_id, comp_id);
    cout << "The connection between the scientist " << name_s << " and the" << endl;
    cout << "computer " << name_c << " have now been removed!"<< endl;
    enterToContinue();
}


void UI::promptForViewingComputerScientistConnections() {
    clearScreen();
    string c_id;
    string name;
    do {
        compServices.view();
        cout << "Input a computer-ID from the list above to see what scientists" << endl << "are connected to it: ";
        cin >> c_id;
        cout << endl;
        if (compServices.checkIfIdExists(c_id, name)) {
            if (sciServices.checkCompSciConnections(c_id)){
                cout << "The scientists that are connected to the computer " << name << " are:" << endl;
                sciServices.getScientistsByComputerId(c_id);
            }
            else {
                cout << "Sorry! There aren't any scientists connected to the computer " << name << endl;
            }
        }
        else {
            clearScreen();
            cout << "This is not a valid ID!" << endl;
            cout << "Please try again." << endl;
        }
    } while (!compServices.checkIfIdExists(c_id, name));
}

void UI::promptForViewingScientistComputerConnections() {
    clearScreen();
    string s_id;
    string name;
    do {
        sciServices.view();
        cout << "Input a scientist-ID from the list above to see what computers" << endl << "are connected to it: ";
        cin >> s_id;
        cout << endl;
        if (sciServices.checkIfIdExists(s_id, name)){
            if (compServices.checkSciCompConnections(s_id)){
                cout << "The computers that are connected to the scientist " << name << " are:" << endl;
                compServices.getComputersByScientistId(s_id);
            }
            else{
                cout << "Sorry! There aren't any computers connected to the scientist " << name << endl;
            }
       }
        else {
            clearScreen();
            cout << "This is not a valid ID!" << endl;
            cout << "Please try again." << endl;
        }
    } while(!sciServices.checkIfIdExists(s_id, name));
}

/******************************** CONSOLE MANIPULATION *********************************/

void UI::clearScreen() {
  if (system("clear")) system("CLS");
}
void UI::flush(istream& in) {
  in.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' );
  in.clear();
}
void UI::enterToContinue() {
  flush(cin); //Clears the buffer
  cout << "Press [Enter] to Continue...";
  cin.get();
}

/*********************************** MENUS AND INTERFACES *************************************/

void UI::mainMenu() {
  banner();
  cout << "Welcome to the Computers & Scientists Program." << endl << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << " 1\t" << "Scientists" << endl;
  cout << " 2\t" << "Computers" << endl;
  cout << " 3\t" << "Connections" << endl;
  cout << " 4\t" << "Quit" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << "Enter your Selection: ";
}
void UI::scientistMenu() {
  cout << " _____________________________________________________________________________" << endl;
  cout << " 1\t" << "Add Scientist" << endl;
  cout << " 2\t" << "Remove Scientist" << endl;
  cout << " 3\t" << "View Scientists" << endl;
  cout << " 4\t" << "Search for Scientists" << endl;
  cout << " 5\t" << "Back to Main Menu" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << endl;
  cout << "Enter your Selection: ";
}
void UI::computerMenu() {
  cout << " _____________________________________________________________________________" << endl;
  cout << " 1\t" << "Add Computer" << endl;
  cout << " 2\t" << "Remove Computer" << endl;
  cout << " 3\t" << "View Computer" << endl;
  cout << " 4\t" << "Search for Computer" << endl;
  cout << " 5\t" << "Back to Main Menu" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << endl;
  cout << "Enter your Selection: ";
}
void UI::connectionMenu() {
  cout << " _____________________________________________________________________________" << endl;
  cout << " 1\t" << "Add Connections" << endl;
  cout << " 2\t" << "Remove Connections" << endl;
  cout << " 3\t" << "View Connections" << endl;
  cout << " 4\t" << "Back to Main Menu" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << endl;
  cout << "Enter your Selection: ";
}
void UI::scientistSortUI() {
  cout << "Sort list by:" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << " 1\t" << "First Name (a-z)" << endl;
  cout << " 2\t" << "First Name (z-a)" << endl;
  cout << " 3\t" << "Last Name (a-z)" << endl;
  cout << " 4\t" << "Last Name (z-a)" << endl;
  cout << " 5\t" << "Gender" << endl;
  cout << " 6\t" << "Year of Birth" << endl;
  cout << " 7\t" << "ID" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << endl;
  cout << "Enter your Selection: ";
}
void UI::computerSortUI() {
  cout << "Sort list by:" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << " 1\t" << "Name of Computer (a-z)" << endl;
  cout << " 2\t" << "Name of Computer (z-a)" << endl;
  cout << " 3\t" << "Year built" << endl;
  cout << " 4\t" << "Computer Type" << endl;
  cout << " 5\t" << "ID" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << endl;
  cout << "Enter your Selection: ";
}
void UI::connectionViewUI() {
  cout << " _____________________________________________________________________________" << endl;
  cout << " 1\t" << "View Scientist -> Computer connection" << endl;
  cout << " 2\t" << "View Computer -> Scientist connection" << endl;
  cout << " 3\t" << "Go Back" << endl;
  cout << " _____________________________________________________________________________" << endl;
  cout << endl;
  cout << "Enter your Selection: ";
}

/*********************************** GRAPHICS *************************************/

void UI::banner() {
    cout << "  .d8888b.                                           888                            " << endl;
    cout << " d88P  Y88b                                          888                            " << endl;
    cout << " 888    888                                          888                            " << endl;
    cout << " 888         .d88b.  88888b.d88b.  88888b.  888  888 888888 .d88b.  888d888 .d8888b " << endl;
    cout << " 888        d88\"\"88b 888 \"888 \"88b 888 \"88b 888  888 888   d8P  Y8b 888P\"   88K     " << endl;
    cout << " 888    888 888  888 888  888  888 888  888 888  888 888   88888888 888     \"Y8888b." << endl;
    cout << " Y88b  d88P Y88..88P 888  888  888 888 d88P Y88b 888 Y88b. Y8b.     888          X88" << endl;
    cout << "  \"Y8888P\"   \"Y88P\"  888  888  888 88888P\"   \"Y88888  \"Y888 \"Y8888  888      88888P' " << endl;
    cout << "                                   888                                               " << endl;
    cout << "                                   888                                               " << endl;
    cout << "                                   888                                               " << endl;
    cout << "                                                 888                                " << endl;
    cout << "                                                 888                                " << endl;
    cout << "                           8888b.  88888b.   .d88888                                " << endl;
    cout << "                              \"88b 888 \"88b d88\" 888                                " << endl;
    cout << "                          .d888888 888  888 888  888                                " << endl;
    cout << "                          888  888 888  888 Y88b 888                                " << endl;
    cout << "                          \"Y888888 888  888  \"Y88888                                " << endl;
    cout << "                                                                                    " << endl;
    cout << "                                                                                    " << endl;
    cout << "       .d8888b.           d8b                   888    d8b          888             " << endl;
    cout << "      d88P  Y88b          Y8P                   888    Y8P          888             " << endl;
    cout << "      Y88b.                                     888                 888             " << endl;
    cout << "       \"Y888b.    .d8888b 888  .d88b.  88888b.  888888 888 .d8888b  888888 .d8888b  " << endl;
    cout << "          \"Y88b. d88P\"    888 d8P  Y8b 888 \"88b 888    888 88K      888    88K      " << endl;
    cout << "            \"888 888      888 88888888 888  888 888    888 \"Y8888b. 888    \"Y8888b. " << endl;
    cout << "      Y88b  d88P Y88b.    888 Y8b.     888  888 Y88b.  888      X88 Y88b.       X88 " << endl;
    cout << "       \"Y8888P\"   \"Y8888P 888  \"Y8888  888  888  \"Y888 888  88888P'  \"Y888  88888P' " << endl;
    cout << endl << endl << endl;


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
void UI::scientistArt() {
    cout << endl << endl << endl;
    cout << "            //////\\\\                       " << endl;
    cout << "___.___    (.)(.)-|| ???_____________      " << endl;
    cout << "\\  \\\\  \\   | L    )|   |        \'\\\\\\\\\\\\    " << endl;
    cout << " \\  \\\\  \\  | _    /    |        \' ____|_   " << endl;
    cout << "  --\\//,-  |____.\'     |        \'||::::::  " << endl;
    cout << "      o-   ___| |___   |        \'||_____|  " << endl;
    cout << "      | \\ \'          \\ \'________|_____|    " << endl;
    cout << "      |  )-         <  ___/____|___\\___    " << endl;
    cout << "      `_/\'------------|    _    \'  <<<:|   " << endl;
    cout << "          /________\\| |_________\'___o_o|   " << endl << endl << endl;
}
void UI::connectionArt() {

cout << "  +-------------------+                                  " << endl;
cout << "  |                   |                                  " << endl;
cout << "  | Difference Engine +-----------> Charles Babbage      " << endl;
cout << "  |                   |                     ^            " << endl;
cout << "  +-------------------+                     |            " << endl;
cout << "                                            |            " << endl;
cout << "                                            |            " << endl;
cout << "                                            |            " << endl;
cout << "                                            |            " << endl;
cout << "                                 +----------+----------+ " << endl;
cout << "                                 |                     | " << endl;
cout << "      Ada Lovelace <-------------+  Analytical Engine  | " << endl;
cout << "                                 |                     | " << endl;
cout << "                                 +---------------------+ " << endl;
}
