#include "constants.h"

void print(Contestant*& head);
int removeEnd(Contestant*& head);
void seed(Contestant*& head, int& currentNumberOfContestants);
void copyFirst10ElementsIntoArray(Contestant*& head, Contestant contestants[]);
void copyAllElementsIntoArray(Contestant*& head, Contestant contestants[]);
void findAndPrintContestantsWithYoungestAge(Contestant*& head);
void addStart(Contestant*& head, int& currentNumberOfContestants);
void addMiddle(Contestant*& head, int& currentNumberOfContestants);
void addEnd(Contestant*& head, int& currentNumberOfContestants);
int removeStart(Contestant*& head);
int removeMiddle(Contestant*& head);
