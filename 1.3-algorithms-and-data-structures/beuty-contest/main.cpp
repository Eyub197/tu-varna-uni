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

void handleSort(Contestant*& head, Contestant contestants[]) {
  copyFirst10ElementsIntoArray(head, contestants);
  exchangeSort(contestants);
}

void handleSearchByName(Contestant*& head, Contestant contestants[],
                        int numOfContestants) {
  char name[30];
  cout << "Enter the name to search: ";
  cin.getline(name, 30);
  copyAllElementsIntroArray(head, contestants);
  int nameIndex = binarySearch(contestants, numOfContestants, name);
  printContestant(contestants, nameIndex);
}

int main() {
  int menuChoice;
  int countOfContestants = 0;
  Contestant contestants[10];
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
        handleSearchByName(head, contestants, countOfContestants);
        break;
      case 4:
        handleSort(head, contestants);
        break;
      case 5:
        cout << "ask the teacher lookups";
        break;
      case 6:
        cout << "Thank you for using the program :)" << endl;
        break;
    }
  } while (menuChoice != 6);

  return 0;
}
