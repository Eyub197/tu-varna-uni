#pragma once
#include "constants.h"

void addContestants(Contestant contestants[], int &countOfContestants);
void printAllContestants(const Contestant contestants[], int numOfContestants);
void printYoungestContestants(const Contestant contestants[], int numOfContestants);
void searchContestantByName(const Contestant contestants[], int numOfContestants);
void sortByAge(Contestant contestants[], int numOfContestants);
void saveToFile(const Contestant contestants[], int numOfContestants);
void loadFromFile(Contestant contestants[], int &numOfContestants);
void printContestantsSortedByAgeAndName(const Contestant contestants[], int numOfContestants);
void searchContestantByAgeAndGender(const Contestant contestants[], int numOfContestants);
void sortAndPrintContestantsGroupedByAge(const Contestant contestants[], int numOfContestants);
void findWinnerForCategory(const Contestant contestants[], int numOfContestants);
void printContestantsGroupedByAge(const Contestant contestants[], int numOfContestants);
void findAndPrintWinnersForAllCategories(const Contestant contestants[], int numOfContestants);
