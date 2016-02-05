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
    cout << "CIS 25 - C++ Programming\n"
        "Laney College\n"
        "Peter Mutch\n"
        "\nAssignment Information --\n"
        "  Assignment Number: Lab 02,\n"
        "                     Coding Assignment -- Exercise #1\n"
        "  Written by:        Peter Mutch\n"
        "  Submitted Date:    September 3, 2015\n";
}

void displayDigitInfoUpdatePeterMutch(){
    int size;
    int* inputs;
    int tally[10] = {0};
    int i;
    int mostOrLeast;


    cout << "  How many integers (to be worked on)? ";
    cin >> size;
    inputs = new int[size];

    //Assignment loop
    for (i = 0; i < size; i++){
        cout << "Enter integer #" << (i + 1) << ": ";
        cin >> *(inputs + i);
    }

    //Tallying loop
    /*for (i = 0; i < size; i++){
        while (*(inputs + i) != 0){
            tally[(*(inputs + i) % 10)] += 1;
            // Increments the value of the index of tally
            //which is equal to the last digit of the integer.
            *(inputs + i) /= 10;
        }
    }*/


    cout << "Occurrence of all existing digits --\n";
    getDigitOccurence(0, 1);
    printOccurrenceArray(0, 1);

    /*for (i = 0; i < 10; i++){
        if (tally[i] != 0){
            cout << "Digit " << i << " : " << tally[i] << "\n";
        }
    }*/


    cout << "Occurrence of all existing EVEN digits --\n";
    getDigitOccurence(0, 2);
    printOccurrenceArray(0, 2);

    /*for (i = 0; i < 10; i += 2){
        if (tally[i] != 0){
            cout << "Digit " << i << " : " << tally[i] << "\n";
        }
    }*/


    //Most or least occurring even digit

    getMostOrLeastOddOrEven(1, 0);
    cout << "The even digit that has/have the largest occurrence --\n";
    cout << "  " << mostOrLeast;
    cout << "\nWith the number of occurrence(s) : " << tally[mostOrLeast];

    /*mostOrLeast = 0;
    for (i = 0; i < 10; i += 2){
        if (tally[i] >= tally[mostOrLeast]) mode = i;
    }*/



    cout << "Occurrence of all existing ODD digits --\n";

    getDigitOccurence(1, 2);
    printOccurrenceArray(1, 2);

    /*for (i = 1; i < 10; i+=2){
        if (tally[i] != 0){
            cout << "Digit " << i << " : " << tally[i] << "\n";
            if (tally[i] > tally[mostOrLeast]) mostOrLeast = i;
        }
    }*/


    //Most/least occurring odd digit

    getMostOrLeastOddOrEven(1, 1);
    cout << "The odd digit that has/have the largest occurrence --\n";
    cout << "  " << mostOrLeast;
    cout << "\nWith the number of occurrence(s) : " << tally[mostOrLeast];

    /*mostOrLeast = 0;
    for (i = 1; i < 10; i += 2){
        if (tally[i] >= tally[mostOrLeast]) mostOrLeast = i;
    }*/
}

void getMostOrLeastOddOrEven (int maxOrMin, int i){
    mostOrLeast = 0;
    if (maxOrMin == 1){
        //start at oddOrEven and increment by 2 with >
        for (i < 10; i += 2){
        if (tally[i] >= tally[mostOrLeast]) mostOrLeast = i;
        }
    }
    else{
        //start at oddOrEven and increment by 2 with <
        for (i < 10; i += 2){
        if (tally[i] <= tally[mostOrLeast]) mostOrLeast = i;
        }
    }
}

void getDigitOccurence(int i, int increment){
    for (i < size; i += increment){
        while (*(inputs + i) != 0){
            tally[(*(inputs + i) % 10)] += 1;
            /* Increments the value of the index of tally
            which is equal to the last digit of the integer.*/
            *(inputs + i) /= 10;
        }
    }
}

void printOccurrenceArray(int i, int increment){
    for (i < 10; i += increment){
        if (tally[i] != 0){
            cout << "Digit " << i << " : " << tally[i] << "\n";
        }
    }
}

/*int getMostOccurredDigit(int x){
    int Array0[10] = {0};
    int mostOccurred;
    int index;

    /*Until x is 0, increment the index of the array that is
    equal to the rightmost digit of x and then remove that digit.

    while (x != 0) {
        Array0[x % 10] += 1;
        x /= 10;
    }

    mostOccurred = 0;

    Check each index of the array to find the index with the
    highest corresponding value. If two values are tied, we do
    not change the mostOccurred value.

    for (index = 1; index < 10; index++){
        if (Array0[mostOccurred] < Array0[index]){
            mostOccurred = index;
        }
    }
    return mostOccurred;
}*/

void callMenu(){
    int menuChoice;
    //int result;

    do {
        cout << "\n*****************************************************\n"
            "*            MENU 02 -- Arrays & Digits             *\n"
            "*  1. Calling displayDigitInfoUpdatePeterMutch()    *\n"
            "*  2. Quit                                          *\n"
            "*****************************************************\n"

            "\nEnter your option (1 or 2): ";

        cin >> menuChoice;

        switch (menuChoice){
        case 1:
            cout << "\nCalling displayDigitInfoUpdatePeterMutch() -- \n";
            displayDigitInfoUpdatePeterMutch();
            break;
        case 2:
            cout << "\nWorking Good!" << endl;
            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (menuChoice != 2);
}


/**

OUTPUT:

CIS 25 - C++ Programming
Laney College
Peter Mutch

Assignment Information --
Assignment Number: Lab 01,
Coding Assignment -- Exercise #1
Written by:        Peter Mutch
Submitted Date:    September 3, 2015

****************************************
*                 MENU                 *
*  (1) Calling getMostOccurredDigit()  *
*  (2) Quit                            *
****************************************

Enter your option (1 or 2): 1

Enter an integer: 123444034

The digit occurred most in 123444034 is 4.

****************************************
*                 MENU                 *
*  (1) Calling getMostOccurredDigit()  *
*  (2) Quit                            *
****************************************

Enter your option (1 or 2): 1

Enter an integer: -390345505

The digit occurred most in -390345505 is 5.

****************************************
*                 MENU                 *
*  (1) Calling getMostOccurredDigit()  *
*  (2) Quit                            *
****************************************

Enter your option (1 or 2): 1

Enter an integer: 39034550

The digit occurred most in 39034550 is 0.

****************************************
*                 MENU                 *
*  (1) Calling getMostOccurredDigit()  *
*  (2) Quit                            *
****************************************

Enter your option (1 or 2): 2

Working Good!

*/


/**

COMMENTS:

Satisfied that I was able to find an elegant solution to this problem
that only requires one array.

Further development: would it be faster to have an alternative
algorithm for inputs less than 10 digits long?

*/
