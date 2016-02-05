/**
* Program Name: cis25Fall2015PeterMutchLab5Ex1.cpp
* Discussion:   Lab #5 Exercise #1
* Written By:   Peter Mutch
* Date:         2015/11/12
*/

#include <iostream>
#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"

using namespace std;

void printMyInformation(void);
void displayMainMenu(void);
void displayInitializingMenu(int&, bool&, FractionPeterMutch**, FractionPeterMutch**);
void displayAddingMenu(int&, FractionPeterMutch**, FractionPeterMutch**, FractionPeterMutch**);
void displaySubtractingMenu(int&, FractionPeterMutch**, FractionPeterMutch**, FractionPeterMutch**);
void displayMultiplyingMenu(int&, FractionPeterMutch**, FractionPeterMutch**, FractionPeterMutch**);
void displayDividingMenu(int&, FractionPeterMutch**, FractionPeterMutch**, FractionPeterMutch**);
void displayPrintingMenu(int&, FractionPeterMutch**, FractionPeterMutch**, FractionPeterMutch**);

//void init(FractionPeterMutch** fractionL, FractionPeterMutch** fractionR);


int main() {
	printMyInformation();
	displayMainMenu();
	return 0;
}

void printMyInformation() {
	cout << "CIS 25 -- C++ Programming"
		<< "\nLaney College"
		<< "\nPeter Mutch"
		<< "\n\nAssignment Information --"
		<< "\n  Assignment Number: Lab 5,"
		<< "\n                     Exercise # 1"
		<< "\n  Written by:        Peter Mutch"
		<< "\n  Due Date:          2015-11-05";
}

void displayMainMenu() {
	int option;
	bool isInitialized = false; //Shows whether fractions have been initialized
	FractionPeterMutch *fractionL = nullptr;  //Set up pointers to fractions
	FractionPeterMutch *fractionR = nullptr; //so they can be initialized
	FractionPeterMutch *result = nullptr;

	do {
		do {
			cout << "\n*******************"
				<< "\n*        MENU     *"
				<< "\n*                 *"
				<< "\n* 1. Initializing *"
				<< "\n* 2. Adding       *"
				<< "\n* 3. Subtracting  *"
				<< "\n* 4. Multiplying  *"
				<< "\n* 5. Dividing     *"
				<< "\n* 6. Printing     *"
				<< "\n* 7. Quit         *"
				<< "\n*******************"
				<< "\nSelect an option (use integer value only): ";
			cin >> option;
			if (!isInitialized && option != 1) cout << "Not a proper call as no fractions are available!";
		} while (!isInitialized && option != 1);

		switch (option) {
		case 1:
			cout << "\nCalling Initializing Menu" << endl;
			displayInitializingMenu(option, isInitialized, &fractionL, &fractionR);
			break;
		case 2:
			cout << "\nCalling Adding Menu" << endl;
			displayAddingMenu(option, &fractionL, &fractionR, &result);
			break;
		case 3:
			cout << "\nCalling Subtracting Menu" << endl;
			displaySubtractingMenu(option, &fractionL, &fractionR, &result);
			break;
		case 4:
			cout << "\nCalling Multiplying Menu" << endl;
			displayMultiplyingMenu(option, &fractionL, &fractionR, &result);
			break;
		case 5:
			if ((*fractionR).getNum() == 0) {
				cout << "Cannot divide by zero!";
			}
			else {
				cout << "\nCalling Dividing Menu" << endl;
				displayDividingMenu(option, &fractionL, &fractionR, &result);
			}
			break;
		case 6:
			cout << "\nCalling Printing Menu" << endl;
			displayPrintingMenu(option, &fractionL, &fractionR, &result);
			break;
		case 7:
			cout << "\nGoodbye!";
            break;
		default: cout << "\nWRONG OPTION...";
		}
	} while (option != 7);
}

void displayInitializingMenu(int& option, bool& isInitialized, FractionPeterMutch** fractionL, FractionPeterMutch** fractionR) {
	do {
		do {
			cout << "\n************************"
				<< "\n*  Initializing Menu   *"
				<< "\n*                      *"
				<< "\n* 1. Standalone Init() *"
				<< "\n* 2. Update Fraction L *"
				<< "\n* 3. Update Fraction R *"
				<< "\n* 4. Update Both       *"
				<< "\n* 5. Back              *"
				<< "\n************************"
				<< "\n\n Choose an option: ";
			cin >> option;
			//If the fractions are initialized, don't allow them to re-initialize.
			//If the fractions have not been initialized, force the user to choose option 1 or 5.

			if (isInitialized && option == 1) {
				cout << "\nThe fractions are already initialized, please choose another option.";
			}
			else if (!isInitialized && (option != 1 && option != 5)){
				cout << "\nNot a proper call as no fractions are available!";
			}
		} while ((isInitialized && option == 1) || (!isInitialized && (option != 1 && option != 5)));
		int input1, input2;
		switch (option) {
		case 1:
			cout << "\nCalling init() -- ";
			init(fractionL, fractionR);
			isInitialized = true;
			break;
		case 2:

			cout << "\nPlease enter the new numerator for Fraction L";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Fraction L";
				cin >> input2;
				if (input2) {
					(*fractionL)->setAll(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			break;
		case 3:

			cout << "\nPlease enter the new numerator for Fraction R";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Fraction R";
				cin >> input2;
				if (input2) {
					(*fractionL)->setAll(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			break;
		case 4:

			cout << "\nPlease enter the new numerator for Fraction L";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Fraction L";
				cin >> input2;
				if (input2) {
					(*fractionL)->setAll(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			(*fractionL)->setAll(input1, input2);
			cout << "\nPlease enter the new numerator for Fraction R";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Fraction R";
				cin >> input2;
				if (input2) {
					(*fractionL)->setAll(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			break;
		default:
			cout << "\nReturning to Main Menu" << endl;
		}

	} while (option != 5);
}

void displayAddingMenu(int& option, FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, FractionPeterMutch** result) {
    do {
        cout <<"\n*******************************"
			<< "\n*        Adding Menu          *"
			<< "\n*                             *"
			<< "\n*  1. add() - Member          *"
			<< "\n*  2. add() - Standalone      *"
			<< "\n*  3. operator+() - Member    *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\n Choose an option: ";

		if (*result == nullptr) {
			*result = new FractionPeterMutch();
		}

		cin >> option;

		switch(option) {
            case 1:
				cout << "Calling member adding method\n";
				(*result)->add(**fractionL, **fractionR);
				(*fractionL)->print();
				cout << "+";
				(*fractionR)->print();
				cout << "=";
				(*result)->print();
				break;
			case 2: 
				add(fractionL, fractionR, result);
				(*fractionL)->print();
				cout << "+";
				(*fractionR)->print();
				cout << "=";
				(*result)->print();
				break;
			case 3: 
				**result = **fractionL + **fractionR;
				(*result)->reduce();
				(*fractionL)->print();
				cout << "+";
				(*fractionR)->print();
				cout << "=";
				(*result)->print();
				break;
			case 4:
				cout << "Returning to Main Menu" << endl;
				break;
			default: cout << "Invalid option" << endl;
        }
    } while (option != 4);
    return;
}
void displaySubtractingMenu(int& option, FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, FractionPeterMutch** result){
	do {
		cout <<"\n*******************************"
			<< "\n*        Subtracting Menu     *"
			<< "\n*                             *"
			<< "\n*  1. subtract() - Member     *"
			<< "\n*  2. subtract() - Standalone *"
			<< "\n*  3. operator-() - Member    *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\n Choose an option: ";

		if (*result == nullptr) {
			*result = new FractionPeterMutch();
		}

		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling member subtracting method\n";
			(*result)->subtract(**fractionL, **fractionR);
			(*fractionL)->print();
			cout << "-";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 2: 
			subtract(fractionL, fractionR, result);
			(*fractionL)->print();
			cout << "+";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 3: 
			**result = **fractionL - **fractionR;
			(*result)->reduce();
			(*fractionL)->print();
			cout << "+";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 4:
			cout << "Returning to Main Menu" << endl;
		default: cout << "Invalid option" << endl;
		}
	} while (option != 4);
	return;

}
void displayMultiplyingMenu(int& option, FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, FractionPeterMutch** result) {
	do {
		cout <<"\n*******************************"
			<< "\n*        Multiplying Menu     *"
			<< "\n*                             *"
			<< "\n*  1. multiply() - Member     *"
			<< "\n*  2. multiply() - Standalone *"
			<< "\n*  3. operator* - Member      *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\n Choose an option: ";

		if (*result == nullptr) {
			*result = new FractionPeterMutch();
		}

		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling member multiplying method\n";
			(*result)->multiply(**fractionL, **fractionR);
			(*fractionL)->print();
			cout << "*";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 2: 
			multiply(fractionL, fractionR, result);
			(*fractionL)->print();
			cout << "+";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 3: 
			**result = **fractionL * **fractionR;
			(*result)->reduce();
			(*fractionL)->print();
			cout << "+";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 4:
			cout << "Returning to Main Menu" << endl;
		default: cout << "Invalid option" << endl;
		}
	} while (option != 4);
	return;

}
void displayDividingMenu(int& option, FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, FractionPeterMutch** result) {
	do {
		cout <<"\n*******************************"
			<< "\n*        Dividing Menu        *"
			<< "\n*                             *"
			<< "\n*  1. divide() - Member       *"
			<< "\n*  2. divide() - Standalone   *"
			<< "\n*  3. operator/ - Member      *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\n Choose an option: ";

		if (*result == nullptr) {
			*result = new FractionPeterMutch();
		}

		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling member dividing method\n";
			(*result)->divide(**fractionL, **fractionR);
			(*fractionL)->print();
			cout << "/";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 2: 
			divide(fractionL, fractionR, result);
			(*fractionL)->print();
			cout << "+";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 3:
			**result = **fractionL / **fractionR;
			(*result)->reduce();
			(*fractionL)->print();
			cout << "+";
			(*fractionR)->print();
			cout << "=";
			(*result)->print();
			break;
		case 4:
			cout << "Returning to Main Menu" << endl;
		default: cout << "Invalid option" << endl;
		}
	} while (option != 4);
	return;

}
void displayPrintingMenu(int& option, FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, FractionPeterMutch** result) {
	do {
		cout <<"\n*******************************"
			<< "\n*        Printing Menu        *"
			<< "\n*                             *"
			<< "\n*  1. print() - Member        *"
			<< "\n*  2. print() - Standalone    *"
			<< "\n*  3. ostream<< - Member      *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\n Choose an option: ";

		if (*result == nullptr) {
			*result = new FractionPeterMutch();
		}

		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling member printing method\n";
			(*fractionL)->print();
			(*fractionR)->print();
			(*result)->print();
			break;
		case 2:
			cout << "Calling standalone printing method\n";
			print(fractionL);
			print(fractionR);
			print(result);
			break;
		case 3:
			cout << "\nFractionL: " << **fractionL;
			cout << "\nFractionR: " << **fractionL;
			cout << "\nResult: " << **result;
			break;
		case 4:
			cout << "Returning to Main Menu" << endl;
		default: cout << "Invalid option" << endl;
		}
	} while (option != 4);
	return;

}


/*

OUTPUT:

CIS 25 -- C++ Programming
Laney College
Peter Mutch

Assignment Information --
Assignment Number: Lab 5,
Exercise # 1
Written by:        Peter Mutch
Due Date:          2015-11-05
*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 2
Not a proper call as no fractions are available!
*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 1

Calling Initializing Menu

************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 2

Not a proper call as no fractions are available!
************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 1

Calling init() --
Please enter the numerator for Fraction L: 1

Please enter the denominator for Fraction L: 2
FractionL initialized as 1/2
Please enter the numerator for Fraction R: 3

Please enter the denominator for Fraction R: 4
FractionR initialized as 3/4
************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 1

The fractions are already initialized, please choose another option.
************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 5

Returning to Main Menu

*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 2

Calling Adding Menu

*******************************
*        Adding Menu          *
*                             *
*  1. add() - Member          *
*  2. add() - Standalone      *
*  3. operator+() - Member    *
*  4. Return to Previous Menu *
*******************************

Choose an option: 1
Calling member adding method
1/2+3/4=5/4
*******************************
*        Adding Menu          *
*                             *
*  1. add() - Member          *
*  2. add() - Standalone      *
*  3. operator+() - Member    *
*  4. Return to Previous Menu *
*******************************

Choose an option: 2
Returning to Main Menu
Invalid option

*******************************
*        Adding Menu          *
*                             *
*  1. add() - Member          *
*  2. add() - Standalone      *
*  3. operator+() - Member    *
*  4. Return to Previous Menu *
*******************************

Choose an option: 4
Returning to Main Menu
Invalid option

*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 7

Goodbye!





Comments:

My menus seem to refuse to accept any option other than 1 or the final option, and I'm not sure why.
I was unable to get the ostream overloader to work. 
My formatting is awful. 
I'm already using a late extension block and handing this in past 6:15.

I'm sorry that I've disappointed you. 

*/