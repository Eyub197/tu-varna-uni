#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ostream>

using namespace std;

#include "constants.h"

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

int getValidMainMenuChoice() {
  int menuChoice;
  printMainMenu();
  do {
    cout << "Your choice: ";
  } while (!isValidInt(menuChoice, 1, 8));

  return menuChoice;
}

void exchangeSort(Contestant contestants[]) {
  for (int i = 0; i < 10 - 1; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (contestants[i].age > contestants[j].age) {
        Contestant temp = contestants[i];
        contestants[i] = contestants[j];
        contestants[j] = temp;
      }
    }
  }
}

void sortByName(Contestant contestants[], int numOfContestants) {
  for (int i = 0; i < numOfContestants - 1; i++) {
    for (int j = i + 1; j < numOfContestants; j++) {
      if (strcmp(contestants[i].name, contestants[j].name) > 0) {
        Contestant temp = contestants[i];
        contestants[i] = contestants[j];
        contestants[j] = temp;
      }
    }
  }
}

int binarySearch(Contestant contestants[], int numOfContestants,
                 char name[30]) {
  int beg = 0;
  int end = numOfContestants - 1;

  while (beg <= end) {
    int mid = (beg + end) / 2;

    if (strcmp(contestants[mid].name, name) == 0) {
      return mid;
    } else if (strcmp(contestants[mid].name, name) > 0) {
      end = mid - 1;
    } else if (strcmp(contestants[mid].name, name) < 0) {
      beg = mid + 1;
    }
  }

  return -1;
}

void printContestant(Contestant contestant[], int indexOfContestant) {
  cout << left << setw(10) << contestant[indexOfContestant].number << setw(20)
       << contestant[indexOfContestant].name << setw(5)
       << contestant[indexOfContestant].age << setw(8)
       << contestant[indexOfContestant].gender << fixed << endl;
}
