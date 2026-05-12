#include <pthread.h>

#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <ostream>

#include "constants.h"

using namespace std;

void add(Contestant*& head, int currentNumberOfContestants) {
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

  cout << endl;
}

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

int remove(Contestant*& head) {
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
  const char* names[15] = {"Name: 1",  "Name: 2",  "Name: 3",  "Name: 4",
                           "Name: 5",  "Name: 6",  "Name: 7",  "Name: 8",
                           "Name: 9",  "Name: 10", "Name: 11", "Name: 12",
                           "Name: 13", "Name: 14", "Name: 15"};

  const char* genders[15] = {"m", "f", "m", "f", "m", "m", "f", "m",
                             "m", "f", "m", "m", "f", "m", "m"};

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
