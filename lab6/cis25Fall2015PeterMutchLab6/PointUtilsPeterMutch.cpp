#include "PointPeterMutch.h"
#include <iostream>

void init(PointPeterMutch** Pointpt) {
    int input1, input2;
    *Pointpt = new PointPeterMutch();

    cout << "\nPlease enter the numerator for Point's X value: ";
			cin >> input1;
			do {
				cout << "\nPlease enter the  denominator for Point's X value: ";
				cin >> input2;
				if (input2) {
					(*Pointpt)->setX(input1, input2);
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
					(*Pointpt)->setY(input1, input2);
				}
				else {
					cout << "Denominator cannot be zero!";
				}
			} while (input2 == 0);
}
