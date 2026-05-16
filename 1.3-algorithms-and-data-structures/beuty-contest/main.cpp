#include <cstddef>
#include <iostream>

#include "list.h"
#include "menu.h"

using namespace std;

int main() {
  int menuChoice;
  int countOfContestants = 0;
  Contestant contestants[MAX_NUM_OF_CONTESTANTS];
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
