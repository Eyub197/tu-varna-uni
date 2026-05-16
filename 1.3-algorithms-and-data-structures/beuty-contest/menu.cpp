#include <iostream>
#include <string>

#include "list.h"
#include "utils.h"

using namespace std;

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

int getValidMainMenuChoice() {
  int menuChoice;
  printMainMenu();
  do {
    cout << "Your choice: ";
  } while (!isValidInt(menuChoice, 1, 8));

  return menuChoice;
}

void handleSort(Contestant*& head, Contestant contestants[]) {
  copyFirst10ElementsIntoArray(head, contestants);
  exchangeSort(contestants);
}

void handleSearchByName(Contestant*& head, Contestant contestants[],
                        int numOfContestants) {
  char name[30];
  cout << "Enter the name to search: ";
  cin.getline(name, 30);
  copyAllElementsIntoArray(head, contestants);
  int nameIndex = binarySearch(contestants, numOfContestants, name);
  printContestantWithIndex(contestants, nameIndex);
}

void handleSortedPrintingByAgeAndName(Contestant*& head,
                                      Contestant contestnats[],
                                      int numOfContestants) {
  copyAllElementsIntoArray(head, contestnats);
  selectionSort(contestnats, numOfContestants);
  printContestants(contestnats, numOfContestants);
}

void handleSearchByAgeAndGender(Contestant*& head, Contestant contestants[],
                                int numOfContestants) {
  copyAllElementsIntoArray(head, contestants);
  insertionSort(contestants, numOfContestants);
  searchByAgeAndGender(contestants, numOfContestants);
}

void handleSubmenuOperations(Contestant*& head, int numOfContestants) {
  int optionOperationsSubemenuChoice;

  do {
    do {
      cout << endl;
      cout << "--- Option " << 1 << " submenu ---" << endl;
      cout << "1. " << "Add start" << endl;
      cout << "2. " << "Add middle" << endl;
      cout << "3. " << "Add end" << endl;
      cout << "4. " << "Remove start" << endl;
      cout << "5. " << "Remove middle" << endl;
      cout << "6. " << "Remove end" << endl;
      cout << "7. Leave submenu" << endl;
      cout << "Your choice: ";
    } while (!isValidInt(optionOperationsSubemenuChoice, 1, 7));

    switch (optionOperationsSubemenuChoice) {
      case 1:
        addStart(head, numOfContestants);
        break;
      case 2:
        addMiddle(head, numOfContestants);
        break;
      case 3:
        addEnd(head, numOfContestants);
        break;
      case 4:
        removeStart(head);
        break;
      case 5:
        removeMiddle(head);
        break;
      case 6:
        removeEnd(head);
        break;
      case 7:
        cout << "You came back to the main menu" << endl;
        cout << endl;
        break;
    }
  } while (optionOperationsSubemenuChoice != 7);
}

void handleSubmenuSearches(Contestant*& head, Contestant contestants[],
                           int numOfContestants) {
  int optionThreeSubmenuChoice;

  do {
    do {
      printSubmenu(3, "Print all of the youngest contestatns",
                   "Search by name");
      cout << "Your choice: ";
    } while (!isValidInt(optionThreeSubmenuChoice, 1, 3));

    switch (optionThreeSubmenuChoice) {
      case 1:
        findAndPrintContestantsWithYoungestAge(head);
        break;
      case 2:
        handleSearchByName(head, contestants, numOfContestants);
        break;
      case 3:
        cout << "You came back to the main menu" << endl;
        cout << endl;
        break;
    }
  } while (optionThreeSubmenuChoice != 3);
}

void handleSubmenuLookups(Contestant*& head, Contestant contestants[],
                          int numOfContestants) {
  int optionLookupsChoice;

  do {
    do {
      printSubmenu(3, "Print contestatnts sorted by age and name",
                   "Search contestants by age and gender");
      cout << "Your choice: ";
    } while (!isValidInt(optionLookupsChoice, 1, 3));

    switch (optionLookupsChoice) {
      case 1:
        handleSortedPrintingByAgeAndName(head, contestants, numOfContestants);
        break;
      case 2:
        handleSearchByAgeAndGender(head, contestants, numOfContestants);
        break;
      case 3:
        cout << "You came back to the main menu" << endl;
        cout << endl;
        break;
    }
  } while (optionLookupsChoice != 3);
}
