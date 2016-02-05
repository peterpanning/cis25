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
	bool isInitialized = false; 
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
			if (!isInitialized && option != 1) cout << "\nNot a proper" 
				<< "call as no point is available!";
		} while (!isInitialized && option != 1);

		switch (option) {
		case 1:
			cout << "\nCalling Initializing Menu";
			displayInitializingMenu(&isInitialized, &pointPt);
			break;
		case 2:
			cout << "\nCalling Moving Menu";
			displayMovingMenu(&pointPt);
			break;
		case 3:
			cout << "\nCalling Flipping Menu";
			displayFlippingMenu(&pointPt);
			break;
		case 4:
			cout << "\nCalling Printing Menu";
			displayPrintingMenu(&pointPt);
			break;
		case 5:
			cout << "\n\nGoodbye!";
            break;
		default: cout << "\nWRONG OPTION...";
		}
	} while (option != 5);
}

void displayInitializingMenu(bool* isInitialized, PointPeterMutch** pointPt) {
	int option;
	do {
		do {
			cout <<"\n\n************************"
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

			if (*isInitialized && option == 1) {
				cout << "\nThe point is already initialized, please choose another option.";
			}
			else if (!*isInitialized && (option != 1 && option != 5)){
				cout << "\nNot a proper call as no point is available!";
			}
		} while ((*isInitialized && option == 1) || (!*isInitialized &&
			(option != 1 && option != 5)));

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
			cout << "\nPoint is now at " << (**pointPt);

			break;
        case 3:
            cout << "\nPlease enter the new numerator for Point's Y value: ";
			cin >> input1;
			do {
				cout << "\nPlease enter the new denominator for Point's Y value: ";
				cin >> input2;
				if (input2) {
					(*pointPt)->setY(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			cout << "\nPoint is now at " << (**pointPt);

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
			cout << "\nPoint is now at " << (**pointPt);

            break;

		default:
			cout << "\nReturning to Main Menu" << endl;
		}

	} while (option != 5);
}

void displayMovingMenu(PointPeterMutch** pointPt) {  
	int option;
	int input1, input2, input3, input4;
	do {
        cout <<"\n\n**********************"
			<< "\n*     Moving Menu    *"
			<< "\n*                    *"
			<< "\n*  1. By (frX, frY)  *"
			<< "\n*  2. By fr          *"
			<< "\n*  3. Print          *"
			<< "\n*  4. Return         *"
			<< "\n**********************"
			<< "\n\n Choose an option: ";

		cin >> option;
		switch(option) {
			case 1:
				cout << "\nPlease enter the numerator for delta X: ";
				cin >> input1;
				do {
					cout << "\nPlease enter the denominator for delta X: ";
					cin >> input2;
					if (!input2) {
						cout << "Denominator cannot be zero!";
					}
				} while (input2 == 0);
				cout << "\nPlease enter the numerator for delta Y: ";
				cin >> input3;
				do {
					cout << "\nPlease enter the denominator for delta Y: ";
					cin >> input4;
					if (!input4) {
						cout << "Denominator cannot be zero!";
					}
				} while (input2 == 0);
				(*pointPt)->moveBoth(FractionPeterMutch(input1, input2),
					FractionPeterMutch(input3, input4));
				cout << "\nPoint is now at " << (**pointPt);

				break;
			
			case 2:
				int axis;
				do {
					cout << "\nPlease enter the axis on which you would like to move,"
						<< " 1 for X or 2 for Y: ";
					cin >> axis;
					if (axis != 1 && axis != 2) {
						cout << "\nThat is not a valid option.";
					}
				} while (axis != 1 && axis != 2);
				if (axis == 1) {
					cout << "\nPlease enter the numerator for delta X: ";
					cin >> input1;
					do {
						cout << "\nPlease enter the denominator for delta X: ";
						cin >> input2;
						if (!input2) {
							cout << "Denominator cannot be zero!";
						}
					} while (input2 == 0);
					(*pointPt)->moveX(FractionPeterMutch(input1, input2));
				}
				else {
					cout << "\nPlease enter the numerator for delta Y: ";
					cin >> input1;
					do {
						cout << "\nPlease enter the denominator for delta Y: ";
						cin >> input2;
						if (!input2) {
							cout << "Denominator cannot be zero!";
						}
					} while (input2 == 0);
					(*pointPt)->moveY(FractionPeterMutch(input1, input2));
				}

				cout << "\nPoint is now at " << (**pointPt);

				break;
			case 3:
				cout << "\nPoint is now at " << (**pointPt);
				break;
			case 4:
				cout << "\nReturning to Main Menu" << endl;
				break;
			default: cout << "\nInvalid option" << endl;
        }
    } while (option != 4);
    return;
}

void displayFlippingMenu(PointPeterMutch** pointPt) {
	int option;
	do {
		cout << "\n\n*******************************"
			<< "\n*        Flipping Menu        *"
			<< "\n*                             *"
			<< "\n*  1. Flip around Origin      *"
			<< "\n*  2. Flip around X axis      *"  
			<< "\n*  3. Flip around Y axis      *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\n Choose an option: ";

		cin >> option;

		switch (option) {
			
			case 1:
				cout << "\nFlipping across origin!" << endl;
				(*pointPt)->flipThroughOrigin();
				cout << "\nThe point is now at " << (**pointPt);
				break;
			case 2:
				cout << "\nFlipping across X axis!" << endl;
				(*pointPt)->flipByX();
				cout << "\nThe point is now at " << (**pointPt);
				break;
			case 3:
				cout << "\nFlipping across Y axis!" << endl;
				(*pointPt)->flipByY();
				cout << "\nThe point is now at " << (**pointPt);
				break;
			case 4:
				cout << "\nReturning to Main Menu" << endl;
				break;
		default: cout << "\nInvalid option" << endl;
		}
	} while (option != 4);
	return;
}



void displayPrintingMenu(PointPeterMutch** pointPt) {
	int option;
	do {
		cout <<"\n\n*******************************"
			<< "\n*        Printing Menu        *"
			<< "\n*                             *"
			<< "\n*  1. print() - Member        *"
			<< "\n*  2. print() - Standalone    *"
			<< "\n*  3. ostream<< - Member      *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\nChoose an option: ";

		cin >> option;

		switch (option) {
		case 1:
			cout << "\nCalling member printing method\n";
			cout << "\nPoint is currently at ";
			(*pointPt)->print();
			break;
		case 2:
			cout << "\nCalling standalone printing method\n";
			print(pointPt);
			break;
		case 3:
			cout << "\nCalling ostream printing method\n";
			cout << "\nPoint is currently at " << (**pointPt);
			break;
		case 4:
			cout << "\nReturning to Main Menu" << endl;
			break;
		default: cout << "\nInvalid option" << endl;
		}
	} while (option != 4);
	return;
}