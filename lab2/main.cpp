/**
* Program Name: cis25Fall2015PeterMutchLab2Ex1.cpp
* Discussion:   Lab #2 Exercise #1
* Written By:   Peter Mutch
* Date:         2015/9/03
*/

#include <iostream>
using namespace std;

//Function Prototypes

void printMyInformation(void);
void displayDigitInfoUpdatePeterMutch(void);
void callMenu(void);

int main(){
    printMyInformation();
    callMenu();
    return 0;
}

void printMyInformation(){
    cout << "Class Information --\n"
        "  CIS 25 - C++ Programming\n"
        "  Laney College\n"
        "\nAssignment Information --\n"
        "  Assignment Number: Lab 02, - Exercise #1\n"
        "  Written by:        Peter Mutch\n"
        "  Submitted Date:    September 17, 2015\n";
}

void callMenu(){
    int menuChoice;

    do {
        cout << "\n**************************************************\n"
            "*            MENU 02 -- Arrays & Digits          *\n"
            "*  1. Calling displayDigitInfoUpdatePeterMutch() *\n"
            "*  2. Quit                                       *\n"
            "**************************************************\n"

            "Select an option (1 or 2): ";

        cin >> menuChoice;

        switch (menuChoice){
        case 1:
            cout << "\nCalling displayDigitInfoUpdatePeterMutch() -- \n";
            displayDigitInfoUpdatePeterMutch();
            break;
        case 2:
            cout << "\nHaving Fun..." << endl;
            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (menuChoice != 2);
}

void displayDigitInfoUpdatePeterMutch(){
    int arraySize;
    int* inputs;
    int tally[10] = { 0 };
    int i;
    int mostOrLeast;

    cout << "  How many integers (to be worked on)? ";
    cin >> arraySize;
    inputs = new int[arraySize];

    //Assignment loop

    for (i = 0; i < arraySize; i++){
        cout << "    Enter integer #" << (i + 1) << ": ";
        cin >> *(inputs + i);
        if (*(inputs + i) < 0) *(inputs + i) = -*(inputs + i);
    }

    //Tallying loop

    for (i = 0; i < arraySize; i++){
        while (*(inputs + i) != 0){
            tally[(*(inputs + i) % 10)] += 1;
            /* Increments the value of the index of tally
            which is equal to the last digit of the integer.*/
            *(inputs + i) /= 10;
        }
    }

    cout << "\n  Occurrence of all existing digits --\n";

    for (i = 0; i < 10; i++){
        if (tally[i] != 0){
            cout << "    Digit " << i << " : " << tally[i] << "\n";
        }
    }




    cout << "\n  Occurrence of all existing EVEN digits --\n";

    for (i = 0; i < 10; i += 2){
        if (tally[i] != 0){
            cout << "    Digit " << i << " : " << tally[i] << "\n";
        }
    }

    cout << "\n  The even digit(s) that has/have the largest occurrence --";

    mostOrLeast = 0;

    for (i = 0; i < 10; i += 2){
        if (tally[i] > tally[mostOrLeast]) mostOrLeast = i;
    } //Finds the even digit with the largest frequency

    for (i = 0; i < 10; i += 2){
        if (tally[i] == tally[mostOrLeast] && tally[i] != 0) cout << "\n    " << i;
    } //Prints all even digits which have the same frequency

    cout << "\n  With the number of occurrence(s) : " << tally[mostOrLeast];



    cout << "\n\n  The even digit(s) that has/have the smallest occurrence --";

    for (i = 0; i < 10; i += 2){
        if ((tally[i] < tally[mostOrLeast]) && (tally[i] != 0)) mostOrLeast = i;
    } //Finds the even digit with the lowest frequency

    for (i = 0; i < 10; i += 2){
        if (tally[i] == tally[mostOrLeast] && tally[i] != 0) cout << "\n    " << i;
    } //Prints all even digits which have the same frequency

    cout << "\n  With the number of occurrence(s) : " << tally[mostOrLeast];




    cout << "\n\n  Occurrence of all existing ODD digits --\n";

    for (i = 1; i < 10; i += 2){
        if (tally[i] != 0){
            cout << "    Digit " << i << " : " << tally[i] << "\n";
        }
    }

    cout << "\n  The odd digit that has/have the largest occurrence --";

    mostOrLeast = 1;

    for (i = 1; i < 10; i += 2){
        if (tally[i] > tally[mostOrLeast]) mostOrLeast = i;
    } //Finds the odd digit with the highest frequency

    for (i = 1; i < 10; i += 2){
        if (tally[i] == tally[mostOrLeast] && tally[i] != 0) cout << "\n    " << i;
    } //Prints all odd digits which have the same frequency

    cout << "\n  With the number of occurrence(s) : " << tally[mostOrLeast];

    cout << "\n\n  The odd digit(s) that has/have the smallest occurrence --";

    for (i = 1; i < 10; i += 2){
        if ((tally[i] < tally[mostOrLeast]) && (tally[i] != 0)) mostOrLeast = i;
    } //Finds the odd digit with the lowest frequency

    for (i = 1; i < 10; i += 2){
        if (tally[i] == tally[mostOrLeast] && tally[i] != 0) cout << "\n    " << i;
    } //Prints all odd digits which have the same frequency

    cout << "\n  With the number of occurrence(s) : " << tally[mostOrLeast] << "\n\n\n";
}


/* OUTPUT


Class Information --
  CIS 25 - C++ Programming
  Laney College

Assignment Information --
  Assignment Number: Lab 02, - Exercise #1
  Written by:        Peter Mutch
  Submitted Date:    September 17, 2015

**************************************************
*            MENU 02 -- Arrays & Digits          *
*  1. Calling displayDigitInfoUpdatePeterMutch() *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 4

WRONG OPTION!


**************************************************
*            MENU 02 -- Arrays & Digits          *
*  1. Calling displayDigitInfoUpdatePeterMutch() *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 1

Calling displayDigitInfoUpdatePeterMutch() --
  How many integers (to be worked on)? 2
    Enter integer #1: 1230476
    Enter integer #2: 10034850

  Occurrence of all existing digits --
    Digit 0 : 4
    Digit 1 : 2
    Digit 2 : 1
    Digit 3 : 2
    Digit 4 : 2
    Digit 5 : 1
    Digit 6 : 1
    Digit 7 : 1
    Digit 8 : 1

  Occurrence of all existing EVEN digits --
    Digit 0 : 4
    Digit 2 : 1
    Digit 4 : 2
    Digit 6 : 1
    Digit 8 : 1

  The even digit(s) that has/have the largest occurrence --
    0
  With the number of occurrence(s) : 4

  The even digit(s) that has/have the smallest occurrence --
    2
    6
    8
  With the number of occurrence(s) : 1

  Occurrence of all existing ODD digits --
    Digit 1 : 2
    Digit 3 : 2
    Digit 5 : 1
    Digit 7 : 1

  The odd digit that has/have the largest occurrence --
    1
    3
  With the number of occurrence(s) : 2

  The odd digit(s) that has/have the smallest occurrence --
    5
    7
  With the number of occurrence(s) : 1



**************************************************
*            MENU 02 -- Arrays & Digits          *
*  1. Calling displayDigitInfoUpdatePeterMutch() *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 1

Calling displayDigitInfoUpdatePeterMutch() --
  How many integers (to be worked on)? 3
    Enter integer #1: 1230476
    Enter integer #2: 10434950
    Enter integer #3: 9023497

  Occurrence of all existing digits --
    Digit 0 : 4
    Digit 1 : 2
    Digit 2 : 2
    Digit 3 : 3
    Digit 4 : 4
    Digit 5 : 1
    Digit 6 : 1
    Digit 7 : 2
    Digit 9 : 3

  Occurrence of all existing EVEN digits --
    Digit 0 : 4
    Digit 2 : 2
    Digit 4 : 4
    Digit 6 : 1

  The even digit(s) that has/have the largest occurrence --
    0
    4
  With the number of occurrence(s) : 4

  The even digit(s) that has/have the smallest occurrence --
    6
  With the number of occurrence(s) : 1

  Occurrence of all existing ODD digits --
    Digit 1 : 2
    Digit 3 : 3
    Digit 5 : 1
    Digit 7 : 2
    Digit 9 : 3

  The odd digit that has/have the largest occurrence --
    3
    9
  With the number of occurrence(s) : 3

  The odd digit(s) that has/have the smallest occurrence --
    5
  With the number of occurrence(s) : 1



**************************************************
*            MENU 02 -- Arrays & Digits          *
*  1. Calling displayDigitInfoUpdatePeterMutch() *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 1

Calling displayDigitInfoUpdatePeterMutch() --
  How many integers (to be worked on)? 2
    Enter integer #1: -123
    Enter integer #2: 345

  Occurrence of all existing digits --
    Digit 1 : 1
    Digit 2 : 1
    Digit 3 : 2
    Digit 4 : 1
    Digit 5 : 1

  Occurrence of all existing EVEN digits --
    Digit 2 : 1
    Digit 4 : 1

  The even digit(s) that has/have the largest occurrence --
    2
    4
  With the number of occurrence(s) : 1

  The even digit(s) that has/have the smallest occurrence --
    2
    4
  With the number of occurrence(s) : 1

  Occurrence of all existing ODD digits --
    Digit 1 : 1
    Digit 3 : 2
    Digit 5 : 1

  The odd digit that has/have the largest occurrence --
    3
  With the number of occurrence(s) : 2

  The odd digit(s) that has/have the smallest occurrence --
    1
    5
  With the number of occurrence(s) : 1



**************************************************
*            MENU 02 -- Arrays & Digits          *
*  1. Calling displayDigitInfoUpdatePeterMutch() *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 2

Having Fun...





COMMENTS:

No comments.

*/
