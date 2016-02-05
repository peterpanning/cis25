#include <iostream>
#include "DriverUtilitiesPeterMutch.h"
#include "PointPeterMutch.h"
#include "PointUtilsPeterMutch.h"
using namespace std;

void printMyInformation() {
	cout << "CIS 25 -- C++ Programming"
		<< "\nLaney College"
		<< "\nPeter Mutch"
		<< "\n\nAssignment Information --"
		<< "\n  Assignment Number: Lab 6,"
		<< "\n                     Exercise # 1"
		<< "\n  Written by:        Peter Mutch"
		<< "\n  Due Date:          2015-11-24";
}

void displayMainMenu() {

	int option;
	bool isInitialized = false; //Shows whether Points have been initialized
    //Set up pointers to Points so that we can pass them to functions.
    //In theory, because the points contain the fractions, we shouldn't need
    //to also set up pointers to them.
	PointPeterMutch *pointPt = nullptr;

	do {
		do {
			cout << "\n\n*******************"
				<< "\n*    Point MENU   *"
				<< "\n*                 *"
				<< "\n* 1. Initializing *"
				<< "\n* 2. Moving       *"
				<< "\n* 3. Flipping     *"
				<< "\n* 4. Printing     *"
				<< "\n* 5. Quit         *"
				<< "\n*******************"
				<< "\nSelect an option (use integer value only): ";
			cin >> option;
			if (!isInitialized && option != 1) cout << "Not a proper call as no point is available!";
		} while (!isInitialized && option != 1);

		switch (option) {
		case 1:
			cout << "\nCalling Initializing Menu" << endl;
			displayInitializingMenu(&isInitialized, &pointPt);
			break;
		case 2:
			cout << "\nCalling Moving Menu" << endl;
			//displayMovingMenu(option, &fractionL, &fractionR, &result);
			break;
		case 3:
			cout << "\nCalling Flipping Menu" << endl;
//			displayFlippingMenu(&option, &pointPt);
			break;
		case 4:
			cout << "\nCalling Printing Menu" << endl;
			displayPrintingMenu(&pointPt);
			break;
		case 5:
			cout << "\nGoodbye!";
            break;
		default: cout << "\nWRONG OPTION...";
		}
	} while (option != 5);
}

void displayInitializingMenu(bool* isInitialized, PointPeterMutch** pointPt) {
	int option;
	do {
		do {
			cout <<"\n************************"
				<< "\n*  Initializing Menu   *"
				<< "\n*                      *"
				<< "\n* 1. Standalone Init() *"
				<< "\n* 2. Update X value    *"
				<< "\n* 3. Update Y value    *"
				<< "\n* 4. Update Both       *"
				<< "\n* 5. Back              *"
				<< "\n************************"
				<< "\n\n Choose an option: ";
			cin >> option;
			//If the point is initialized, don't allow them to re-initialize.
			//If the point has not been initialized, force the user to choose option 1 or 5.

			if (*isInitialized && option == 1) {
				cout << "\nThe point is already initialized, please choose another option.";
			}
			else if (!*isInitialized && (option != 1 && option != 5)){
				cout << "\nNot a proper call as no point is available!";
			}
		} while ((*isInitialized && option == 1) || (!*isInitialized && (option != 1 && option != 5)));

		int input1, input2;

		switch (option) {
		case 1:
			cout << "\nCalling init() -- ";
			init(pointPt);
			*isInitialized = true;
			break;
		case 2:

			cout << "\nPlease enter the new numerator for Point's X value: ";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Point's X value: ";
				cin >> input2;
				if (input2) {
					(*pointPt)->setX(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);

			break;
        case 3:
            cout << "\nPlease enter the new numerator for Point's Y value: ";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Point's Y value: ";
				cin >> input2;
				if (input2) {
					(*pointPt)->setX(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);

			break;

        case 4:
            int input3, input4;
            cout << "\nPlease enter the new numerator for Point's X value: ";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Point's X value: ";
				cin >> input2;
				if (!input2) {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			cout << "\nPlease enter the new numerator for Point's Y value: ";
			cin >> input3;
			do {
				cout << "\nPlease enter the new denominator for Point's Y value: ";
				cin >> input4;
				if (!input4) {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			(*pointPt)->setBoth(input1, input2, input3, input4);

            break;

		default:
			cout << "\nReturning to Main Menu" << endl;
		}

	} while (option != 5);
}

/*void displayMovingMenu(int& option, PointPeterMutch** pointPt) {  //TODO: This menu is just a huge, fat TODO
    do {
        cout <<"\n**********************"
			<< "\n*     Moving Menu    *"
			<< "\n*                    *"
			<< "\n*  1. By (frX, frY)  *"
			<< "\n*  2. By fr          *"
			<< "\n*  3. Print          *"
			<< "\n*  4. Return         *"
			<< "\n**********************"
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
*/
/*void displayFlippingMenu(int& option, PointPeterMutch** pointPt){
	do {
		cout <<"\n*******************************"
			<< "\n*        Flipping Menu     *"
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

*/

void displayPrintingMenu(PointPeterMutch** pointPt) {
	int option;
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

		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling member printing method\n";
			(*pointPt)->print();
			break;
		case 2:
			cout << "Calling standalone printing method\n";
	//		print(pointPt);
			break;
		case 3:
//			cout << "\nPointpt: " << **pointPt;
			break;
		case 4:
			cout << "Returning to Main Menu" << endl;
		default: cout << "Invalid option" << endl;
		}
	} while (option != 4);
	return;

}
