/**
* Program Name: cis25Fall2015PeterMutchLab03Ex01.cpp
* Discussion:   Lab #3 Exercise #1
* Written By:   Peter Mutch
* Date:         2015/10/01
*/

#include <iostream>

using namespace std;

//Function Prototypes

void callMenu(void);
void printMyInformation(void);
void getArys(void);
void arrangeArrayPeterMutch(int[], int[], int, int);

void getArys(){

    int *ary1, *ary2;
    int i;
    int size1;
    int size2;

    cout << "\nCreating the first array -\nEnter the array size: ";
    cin >> size1;
    ary1 = new int[size1];
    cout << "Enter the value for\n";
    for(i = 0; i < size1; i++){
        cout << "  Index " << i << ": ";
        cin >> *(ary1 + i);
    }

    cout << "\nCreating the second array -\nEnter the array size: ";
    cin >> size2;
    ary2 = new int[size2];
    cout << "Enter the value for\n";
    for(i = 0; i < size2; i++){
        cout << "  Index " << i << ": ";
        cin >> *(ary2 + i);
    }
    arrangeArrayPeterMutch(ary1, ary2, size1, size2);
}

void arrangeArrayPeterMutch(int *ary1, int *ary2, int size1, int size2){

    int* ary3;
    int temp;
    int i, j, k;
    int swaps = 0;

    cout << "\n Calling arrangeArrayPeterMutch() --\n";

    cout << "  Original Arrays";

    cout << "\n    Array #1:";
    for (i = 0; i < size1; i++){
        cout << "  " << *(ary1 + i);
    }

    cout <<"\n    Array #2:";
    for (j=0; j< size2; j++){
        cout << "  " << *(ary2 + j);
    }

    (size1 > size2)? temp = 2 * size2 : temp = 2 * size1;
    ary3 = new int[temp]; //make ary3 twice as large as the
                                //smaller of the two arrays

    for (i = 0, j = 0, k = 0; i < size1; i++){

        if(*(ary1 + i) % 2 == 0){             //if there's an even
                                //number in the first array's index

            while(j < size2 && *(ary2 + j) % 2 == 0) j++;
            //as long as you haven't reached the end of the
            //second and the value in your current index is
            //even, don't switch, check the next one

            if (*(ary2 + j) % 2){ //if the value in the
                                    //second's index is odd
                *(ary3 + k) = *(ary1 + i);
                k++;                 //save the array values
                *(ary3 + k) = *(ary2 + j);
                k++;

                temp = *(ary1 + i);         //swap the values
                *(ary1 + i) = *(ary2 + j);
                *(ary2 + j) = temp;
                swaps++;             //increase the swap counter
                j++;             //start the next check with the
            }                   //next index of the second array
        }
    }

    cout << "\nUpdated Arrays:";

    cout << "\n    Array #1:";
    for (i = 0; i < size1; i++){
        cout << "  " << *(ary1 + i);
    }

    cout <<"\n    Array #2:";
    for (j=0; j< size2; j++){
        cout << "  " << *(ary2 + j);
    }

    if(swaps){ //if there is at least one swap
        cout << "\n\nSwapping Info - ";
        for (k = 0; k < swaps; k++){
            cout << "\n  Array #1 value " << *(ary3 + k) <<
            " swapped with Array #2 value " << *(ary3 + (k + 1));
        }
        cout << "\n\n\nThere is/are " << swaps << " swap(s).\n\n\n";
    }
    else cout << "\n\n";
}



void callMenu(){
    int menuChoice;

    do {
        cout << "\n**************************************************\n"
            "*            MENU 03 -- Arrays                   *\n"
            "*  1. Calling arrangeArrayPeterMutch()           *\n"
            "*  2. Quit                                       *\n"
            "**************************************************\n"

            "Select an option (1 or 2): ";

        cin >> menuChoice;

        switch (menuChoice){
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

void printMyInformation(){
    cout << "Class Information --\n"
        "  CIS 25 - C++ Programming\n"
        "  Laney College\n"
        "\nAssignment Information --\n"
        "  Assignment Number: Lab 02, - Exercise #1\n"
        "  Written by:        Peter Mutch\n"
        "  Submitted Date:    October 1, 2015\n";
}

int main()
{
    printMyInformation();
    callMenu();
    return 0;
}


/* Output

Class Information --
  CIS 25 - C++ Programming
  Laney College

Assignment Information --
  Assignment Number: Lab 02, - Exercise #1
  Written by:        Peter Mutch
  Submitted Date:    October 1, 2015

**************************************************
*            MENU 03 -- Arrays                   *
*  1. Calling arrangeArrayPeterMutch()           *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 4

WRONG OPTION!


**************************************************
*            MENU 03 -- Arrays                   *
*  1. Calling arrangeArrayPeterMutch()           *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 1

Creating the first array -
Enter the array size: 4
Enter the value for
  Index 0: 21
  Index 1: 41
  Index 2: -21
  Index 3: 81

Creating the second array -
Enter the array size: 2
Enter the value for
  Index 0: 1
  Index 1: 4

 Calling arrangeArrayPeterMutch() --
  Original Arrays
    Array #1:  21  41  -21  81
    Array #2:  1  4
Updated Arrays:
    Array #1:  21  41  -21  81
    Array #2:  1  4


**************************************************
*            MENU 03 -- Arrays                   *
*  1. Calling arrangeArrayPeterMutch()           *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 1

Creating the first array -
Enter the array size: 5
Enter the value for
  Index 0: 2
  Index 1: 4
  Index 2: -2
  Index 3: 81
  Index 4: 8

Creating the second array -
Enter the array size: 3
Enter the value for
  Index 0: 1
  Index 1: 4
  Index 2: -21

 Calling arrangeArrayPeterMutch() --
  Original Arrays
    Array #1:  2  4  -2  81  8
    Array #2:  1  4  -21
Updated Arrays:
    Array #1:  1  -21  -2  81  8
    Array #2:  2  4  4

Swapping Info -
  Array #1 value 2 swapped with Array #2 value 1
  Array #1 value 1 swapped with Array #2 value 4


There is/are 2 swap(s).



**************************************************
*            MENU 03 -- Arrays                   *
*  1. Calling arrangeArrayPeterMutch()           *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 1

Creating the first array -
Enter the array size: 3
Enter the value for
  Index 0: 1
  Index 1: -1
  Index 2: -2

Creating the second array -
Enter the array size: 5
Enter the value for
  Index 0: 2
  Index 1: 3
  Index 2: -2
  Index 3: 81
  Index 4: 8

 Calling arrangeArrayPeterMutch() --
  Original Arrays
    Array #1:  1  -1  -2
    Array #2:  2  3  -2  81  8
Updated Arrays:
    Array #1:  1  -1  3
    Array #2:  2  -2  -2  81  8

Swapping Info -
  Array #1 value -2 swapped with Array #2 value 3


There is/are 1 swap(s).



**************************************************
*            MENU 03 -- Arrays                   *
*  1. Calling arrangeArrayPeterMutch()           *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 1

Creating the first array -
Enter the array size: 5
Enter the value for
  Index 0: 21
  Index 1: 41
  Index 2: -2
  Index 3: 81
  Index 4: 8

Creating the second array -
Enter the array size: 4
Enter the value for
  Index 0: 10
  Index 1: 41
  Index 2: 181
  Index 3: 401

 Calling arrangeArrayPeterMutch() --
  Original Arrays
    Array #1:  21  41  -2  81  8
    Array #2:  10  41  181  401
Updated Arrays:
    Array #1:  21  41  41  81  181
    Array #2:  10  -2  8  401

Swapping Info -
  Array #1 value -2 swapped with Array #2 value 41
  Array #1 value 41 swapped with Array #2 value 8


There is/are 2 swap(s).



**************************************************
*            MENU 03 -- Arrays                   *
*  1. Calling arrangeArrayPeterMutch()           *
*  2. Quit                                       *
**************************************************
Select an option (1 or 2): 2

Having Fun...


*/


/* Comments:

No comments.

*/
