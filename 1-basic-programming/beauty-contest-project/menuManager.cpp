#include "menuManager.h"
#include "contestantManager.h"
#include "constants.h"
#include "utils.h"
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
    int countOfContestants = 28;


    Contestant contestants[MAX_NUM_OF_CONTESTANTS] = {
        {1, "John Smith", 21, "m", 116.0, 120.0, 40.0, 40.0},
        {2, "Emily Jones", 18, "f", 95.4, 95.0, 30.0, 34.0},
        {3, "Michael Brown", 24, "m", 135.2, 125.0, 42.0, 41.0},
        {4, "Jessica Davis", 20, "f", 102.0, 90.0, 28.0, 32.0},
        {5, "David Wilson", 19, "m", 110.0, 130.0, 45.0, 45.0},
        {6, "Sarah Miller", 22, "f", 85.7, 100.0, 32.0, 36.0},
        {7, "Chris Lee", 20, "m", 99.6, 110.0, 35.0, 36.0},
        {8, "Emily Jones", 17, "f", 96.8, 98.0, 31.0, 35.0},
        {9, "Daniel Garcia", 17, "m", 117.1, 115.0, 38.0, 39.0},
        {10, "Laura Rodriguez", 20, "f", 80.1, 92.0, 29.0, 33.0},
        {11, "James White", 23, "m", 120.5, 128.0, 41.0, 42.0},
        {12, "Linda Harris", 20, "f", 88.0, 92.0, 29.0, 33.0},
        {13, "Robert Martinez", 16, "m", 105.0, 110.0, 36.0, 38.0},
        {14, "Patricia Anderson", 25, "f", 110.0, 115.0, 38.0, 40.0},
        {15, "Charles Thomas", 14, "m", 90.0, 100.0, 30.0, 32.0},
        {16, "Jennifer Jackson", 19, "f", 98.0, 105.0, 33.0, 35.0},
        {17, "Joseph Taylor", 22, "m", 112.0, 118.0, 39.0, 41.0},
        {18, "Mary Moore", 15, "f", 92.0, 98.0, 31.0, 33.0},
        {19, "Thomas Martin", 24, "m", 125.0, 130.0, 43.0, 45.0},
        {20, "Karen Thompson", 18, "f", 96.0, 102.0, 32.0, 34.0},
        {21, "Ivan Petrov", 14, "m", 110.0, 110.0, 35.0, 38.0},
        {22, "Maria Ivanova", 16, "f", 108.0, 100.0, 30.0, 35.0},
        {23, "Georgi Dimitrov", 17, "m", 101.0, 120.0, 40.0, 42.0},
        {24, "Elena Stoyanova", 19, "f", 93.0, 105.0, 32.0, 36.0},
        {25, "Petar Georgiev", 20, "m", 120.0, 115.0, 38.0, 40.0},
        {26, "Ivan Petrov", 22, "m", 108.0, 112.0, 36.0, 39.0},
        {27, "Dimitar Angelov", 14, "m", 125.0, 108.0, 34.0, 37.0},
        {28, "Victoria Koleva", 25, "f", 101.0, 102.0, 31.0, 34.0}
    };

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
