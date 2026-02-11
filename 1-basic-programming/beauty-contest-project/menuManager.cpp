#include "menuManager.h"
#include "contestantManager.h"
#include "constants.h"
#include "utils.h"
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

void printMainMenu() {
    cout << "--- MENU ---" << endl;
    cout << "1. Add contestants" << endl;
    cout << "2. Print all contestants" << endl;
    cout << "3. Print youngest contestants or search one by name" << endl;
    cout << "4. Sort by age" << endl;
    cout << "5. Save contestants to file or load them from one" << endl;
    cout << "6. Print contestants sorted by age and name or search contestant by age and gender" << endl;
    cout << "7. Sort contestants into groups and print them or show winners" << endl;
    cout << "8. Leave" << endl;
}

void printSubmenu(int numOfSubmenu, string optionOneText, string optionTwoText) {
    cout << endl;
    cout << "--- Option " << numOfSubmenu <<  " submenu ---" << endl;
    cout << "1. " << optionOneText << endl;
    cout << "2. " << optionTwoText << endl;
    cout << "3. Leave submenu" << endl;
}

void handleSubmenuThree(const Contestant contestants[], int numOfContestants) {
    int optionTHreeSubmenuChoice;
    do {

        do {
           printSubmenu(3, "Print youngest contestants", "Search contestant by name");
            cout << "Your choice: ";
        } while (!isValidInt(optionTHreeSubmenuChoice, 1, 3));

        switch(optionTHreeSubmenuChoice) {
            case 1: printYoungestContestants(contestants, numOfContestants);break;
            case 2: searchContestantByName(contestants, numOfContestants); break;
            case 3:  cout << "You came back to the main menu" << endl; cout << endl; break;
        }
    } while (optionTHreeSubmenuChoice != 3);
}

void handleSubmenuFive(Contestant contestants[], int numOfContestants) {
    int optionFiveSubmenuChoice;
        do {
            do {
                printSubmenu(5, "Save contestants to file" , "Load contestants from file");
                cout << "Your choice: ";
            } while(!isValidInt(optionFiveSubmenuChoice, 1, 3));

        switch (optionFiveSubmenuChoice) {
            case 1: saveToFile(contestants, numOfContestants); break;
            case 2: loadFromFile(contestants, numOfContestants); break;
            case 3: cout << "You came back to the main menu" << endl; cout << endl; break;
        }
    } while (optionFiveSubmenuChoice != 3);
}

void handleSubmenuSix(const Contestant contestants[], int numOfContestants) {
    int optionSixSubmenuChoice;
    do {

        do {
            printSubmenu(6, "Print contestants sorted by age and name", "Search contestant by age and gender");
            cout << "Your choice: ";
        } while (!isValidInt(optionSixSubmenuChoice, 1, 3));

        switch (optionSixSubmenuChoice) {
            case 1: printContestantsSortedByAgeAndName(contestants, numOfContestants); break;
            case 2: searchContestantByAgeAndGender(contestants, numOfContestants); break;
            case 3: cout << "You came back to the main menu" << endl; cout << endl; break;
        }
    } while (optionSixSubmenuChoice != 3);
}

void handleSubmenuSeven(const Contestant contestants[], int numOfContestants) {
    int optionSevenSubmenuChoice;

    do {

        do {
            printSubmenu(7, "Sort contestants into groups by age and print them", "Print winner for every category");
            cout << "Your choice: ";
        } while (!isValidInt(optionSevenSubmenuChoice, 1, 3));

        switch (optionSevenSubmenuChoice) {
            case 1: printContestantsGroupedByAge(contestants, numOfContestants); break;
            case 2: findAndPrintWinnersForAllCategories(contestants, numOfContestants); break;
            case 3: cout << "You came back to the main menu" << endl; break;
        }

    } while (optionSevenSubmenuChoice != 3);
}

int getValidMainMenuChoice() {
    int menuChoice;
    printMainMenu();
    do {
        cout << "Your choice: ";
    } while (!isValidInt(menuChoice, 1 , 8));

    return menuChoice;
}

void app() {
    int menuChoice;
    int countOfContestants = 0;

    Contestant contestants[MAX_NUM_OF_CONTESTANTS] = { };

    loadFromFile(contestants, countOfContestants);

    do {
        menuChoice = getValidMainMenuChoice();

        switch (menuChoice) {
            case 1: addContestants(contestants, countOfContestants); break;
            case 2: printAllContestants(contestants, countOfContestants); break;
            case 3: handleSubmenuThree(contestants, countOfContestants); break;
            case 4: sortByAge(contestants, countOfContestants); break;
            case 5: handleSubmenuFive(contestants, countOfContestants); break;
            case 6: handleSubmenuSix(contestants, countOfContestants); break;
            case 7: handleSubmenuSeven(contestants, countOfContestants); break;
            case 8:
                cout << "Thank you for using the program :)" << endl;
                saveToFile(contestants, countOfContestants);
                break;
        }
    } while (menuChoice != 8);
}

char name[23];
