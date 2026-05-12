#include <cstddef>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

#include "list.h"

using namespace std;

void clearBuffer() { cin.ignore(numeric_limits<streamsize>::max(), '\n'); }

bool isValidInt(int& result, int min, int max) {
  cin >> result;

  if (!cin) {
    cin.clear();
    clearBuffer();
    cout << "Invalid input. Please enter a number" << endl;
    return false;
  }

  if (result < min || result > max) {
    clearBuffer();
    cout << "Invalid number. Your number should be between " << min << " to "
         << max << endl;
    return false;
  }

  clearBuffer();
  return true;
}

void printMainMenu() {
  cout << "--- MENU ---" << endl;
  cout << "1. Add or remove" << endl;
  cout << "2. Print all contestants" << endl;
  cout << "3. Print youngest contestants or search one by name" << endl;
  cout << "4. Sort by age" << endl;
  cout << "5. Lookups" << endl;
  cout << "6. Leave" << endl;
}

void printSubmenu(int numOfSubmenu, string optionOneText,
                  string optionTwoText) {
  cout << endl;
  cout << "--- Option " << numOfSubmenu << " submenu ---" << endl;
  cout << "1. " << optionOneText << endl;
  cout << "2. " << optionTwoText << endl;
  cout << "3. Leave submenu" << endl;
}

void handleSubmenuOperations(Contestant*& head, int numOfContestants) {
  int optionThreeSubmenuChoice;

  do {
    do {
      printSubmenu(3, "Add", "Remove");
      cout << "Your choice: ";
    } while (!isValidInt(optionThreeSubmenuChoice, 1, 3));

    switch (optionThreeSubmenuChoice) {
      case 1:
        add(head, numOfContestants);
        break;
      case 2:
        remove(head);
        break;
      case 3:
        cout << "You came back to the main menu" << endl;
        cout << endl;
        break;
    }
  } while (optionThreeSubmenuChoice != 3);
}

int getValidMainMenuChoice() {
  int menuChoice;
  printMainMenu();
  do {
    cout << "Your choice: ";
  } while (!isValidInt(menuChoice, 1, 8));

  return menuChoice;
}

void handleSort(Contestant*& head) {}

int main() {
  int menuChoice;
  int countOfContestants = 0;

  Contestant* head = NULL;

  do {
    menuChoice = getValidMainMenuChoice();

    seed(head, countOfContestants);
    switch (menuChoice) {
      case 1:
        handleSubmenuOperations(head, countOfContestants);
        break;
      case 2:
        print(head);
        break;
      case 3:
        cout << "ask the teacher searchsj";
        break;
      case 4:
        handleSort(head);
        break;
      case 5:
        cout << "ask the teacher lookups";
        break;
      case 6:
        cout << "Thank you for using the program :)" << endl;
        break;
    }
  } while (menuChoice != 5);

  return 0;
}
