#include "constants.h"

void handleSort(Contestant*& head, Contestant contestants[]);
void handleSearchByName(Contestant*& head, Contestant contestants[],
                        int numOfContestants);
void handleSortedPrintingByAgeAndName(Contestant*& head,
                                      Contestant contestnats[],
                                      int numOfContestants);
void handleSearchByAgeAndGender(Contestant*& head, Contestant contestants[],
                                int numOfContestants);
void handleSubmenuOperations(Contestant*& head, int numOfContestants);
void handleSubmenuSearches(Contestant*& head, Contestant contestants[],
                           int numOfContestants);

void handleSubmenuLookups(Contestant*& head, Contestant contestants[],
                          int numOfContestants);
int getValidMainMenuChoice();
