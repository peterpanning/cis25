/**
* Program Name: cis25Fall2015PeterMutchLab04Ex1.cpp
* Discussion:   Lab #4 Exercise #1
* Written By:   Peter Mutch
* Date:         2015/10/03
*/

#include <iostream>

using namespace std;

void callMenu(void);
void printMyInformation(void);
void getArys(void);
int* makeArray(void);
int arrangeMultipleArraysPeterMutch(int**, int);

void callMenu() {

    int menuChoice;

    do {
        cout << "\n*************************************************\n"
            "*            MENU 04 -- Arrays                  *\n"
            "*  1. Calling arrangeMultipleArraysPeterMutch() *\n"
            "*  2. Quit                                      *\n"
            "*************************************************\n"

            "Select an option (1 or 2): ";

        cin >> menuChoice;

        switch (menuChoice) {
        case 1:
            getArys();
            break;
        case 2:
            cout << "\nHaving Fun..." << endl;
            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (menuChoice != 2);
}

void printMyInformation() {
    cout << "Class Information --\n"
        "  CIS 25 - C++ Programming\n"
        "  Laney College\n"
        "\nAssignment Information --\n"
        "  Assignment Number: Lab 04, - Exercise #1\n"
        "  Written by:        Peter Mutch\n"
        "  Submitted Date:    October 8, 2015\n";
}

void getArys() {

    int **metaArray;
    int i, j;
    int size0;
    int swaps;

    cout << "\nSetting up data before calling"
            " ArrangeMultipleArraysPeterMutch() --";
    cout << "\n\nHow many arrays of int (treating these as "
            "arrays of int? ";
    cin >> size0;

    metaArray = new int*[size0];

    for (i = 0; i < size0; i++) {//create each inner array, assign
        cout << "\nCreating array index # " << i;
        *(metaArray + i) = makeArray();

        cout << "\nFor array index #" << i << endl;
        for (j = 0; j < (*(*(metaArray + i)) + 1); j++) {
            cout << " Element index #" << j << " : " <<
                *(*(metaArray + i) + j) << endl;
        }
    }

    cout << "\nConfirming before working through with swapping --";
    cout << "\n\nThere is/are " << size0 << " array(s).";

    for (i = 0; i < size0; i++) {
        cout << "\n\nThe current array #" << (i + 1) << " has "
            << ((*(*(metaArray + i ))) + 1) << " element(s).\n..";

            for (j = 0; j < ((*(*(metaArray + i))) + 1); j++) {
                cout << "Element index #" << j << " : " <<
                    *(*(metaArray + i) + j) << "\n  ";
            }
    }

    cout << "\nCalling arrangeMultipleArraysPeterMutch() --";
    swaps = arrangeMultipleArraysPeterMutch(metaArray, size0);

    cout << "\n\n\nDisplaying outside of "
    "arrangeMultipleArraysPeterMutch() -\n";

    for (i = 0; i < size0; i++) {
        cout << "\n\nThe updated array #" << (i + 1) << " has "
            << (*(*(metaArray + i)) + 1) <<  " element(s).";

            for (j = 0; j <= *(*(metaArray +i)); j++) {
                cout << "\n Element index #" << j << " : " <<
                    *(*(metaArray + i) + j);
            }
    }

    if (swaps > 0) cout << "\n\nThere is/are " << swaps << " swap(s).\n\n\n";

    for (i = 0; i < size0; i++) {
        delete[] *(metaArray + i);
    }

    delete[] metaArray;

    return;
}

int* makeArray() {
    int* newArray;
    int newArraySize;
    int i;

    cout << "\n\n How many value(s)? ";
    cin >> newArraySize;
    newArray = new int[++newArraySize];
    *(newArray) = (newArraySize - 1);

    for (i = 1; i < newArraySize; i++) {
        cout << "\n  Enter the value for element at index "
            << i << " : ";
        cin >> *(newArray + i);
    }

    return newArray;

}

int arrangeMultipleArraysPeterMutch(int** metaArray, int size0) {

    int temp;
    int i, k;
    int j = 1;
    int swaps = 0;
    bool swapped = false;

    cout << "\n\n\n  Displaying inside arrangeMultipleArraysPeterMutch()-";

    for (i = 1; i <= **metaArray; i++) {
        swapped = false;
        if(*((*metaArray) + i) % 2 == 0) {
            while ((j < size0) && (!swapped)) {
                k = 1;
                while ((k <= *(*(metaArray + j))) && (!swapped)) {
                    if (*(*(metaArray +j ) + k) % 2 !=0) {
                        cout << "\n    Array #1 value " <<
                        *((*metaArray) + i ) <<
                        " is swapped with Array #"
                        << (j + 1) << " value " <<
                        *(*(metaArray + j) + k);

                        temp = *((*metaArray) +i);
                        *((*metaArray) + i) = *(*(metaArray + j) + k);
                        *(*(metaArray + j) + k) = temp;

                        swapped = true;
                        swaps++;
                    }
                    k++;
                }
                if (k > *(*(metaArray + j))) {
                    j++;
                }
            }
        }
    } return swaps;
}


int main () {
    printMyInformation();
    callMenu();

    return 0;
}

// OUTPUT:

/*

Class Information --
  CIS 25 - C++ Programming
  Laney College

Assignment Information --
  Assignment Number: Lab 04, - Exercise #1
  Written by:        Peter Mutch
  Submitted Date:    October 8, 2015

*************************************************
*            MENU 04 -- Arrays                  *
*  1. Calling arrangeMultipleArraysPeterMutch() *
*  2. Quit                                      *
*************************************************
Select an option (1 or 2): 4

WRONG OPTION!


*************************************************
*            MENU 04 -- Arrays                  *
*  1. Calling arrangeMultipleArraysPeterMutch() *
*  2. Quit                                      *
*************************************************
Select an option (1 or 2): 1

Setting up data before calling ArrangeMultipleArraysPeterMutch() --

How many arrays of int (treating these as arrays of int? 3

Creating array index # 0

 How many value(s)? 6

  Enter the value for element at index 1 : 1

  Enter the value for element at index 2 : -23

  Enter the value for element at index 3 : 18

  Enter the value for element at index 4 : 27

  Enter the value for element at index 5 : -36

  Enter the value for element at index 6 : 45

For array index #0
 Element index #0 : 6
 Element index #1 : 1
 Element index #2 : -23
 Element index #3 : 18
 Element index #4 : 27
 Element index #5 : -36
 Element index #6 : 45

Creating array index # 1

 How many value(s)? 3

  Enter the value for element at index 1 : 4

  Enter the value for element at index 2 : -17

  Enter the value for element at index 3 : 8

For array index #1
 Element index #0 : 3
 Element index #1 : 4
 Element index #2 : -17
 Element index #3 : 8

Creating array index # 2

 How many value(s)? 2

  Enter the value for element at index 1 : -1

  Enter the value for element at index 2 : -3

For array index #2
 Element index #0 : 2
 Element index #1 : -1
 Element index #2 : -3

Confirming before working through with swapping --

There is/are 3 array(s).

The current array #1 has 7 element(s).
..Element index #0 : 6
  Element index #1 : 1
  Element index #2 : -23
  Element index #3 : 18
  Element index #4 : 27
  Element index #5 : -36
  Element index #6 : 45


The current array #2 has 4 element(s).
..Element index #0 : 3
  Element index #1 : 4
  Element index #2 : -17
  Element index #3 : 8


The current array #3 has 3 element(s).
..Element index #0 : 2
  Element index #1 : -1
  Element index #2 : -3

Calling arrangeMultipleArraysPeterMutch() --



  Displaying inside arrangeMultipleArraysPeterMutch()-
    Array #1 value 18 is swapped with Array #2 value -17
    Array #1 value -36 is swapped with Array #3 value -1


Displaying outside of arrangeMultipleArraysPeterMutch() -


The updated array #1 has 7 element(s).
 Element index #0 : 6
 Element index #1 : 1
 Element index #2 : -23
 Element index #3 : -17
 Element index #4 : 27
 Element index #5 : -1
 Element index #6 : 45

The updated array #2 has 4 element(s).
 Element index #0 : 3
 Element index #1 : 4
 Element index #2 : 18
 Element index #3 : 8

The updated array #3 has 3 element(s).
 Element index #0 : 2
 Element index #1 : -36
 Element index #2 : -3

There is/are 2 swap(s).



*************************************************
*            MENU 04 -- Arrays                  *
*  1. Calling arrangeMultipleArraysPeterMutch() *
*  2. Quit                                      *
*************************************************
Select an option (1 or 2): 2

Having Fun...

*/



// COMMENTS:

/*

For an exercise in pointer notation and concepts, this lab was
painstakingly tedious, long, and difficult to build
incrementally. The process of looping, creating arrays, and
swapping values was also not dramatically different from previous
labs, so there was no satisfaction of mastering interesting
and challenging new concepts or creating something
exciting--just rigamarole busywork that, while undoubtedly
easy to write, measures up to some of the least satisfying
coursework ever completed.

I hope you find the increased effort that I put into this
comments section a reflection of my thorough understanding
of the relevant subject material.

*/
