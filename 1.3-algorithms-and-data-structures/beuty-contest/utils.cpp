#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ostream>

using namespace std;

#include "constants.h"

void clearBuffer() { cin.ignore(numeric_limits<streamsize>::max(), '\n'); }

void printContestantWithIndex(Contestant contestant[], int indexOfContestant) {
  cout << left << setw(10) << contestant[indexOfContestant].number << setw(20)
       << contestant[indexOfContestant].name << setw(5)
       << contestant[indexOfContestant].age << setw(8)
       << contestant[indexOfContestant].gender << fixed << endl;
}

void printContestant(Contestant contestant) {
  cout << left << setw(10) << contestant.number << setw(20) << contestant.name
       << setw(5) << contestant.age << setw(8) << contestant.gender << fixed
       << endl;
}

void printContestants(Contestant contestant[], int size) {
  for (int i = 0; i < size; i++) {
    cout << left << setw(10) << contestant[i].number << setw(20)
         << contestant[i].name << setw(5) << contestant[i].age << setw(8)
         << contestant[i].gender << fixed << endl;
  }
}
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

void selectionSort(Contestant contestants[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;

    for (int i = step + 1; i < size; i++) {
      if (contestants[i].age < contestants[min_idx].age) min_idx = i;
      if (contestants[i].age == contestants[min_idx].age) {
        if ((strcmp(contestants[i].name, contestants[min_idx].name)) < 0)
          min_idx = i;
      }
    }

    Contestant temp = contestants[min_idx];
    contestants[min_idx] = contestants[step];
    contestants[step] = temp;
  }
}

void insertionSort(Contestant contestatns[], int n) {
  int j;
  Contestant key;

  for (int i = 1; i < n; i++) {
    key = contestatns[i];
    j = i - 1;

    while (j >= 0 && (contestatns[j].age > key.age ||
                      (contestatns[j].age == key.age &&
                       strcmp(contestatns[j].gender, key.gender) > 0))) {
      contestatns[j + 1] = contestatns[j];
      j = j - 1;
    }

    contestatns[j + 1] = key;
  }
}

void searchByAgeAndGender(Contestant contestants[], int size) {
  int age;
  char gender[GENDER_LENGTH];
  cout << "Enter age: ";
  cin >> age;
  cout << "Enter gender: ";
  cin >> gender;

  for (int contestant = 0; contestant < size; contestant++) {
    if (contestants[contestant].age == age &&
        strcmp(contestants[contestant].gender, gender) == 0) {
      printContestant(contestants[contestant]);
    }
  }
  cout << endl;
}
