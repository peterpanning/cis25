#include "PointPeterMutch.h"
#include <iostream>

void init(PointPeterMutch** pointPt) {
    int input1, input2;
    *pointPt = new PointPeterMutch();

    cout << "\nPlease enter the numerator for Point's X value: ";
			cin >> input1;
			do {
				cout << "\nPlease enter the  denominator for Point's X value: ";
				cin >> input2;
				if (input2) {
					(*pointPt)->setX(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);

			cout << "\nPlease enter the  numerator for Point's Y value: ";
			cin >> input1;
			do {
				cout << "\nPlease enter the  denominator for Point's Y value: ";
				cin >> input2;
				if (input2) {
					(*pointPt)->setY(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
			cout << "\nPoint has been initialzed at " << (**pointPt);
}

void print(PointPeterMutch** pointPt) {
	cout << "\n\nPoint is currently at (" << (*pointPt)->getX() << ",  " <<
		(*pointPt)->getY() << ")";
}