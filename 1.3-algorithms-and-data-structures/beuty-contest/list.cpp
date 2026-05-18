#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <ostream>

#include "constants.h"

using namespace std;

void printTableHeader() {
  cout << left << setw(10) << "Number" << setw(20) << "Name" << setw(5) << "Age"
       << setw(8) << "Gender" << setw(20) << endl;
  cout << setfill('-') << setw(138) << "" << setfill(' ') << endl;
}

void print(Contestant*& head) {
  Contestant* helper = head;
  cout << endl;
  printTableHeader();
  if (!head) return;

  while (helper) {
    cout << setw(10) << helper->number;
    cout << setw(20) << helper->name;
    cout << setw(5) << helper->age;
    cout << setw(8) << helper->gender;
    helper = helper->next;
    cout << endl;
  }
}

void addStart(Contestant*& head, int& currentNumberOfContestants) {
  int newNumber;
  char name[NAME_MAX];
  int age;
  char gender[GENDER_LENGTH];
  int contestantsToAdd;

  cout << "Enter how many contestants you want to add: ";
  cin >> contestantsToAdd;

  if (currentNumberOfContestants + contestantsToAdd > MAX_NUM_OF_CONTESTANTS) {
    cout << "You cant add that much of contestants the maximum is"
         << MAX_NUM_OF_CONTESTANTS;

    return;
  }

  for (int contestant = 0; contestant < contestantsToAdd; contestant++) {
    cout << "Entering contestnant number " << contestant + 1 << endl;
    cout << endl;

    Contestant *helper = head, *newContestant = head;
    newContestant = new Contestant;

    cout << "Enter a number: ";
    cin >> newNumber;
    newContestant->number = newNumber;

    cout << "Enter  a name: ";
    cin >> name;
    strcpy(newContestant->name, name);

    cout << "Enter an age: ";
    cin >> age;
    newContestant->age = age;

    cout << "Enter a gender (m or f) ";
    cin >> gender;
    strcpy(newContestant->gender, gender);
    newContestant->next = helper;
    head = newContestant;

    cout << endl;
  }
  currentNumberOfContestants += contestantsToAdd;
}

void addMiddle(Contestant*& head, int& currentNumberOfContestants) {
  int newNumber;
  char name[NAME_MAX];
  int age;
  char gender[GENDER_LENGTH];
  int contestantsToAdd;
  int numberToAddAfter;

  cout << "Enter the number after which you want to add the contestant: ";
  cin >> numberToAddAfter;

  cout << "Enter how many contestants you want to add: ";
  cin >> contestantsToAdd;

  if (currentNumberOfContestants + contestantsToAdd > MAX_NUM_OF_CONTESTANTS) {
    cout << "You cant add that much of contestants the maximum is"
         << MAX_NUM_OF_CONTESTANTS;

    return;
  }

  for (int contestant = 0; contestant < contestantsToAdd; contestant++) {
    cout << "Entering contestnant number " << contestant + 1 << endl;
    cout << endl;

    Contestant *helper = head, *newContestant = head;
    newContestant = new Contestant;

    cout << "Enter a number: ";
    cin >> newNumber;
    newContestant->number = newNumber;

    cout << "Enter  a name: ";
    cin >> name;
    strcpy(newContestant->name, name);

    cout << "Enter an age: ";
    cin >> age;
    newContestant->age = age;

    cout << "Enter a gender (m or f) ";
    cin >> gender;

    strcpy(newContestant->gender, gender);

    while (helper->number != numberToAddAfter) helper = helper->next;
    newContestant->next = helper->next;
    helper->next = newContestant;
  }

  currentNumberOfContestants += contestantsToAdd;
  cout << endl;
}

void addEnd(Contestant*& head, int& currentNumberOfContestants) {
  int newNumber;
  char name[NAME_MAX];
  int age;
  char gender[GENDER_LENGTH];
  int contestantsToAdd;

  cout << "Enter how many contestants you want to add: ";
  cin >> contestantsToAdd;

  if (currentNumberOfContestants + contestantsToAdd > MAX_NUM_OF_CONTESTANTS) {
    cout << "You cant add that much of contestants the maximum is"
         << MAX_NUM_OF_CONTESTANTS;

    return;
  }

  for (int contestant = 0; contestant < contestantsToAdd; contestant++) {
    cout << "Entering contestnant number " << contestant + 1 << endl;
    cout << endl;

    Contestant *helper = head, *newContestant = head;
    newContestant = new Contestant;

    cout << "Enter a number: ";
    cin >> newNumber;
    newContestant->number = newNumber;

    cout << "Enter  a name: ";
    cin >> name;
    strcpy(newContestant->name, name);

    cout << "Enter an age: ";
    cin >> age;
    newContestant->age = age;

    cout << "Enter a gender (m or f) ";
    cin >> gender;
    strcpy(newContestant->gender, gender);
    newContestant->next = NULL;

    if (head) {
      while (helper->next) {
        helper = helper->next;
      }
      helper->next = newContestant;
    } else {
      head = newContestant;
    }
  }

  currentNumberOfContestants += contestantsToAdd;
  cout << endl;
}

int removeStart(Contestant*& head) {
  Contestant* helper = head;

  if (head) {
    head = head->next;
    delete helper;
    return 1;
  } else
    return 0;
}

int removeMiddle(Contestant*& head) {
  Contestant *contestantToRemove = NULL, *helper = head;
  int k;
  cout << "Enter a number to remove: ";
  cin >> k;

  if (head) {
    if (head->number == k) {
      head = head->next;
      delete helper;
      return 1;
    }

    while (helper->number != k) {
      contestantToRemove = helper;
      helper = helper->next;
    }

    contestantToRemove->next = helper->next;
    delete helper;
    return 1;
  } else
    return 0;
}

int removeEnd(Contestant*& head) {
  Contestant *contestantToRemove = NULL, *helper = head;

  if (head) {
    if (helper->next) {
      while (helper->next) {
        contestantToRemove = helper;
        helper = helper->next;
      }
      contestantToRemove->next = NULL;
    } else
      head = NULL;
    delete helper;
    return 1;
  } else
    return 0;
}

void seed(Contestant*& head, int& numOfContestants) {
  const char* names[15] = {"Emma",      "George",  "Sophia",   "Michael",
                           "Olivia",    "William", "Isabella", "Robert",
                           "Mia",       "Thomas",  "Ava",      "Daniel",
                           "Charlotte", "Anthony", "Lily"};

  const char* genders[15] = {"f", "m", "f", "m", "f", "m", "f", "m",
                             "f", "m", "f", "m", "f", "m", "f"};

  const int ages[15] = {14, 22, 15, 20, 18, 16, 19, 17,
                        14, 21, 15, 18, 20, 16, 17};

  for (int contestant = 0; contestant < 15; contestant++) {
    Contestant *helper = head, *newContestant = head;

    newContestant = new Contestant;
    newContestant->number = contestant + 1;
    strcpy(newContestant->name, names[contestant]);
    newContestant->age = ages[contestant];

    strcpy(newContestant->gender, genders[contestant]);
    newContestant->next = NULL;

    if (head) {
      while (helper->next) {
        helper = helper->next;
      }
      helper->next = newContestant;
    } else {
      head = newContestant;
    }
  }

  numOfContestants += 15;
}

void copyFirst10ElementsIntoArray(Contestant*& head, Contestant contestants[]) {
  Contestant* helper = head;
  int count = 0;

  while (helper && count < 10) {
    contestants[count] = *helper;
    helper = helper->next;
    count++;
  }
}

void copyAllElementsIntoArray(Contestant*& head, Contestant contestants[]) {
  Contestant* helper = head;
  int count = 0;

  while (helper) {
    contestants[count] = *helper;
    helper = helper->next;
    count++;
  }
}

void findAndPrintContestantsWithYoungestAge(Contestant*& head) {
  Contestant* helper = head;
  int minAge = head->age;

  while (helper) {
    if (helper->age < minAge) minAge = helper->age;
    helper = helper->next;
  }

  helper = head;
  while (helper) {
    if (helper->age == minAge) {
      cout << setw(10) << helper->number;
      cout << setw(20) << helper->name;
      cout << setw(5) << helper->age;
      cout << setw(8) << helper->gender;
      cout << endl;
      helper = helper->next;
    } else
      helper = helper->next;
  }
}
