#include <iostream>
#include "DriverUtilitiesPeterMutch.h"
#include "PointPeterMutch.h"
#include "ShapeUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "CirclePeterMutch.h"
using namespace std;

void printMyInformation() {
	cout << "CIS 25 -- C++ Programming"
		<< "\nLaney College"
		<< "\nPeter Mutch"
		<< "\n\nAssignment Information --"
		<< "\n  Assignment Number: Lab 8,"
		<< "\n                     Exercise # 1"
		<< "\n  Written by:        Peter Mutch"
		<< "\n  Due Date:          2015-12-15";
}

void displayMainMenu() {

	int option;

	RectanglePeterMutch* rectPtr1 = nullptr;
	RectanglePeterMutch* rectPtr2 = nullptr;
	CirclePeterMutch* circPtr1 = nullptr;
	CirclePeterMutch* circPtr2 = nullptr;

	do {
			cout << "\n\n******************************************"
				<< "\n*              Main MENU                  *"
				<< "\n*                                         *"
				<< "\n* 1. Create 2 RectanglePeterMutch objects *"
				<< "\n* 2. Create 2 CirclePeterMutch objects    *"
				<< "\n* 3. Create 2 BoxPeterMutch objects       *"
				<< "\n* 4. Create 2 CylinderPeterMutch objects  *"
				<< "\n* 5. Compare 2 selected objects by area   *"
				<< "\n* 6. Compare 2 selected objects by size   *"
				<< "\n* 7. Print selected objects               *"
				<< "\n* 8. Quit                                 *"
				<< "\n*******************************************"
				<< "\nSelect an option (use integer value only): ";
			cin >> option;

		switch (option) {
			case 1:
				cout << "\nCalling Rectangle Menu";
				displayRectangleMenu(&rectPtr1, &rectPtr2);
				break;
			case 2:
				cout << "\nCalling Circle Menu";
				displayCircleMenu(&circPtr1, &circPtr2);
				break;
			case 3:
				if (rectPtr1 != nullptr && rectPtr2 != nullptr &&
					circPtr1 != nullptr && circPtr2 != nullptr) {
					cout << "\nCalling Mixed Menu";
					displayMixedMenu(&rectPtr1, &rectPtr2, &circPtr1, &circPtr2);
				}
				else cout << "\nYou must initialize all of your shapes!" << endl;
				break;
			case 4:
				cout << "\n\nGoodbye!";
				break;
			default: cout << "\nWRONG OPTION...";
		}
	}  while ((option != 4));
}

void displayRectangleMenu(RectanglePeterMutch** r1, RectanglePeterMutch** r2) {
	int option;
	int larger;
	do {
		do {
			cout <<"\n\n***********************************"
				<< "\n*         Rectangle Menu          *"
				<< "\n*                                 *"
				<< "\n* 1. Create two Rectangle Objects *"
				<< "\n* 2. Compare by volume            *"
				<< "\n* 3. Compare by area              *"
				<< "\n* 4. Print two Rectangle Objects  *"
				<< "\n* 5. Back                         *"
				<< "\n***********************************"
				<< "\n\n Choose an option: ";
			cin >> option;

			if (*r1 != nullptr && option == 1) {
				cout << "\nThe rectangles have already been initialized,"
					<< "please choose another option.";
			}
			else if (*r1 == nullptr && (option > 1 && option < 5)){
				cout << "\nNot a proper call as no rectangles are available!";
			}
		} while ((*r1 != nullptr && option == 1) || (*r1 == nullptr &&
			(option > 1 && option < 5)));

		switch (option) {
			case 1:

				cout << "\nCalling init() for Rectangle 1 -- ";
				init(r1);
				cout << "\nCalling init() for Rectangle 2 -- ";
				init(r2);

				break;
			case 2:
				larger = compareVolume(r1, r2);

				if (larger) cout << "\nRectangle " << larger <<
					" is larger than Rectangle " << (3 - larger) << "." << endl;
				else cout << "\nThe rectangles have the same volume." << endl;

				break;

			case 3:
				larger = compareArea(r1, r2);

				if (larger) cout << "\nRectangle " << larger <<
					" is larger than Rectangle " << (3 - larger) << "." << endl;
				else cout << "\nThe rectangles have the same area." << endl;

				break;

			case 4:

				cout << "\nRectangle 1: ";
				(*r1)->print();
				cout << "\nRectangle 2: ";
				(*r2)->print();

				break;

			case 5:

				cout << "\nReturning to Main Menu" << endl;

			default:

				cout << "\nInvalid option" << endl;
		}

	} while (option != 5);
}

void displayCircleMenu(CirclePeterMutch** circ1, CirclePeterMutch** circ2) {
	int option;
	int larger;
	do {
        cout <<"\n\n*********************************"
			<< "\n*          Circle Menu          *"
			<< "\n*                               *"
			<< "\n*  1. Create two Circle Objects *"
			<< "\n*  2. Compare by Volume         *"
			<< "\n*  3. Compare by Area           *"
			<< "\n*  4. Print two Circle Objects  *"
			<< "\n*  5. Return                    *"
			<< "\n*********************************"
			<< "\n\n Choose an option: ";

		cin >> option;
		switch(option) {
			case 1:

				cout << "\nCalling init() for Circle 1 -- ";
				init(circ1);
				cout << "\nCalling init() for Circle 2 -- ";
				init(circ2);

				break;

			case 2:
				larger = compareVolume(circ1, circ2);

				if (larger) cout << "\nCircle " << larger << " is larger than Circle "
					<< (3 - larger) << "." << endl;
				else cout << "\nThe circles have the same volume." << endl;

				break;

			case 3:
				larger = compareArea(circ1, circ2);

				if (larger) cout << "\nCircle " << larger << " is larger than Circle "
					<< (3 - larger) << "." << endl;
				else cout << "\nThe circles have the same area." << endl;

				break;

			case 4:

				cout << "\nCircle 1: ";
				(*circ1)->print();
				cout << "\nCircle 2: ";
				(*circ2)->print();

				break;

			case 5:
				cout << "\nReturning to Main Menu" << endl;

			default: cout << "\nInvalid option" << endl;
        }
    } while (option != 5);
    return;
}

void displayMixedMenu(RectanglePeterMutch** r1, RectanglePeterMutch** r2,
	CirclePeterMutch** c1, CirclePeterMutch** c2) {
	int option1, option2;
	int larger;
	ShapePeterMutch* shPtr1 = nullptr;
	ShapePeterMutch* shPtr2 = nullptr;
	do {
		cout << "\n\n*******************************"
			<< "\n*        Mixed Menu           *"
			<< "\n*                             *"
			<< "\n*  1. Compare by Area         *"
			<< "\n*  2. Compare by Volume       *"
			<< "\n*  3. Print all Objects       *"
			<< "\n*  4. Return to Previous Menu *"
			<< "\n*******************************"
			<< "\n\n Choose an option: ";

		cin >> option1;

		switch (option1) {

			case 1:
				do {
					cout << "\nPlease press 1 - 4 to select "
						<< "the first shape to compare:";
					cout << "\n1. Rectangle 1: ";
					(*r1)->print();
					cout << "\n2. Rectangle 2: ";
					(*r2)->print();
					cout << "\n3. Circle 1: ";
					(*c1)->print();
					cout << "\n4. Circle 2: ";
					(*c2)->print();
					cout << endl;
					cin >> option2;

					switch (option2) {
						case 1:
							shPtr1 = *r1;
							break;
						case 2:
							shPtr1 = *r2;
							break;
						case 3:
							shPtr1 = *c1;
							break;
						case 4:
							shPtr1 = *c2;
							break;
						default:
							cout << "\nInvalid option" << endl;
					}
				} while (option2 < 1 || option2 > 4);
				do {
					cout << "\nPlease press 1 - 4 to select "
						<< "the second shape to compare:";
					cout << "\n1. Rectangle 1: ";
					(*r1)->print();
					cout << "\n2. Rectangle 2: ";
					(*r2)->print();
					cout << "\n3. Circle 1: ";
					(*c1)->print();
					cout << "\n4. Circle 2: ";
					(*c2)->print();
					cout << endl;
					cin >> option2;

					switch (option2) {
						case 1:
							shPtr2 = *r1;
							break;
						case 2:
							shPtr2 = *r2;
							break;
						case 3:
							shPtr2 = *c1;
							break;
						case 4:
							shPtr2 = *c2;
							break;
						default:
							cout << "\nInvalid option" << endl;
					}

/*                    if (*shPtr1 == *shPtr2) {
						cout << "\nYou cannot compare a shape to itself."
							<< endl;
					}*/

				} while (option2 < 1 || option2 > 4);

				larger = compareArea(&shPtr1, &shPtr2);

				cout << "\nBetween those two shapes, shape " << larger <<
					" is larger than shape " << (3 - larger);

				break;

			case 2:
				do {
					cout << "\nPlease press 1 - 4 to select "
						<< "the first shape to compare:";
					cout << "\n1. Rectangle 1: ";
					(*r1)->print();
					cout << "\n1. Rectangle 2: ";
					(*r2)->print();
					cout << "\n1. Circle 1: ";
					(*c1)->print();
					cout << "\n1. Circle 2: ";
					(*c2)->print();
					cin >> option2;

					switch (option2) {
						case 1:
							shPtr1 = *r1;
							break;
						case 2:
							shPtr1 = *r2;
							break;
						case 3:
							shPtr1 = *c1;
							break;
						case 4:
							shPtr1 = *c2;
							break;
						default:
							cout << "\nInvalid option" << endl;
					}
				} while (option2 < 1 || option2 > 4);
				do {
					cout << "\nPlease press 1 - 4 to select "
						<< "the second shape to compare:";
					cout << "\n1. Rectangle 1: ";
					(*r1)->print();
					cout << "\n2. Rectangle 2: ";
					(*r2)->print();
					cout << "\n3. Circle 1: ";
					(*c1)->print();
					cout << "\n4. Circle 2: ";
					(*c2)->print();
					cin >> option2;

					switch (option2) {
						case 1:
							shPtr2 = *r1;
							break;
						case 2:
							shPtr2 = *r2;
							break;
						case 3:
							shPtr2 = *c1;
							break;
						case 4:
							shPtr2 = *c2;
							break;
						default:
							cout << "\nInvalid option" << endl;
					}
					if (shPtr1 == shPtr2) {
						cout << "\nYou cannot compare a shape to itself."
							<< endl;
					}
				} while (option2 < 1 || option2 > 4 || shPtr1 == shPtr2);

				larger = compareVolume(&shPtr1, &shPtr2);

				if (larger) cout << "\nBetween those two shapes, shape "
					<< larger << " is larger than shape " << (3 - larger);
				else cout << "\nThe two shapes are the same size!";

				break;

			case 3:
				cout << "\nRectangle 1: ";
				(*r1)->print();
				cout << "\nRectangle 2: ";
				(*r2)->print();
				cout << "\nCircle 1: ";
				(*c1)->print();
				cout << "\nCircle 2: ";
				(*c2)->print();

				break;

			case 4:
				cout << "\nReturning to Main Menu" << endl;

				break;

			default: cout << "\nInvalid option" << endl;
		}
	} while (option1 != 4);
	return;
}
