/*
#1
Driver, containing output and comments
.h
.cpp
.h
.cpp

#2

TODO: QA on all files

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
				//TODO: ostream friend function for easier printing
				break;
            case 2: //TODO: Standalone adding method
			case 3: //TODO: Operator overloading method
			case 4:
				cout << "Returning to Main Menu" << endl;
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
			//TODO: ostream friend function for easier printing
			break;
		case 2: //TODO: Standalone adding method
		case 3: //TODO: Operator overloading method
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
			<< "\n*  3. multiply-() - Member    *"
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
			//TODO: ostream friend function for easier printing
			break;
		case 2: //TODO: Standalone adding method
		case 3: //TODO: Operator overloading method
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
			<< "\n*  3. divide-() - Member      *"
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
			//TODO: ostream friend function for easier printing
			break;
		case 2: //TODO: Standalone adding method
		case 3: //TODO: Operator overloading method
		case 4:
			cout << "Returning to Main Menu" << endl;
		default: cout << "Invalid option" << endl;
		}
	} while (option != 4);
	return;

}
void displayPrintingMenu(int& option, FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, FractionPeterMutch** result) {

}
