#include <cstddef>
#include <iostream>
#include <string>

#include "list.h"
#include "utils.h"

using namespace std;

void handleSubmenuOperations(Contestant*& head, int numOfContestants) {
  int optionThreeSubmenuChoice;

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
    } while (!isValidInt(optionThreeSubmenuChoice, 1, 7));

    switch (optionThreeSubmenuChoice) {
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
  } while (optionThreeSubmenuChoice != 7);
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

void handleSubmenuLookups(Contestant*& head, Contestant contestants[],
                          int numOfContestants) {
  int optionThreeSubmenuChoice;

  do {
    do {
      printSubmenu(3, "Print contestatnts sorted by age and name",
                   "Search contestants by age and gender");
      cout << "Your choice: ";
    } while (!isValidInt(optionThreeSubmenuChoice, 1, 3));

    switch (optionThreeSubmenuChoice) {
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
  } while (optionThreeSubmenuChoice != 3);
}

int main() {
  int menuChoice;
  int countOfContestants = 0;
  Contestant contestants[10];
  Contestant* head = NULL;
  seed(head, countOfContestants);

  do {
    menuChoice = getValidMainMenuChoice();

    switch (menuChoice) {
      case 1:
        handleSubmenuOperations(head, countOfContestants);
        break;
      case 2:
        print(head);
        break;
      case 3:
        handleSubmenuSearches(head, contestants, countOfContestants);
        break;
      case 4:
        handleSort(head, contestants);
        break;
      case 5:
        handleSubmenuLookups(head, contestants, countOfContestants);
        break;
      case 6:
        cout << "Thank you for using the program :)" << endl;
        break;
    }
  } while (menuChoice != 6);

  return 0;
}

// TODO rename the submenu option 3 to its coresponding name
