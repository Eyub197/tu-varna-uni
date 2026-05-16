#include <iostream>
#include <limits>

#include "list.h"
using namespace std;

void exchangeSort(Contestant contestants[]);
void clearBuffer();
bool isValidInt(int& result, int min, int max);
void printMainMenu();
void printSubmenu(int numOfSubmenu, string optionOneText, string optionTwoText);
int getValidMainMenuChoice();
int binarySearch(Contestant contestants[], int numOfContestants, char name[30]);
void selectionSort(Contestant contestants[], int size);
void printContestants(Contestant contestants[], int size);
void printContestantWithIndex(Contestant contestants[], int indexOfContestant);
void searchByAgeAndGender(Contestant contestants[], int size);
void insertionSort(Contestant contestatns[], int n);
