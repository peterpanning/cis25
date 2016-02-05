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

	int option, option2, option3;
	int shapeOption;
    int larger;
	RectanglePeterMutch* rectPtr1 = nullptr;
	RectanglePeterMutch* rectPtr2 = nullptr;
	CirclePeterMutch* circPtr1 = nullptr;
	CirclePeterMutch* circPtr2 = nullptr;
	BoxPeterMutch* boxPtr1 = nullptr;
	BoxPeterMutch* boxPtr2 = nullptr;
	CylinderPeterMutch* cylPtr1 = nullptr;
	CylinderPeterMutch* cylPtr2 = nullptr;
	ShapePeterMutch* shPtr1 = nullptr;
	ShapePeterMutch* shPtr2 = nullptr;

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
				cout << "\nCalling init() for Rectangle 1 -- ";
				init(&rectPtr1);
				cout << "\nCalling init() for Rectangle 2 -- ";
				init(&rectPtr2);

				break;
			case 2:
				cout << "\nCalling init() for Circle 1 -- ";
				init(&circPtr1);
				cout << "\nCalling init() for Circle 2 -- ";
				init(&circPtr2);

				break;
			case 3:
				cout << "\nCalling init() for Box 1 -- ";
				init(&boxPtr1);
				cout << "\nCalling init() for Box 2 -- ";
				init(&boxPtr2);
			case 4:
				cout << "\nCalling init() for Cylinder 1 -- ";
				init(&cylPtr1);
				cout << "\nCalling init() for Cylinder 2 -- ";
				init(&cylPtr2);

				break;
            case 5:
                if (rectPtr1 && rectPtr2 && circPtr1 && circPtr2 && boxPtr1 && boxPtr2 && cylPtr1 && cylPtr2) {
                    do {
                        cout << "\n1. Rectangle 1: ";
                        rectPtr1->print();
                        cout << "\n2. Rectangle 2: ";
                        rectPtr2->print();
                        cout << "\n3. Circle 1: ";
                        circPtr1->print();
                        cout << "\n4. Circle 2: ";
                        circPtr2->print();
                        cout << "\n1. Box 1: ";
                        boxPtr1->print();
                        cout << "\n2. Box 2: ";
                        boxPtr2->print();
                        cout << "\n1. Cylinder 1: ";
                        cylPtr1->print();
                        cout << "\n2. Cylinder 2: ";
                        cylPtr2->print();

                        cout << endl;

                        cin >> option2;

                        switch (option2) {
                            case 1:
                                shPtr1 = rectPtr1;
                                break;
                            case 2:
                                shPtr1 = rectPtr2;
                                break;
                            case 3:
                                shPtr1 = circPtr1;
                                break;
                            case 4:
                                shPtr1 = circPtr2;
                                break;
                            case 5:
                                shPtr1 = boxPtr1;
                                break;
                            case 6:
                                shPtr1 = boxPtr2;
                                break;
                            case 7:
                                shPtr1 = cylPtr1;
                                break;
                            case 8:
                                shPtr1 = cylPtr2;
                                break;
                            default:
                                cout << "\nInvalid option" << endl;
                        }
                    } while (option2 < 1 || option2 > 8);
                    do {
                        cout << "\nPlease press select "
                            << "the second shape to compare:";
                        cout << "\n1. Rectangle 1: ";
                        rectPtr1->print();
                        cout << "\n2. Rectangle 2: ";
                        rectPtr2->print();
                        cout << "\n3. Circle 1: ";
                        circPtr1->print();
                        cout << "\n4. Circle 2: ";
                        circPtr2->print();
                        cout << "\n1. Box 1: ";
                        boxPtr1->print();
                        cout << "\n2. Box 2: ";
                        boxPtr2->print();
                        cout << "\n1. Cylinder 1: ";
                        cylPtr1->print();
                        cout << "\n2. Cylinder 2: ";
                        cylPtr2->print();

                        cout << endl;

                        cin >> option3;

                        switch (option3) {
                            case 1:
                                shPtr2 = rectPtr1;
                                break;
                            case 2:
                                shPtr2 = rectPtr2;
                                break;
                            case 3:
                                shPtr2 = circPtr1;
                                break;
                            case 4:
                                shPtr2 = circPtr2;
                                break;
                            case 5:
                                shPtr2 = boxPtr1;
                                break;
                            case 6:
                                shPtr2 = boxPtr2;
                                break;
                            case 7:
                                shPtr2 = cylPtr1;
                                break;
                            case 8:
                                shPtr2 = cylPtr2;
                                break;
                            default:
                                cout << "\nInvalid option" << endl;
                        }
                    } while (option3 < 1 || option3 > 8 || option3 == option2);

                    larger = compareArea(&shPtr1, &shPtr2);

                    cout << "\nBetween those two shapes, shape " << larger <<
                        " is larger than shape " << (3 - larger);
                }
                else cout << "\nPlease initialize all your objects first." << endl;
                break;
            case 6:
                if (rectPtr1 && rectPtr2 && circPtr1 && circPtr2 && boxPtr1 && boxPtr2 && cylPtr1 && cylPtr2) {
                    do {
                        cout << "\n1. Rectangle 1: ";
                        rectPtr1->print();
                        cout << "\n2. Rectangle 2: ";
                        rectPtr2->print();
                        cout << "\n3. Circle 1: ";
                        circPtr1->print();
                        cout << "\n4. Circle 2: ";
                        circPtr2->print();
                        cout << "\n1. Box 1: ";
                        boxPtr1->print();
                        cout << "\n2. Box 2: ";
                        boxPtr2->print();
                        cout << "\n1. Cylinder 1: ";
                        cylPtr1->print();
                        cout << "\n2. Cylinder 2: ";
                        cylPtr2->print();

                        cout << endl;

                        cin >> option2;

                        switch (option2) {
                            case 1:
                                shPtr1 = rectPtr1;
                                break;
                            case 2:
                                shPtr1 = rectPtr2;
                                break;
                            case 3:
                                shPtr1 = circPtr1;
                                break;
                            case 4:
                                shPtr1 = circPtr2;
                                break;
                            case 5:
                                shPtr1 = boxPtr1;
                                break;
                            case 6:
                                shPtr1 = boxPtr2;
                                break;
                            case 7:
                                shPtr1 = cylPtr1;
                                break;
                            case 8:
                                shPtr1 = cylPtr2;
                                break;
                            default:
                                cout << "\nInvalid option" << endl;
                        }
                    } while (option2 < 1 || option2 > 8);
                    do {
                        cout << "\n1. Rectangle 1: ";
                        rectPtr1->print();
                        cout << "\n2. Rectangle 2: ";
                        rectPtr2->print();
                        cout << "\n3. Circle 1: ";
                        circPtr1->print();
                        cout << "\n4. Circle 2: ";
                        circPtr2->print();
                        cout << "\n1. Box 1: ";
                        boxPtr1->print();
                        cout << "\n2. Box 2: ";
                        boxPtr2->print();
                        cout << "\n1. Cylinder 1: ";
                        cylPtr1->print();
                        cout << "\n2. Cylinder 2: ";
                        cylPtr2->print();

                        cout << endl;

                        cin >> option3;

                        switch (option3) {
                            case 1:
                                shPtr2 = rectPtr1;
                                break;
                            case 2:
                                shPtr2 = rectPtr2;
                                break;
                            case 3:
                                shPtr2 = circPtr1;
                                break;
                            case 4:
                                shPtr2 = circPtr2;
                                break;
                            case 5:
                                shPtr2 = boxPtr1;
                                break;
                            case 6:
                                shPtr2 = boxPtr2;
                                break;
                            case 7:
                                shPtr2 = cylPtr1;
                                break;
                            case 8:
                                shPtr2 = cylPtr2;
                                break;
                            default:
                                cout << "\nInvalid option" << endl;
                        }
                    } while (option3 < 1 || option3 > 8 || option3 == option2);

                    larger = compareArea(&shPtr1, &shPtr2);

                    cout << "\nBetween those two shapes, shape " << larger <<
                        " is larger than shape " << (3 - larger);
                }
                else cout << "\nPlease initialize all of your objects first." << endl;

                break;
            case 7:
                if (rectPtr1 && rectPtr2 && circPtr1 && circPtr2 && boxPtr1 && boxPtr2 && cylPtr1 && cylPtr2) {
                    cout << "\n1. Rectangle 1: ";
                    rectPtr1->print();
                    cout << "\n2. Rectangle 2: ";
                    rectPtr2->print();
                    cout << "\n3. Circle 1: ";
                    circPtr1->print();
                    cout << "\n4. Circle 2: ";
                    circPtr2->print();
                    cout << "\n1. Box 1: ";
                    boxPtr1->print();
                    cout << "\n2. Box 2: ";
                    boxPtr2->print();
                    cout << "\n1. Cylinder 1: ";
                    cylPtr1->print();
                    cout << "\n2. Cylinder 2: ";
                    cylPtr2->print();
                }
                else cout << "\nPlease initialize all of your shapes first." << endl;
                break;
            case 8:
				cout << "\n\nGoodbye!";
				break;
			default: cout << "\nWRONG OPTION...";
		}
	}  while (option != 8);
}
