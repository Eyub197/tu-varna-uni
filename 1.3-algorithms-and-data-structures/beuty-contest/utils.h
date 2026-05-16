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
void printContestant(Contestant contestants[], int indexOfContestant);
int binarySearch(Contestant contestants[], int numOfContestants, char name[30]);
void selectionSort(Contestant contestants[], int size);
void printContestants(Contestant contestants[], int size);
