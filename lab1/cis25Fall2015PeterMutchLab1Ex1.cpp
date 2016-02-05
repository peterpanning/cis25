/**
 * Program Name: cis25Fall2015PeterMutchLab1Ex1.cpp
 * Discussion:   Lab #1 Exercise #1
 * Written By:   Peter Mutch
 * Date:         2015/9/03
*/

#include <iostream>
using namespace std;

//Function Prototypes

void printMyInformation(void);

int getMostOccurredDigit(int);

void menu(void);

int main(){
	printMyInformation();
	menu();
	return 0;
}

void printMyInformation(){
	cout << "CIS 25 - C++ Programming\n";
	cout << "Laney College\n";
	cout << "Peter Mutch\n";
	cout << "\nAssignment Information --\n";
	cout << "  Assignment Number: Lab 01,\n";
	cout << "                     Coding Assignment -- Exercise #1\n";
	cout << "  Written by:        Peter Mutch\n";
	cout << "  Submitted Date:    September 3, 2015\n";
}

int getMostOccurredDigit(int x){
	int Array0[10];
	int mostOccurred;
	int index;

	/*Until x is 0, increment the index of the array that is
	equal to the rightmost digit of x and then remove that digit.*/

	while (x != 0) {
		Array0[x % 10] += 1;
		x /= 10;
	}

	mostOccurred = 0;

	//Check each index of the array to find the index with the highest corresponding value.
	//If two values are tied, we do not change the mostOccurred value.

	for (index = 1; index < 10; index++){
		if (Array0[mostOccurred] < Array0[index]){
			mostOccurred = index;
		}
	}
	return mostOccurred;
}

void menu(){
	int menuChoice;
	int input;
	int result;

	do {
		cout << "\n****************************************\n";
		cout << "*                 MENU                 *\n";
		cout << "*  (1) Calling getMostOccurredDigit()  *\n";
		cout << "*  (2) Quit                            *\n";
		cout << "****************************************\n" << endl;

		cout << "Enter your option (1 or 2): ";

		cin >> menuChoice;

		switch (menuChoice){

            case 1:
                cout << "\nEnter an integer: ";
                cin >> input;
                result = (input < 0)? getMostOccurredDigit(-input) : getMostOccurredDigit(input);
                cout << "\nThe digit occurred most in " << input << " is " << result << "." << endl;
                break;
            case 2:
                cout << "\nWorking Good!" << endl;
                break;
            default:
                cout << "\nPlease enter either 1 or 2.\n" << endl;
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

Satisfied that I was able to find an elegant solution to this problem that only requires one array.

Further development: would it be faster to have an alternative algorithm for inputs less than 10 digits long?

*/
