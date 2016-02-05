#include <iostream>
#include "rectanglePeterMutch.h"
#include "ShapeUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "fractionUtilsPeterMutch.h"
using namespace std;

void init(RectanglePeterMutch** rec) {
	int *ary = new int[8]();

    cout << "\nPlease enter the numerator for the lower left corner's X value: ";
	cin >> ary[0];
	do {
		cout << "\nPlease enter the  denominator for the lower left corner's X value: ";
		cin >> ary[1];
		if (!ary[1]) {
			cout << "Denominator cannot be zero!";
		}
	} while (!ary[1]);

	cout << "\nPlease enter the numerator for the lower left corner's Y value: ";
	cin >> ary[2];
	do {
		cout << "\nPlease enter the  denominator for the lower left corner's Y value: ";
		cin >> ary[3];
		if (!ary[3]) {
			cout << "Denominator cannot be zero!";
		}
	} while (!ary[3]);

	cout << "\nPlease enter the numerator for the upper right corner's X value: ";
	cin >> ary[4];
	do {
		cout << "\nPlease enter the  denominator for the upper right corner's X value: ";
		cin >> ary[5];
		if (!ary[5]) {
			cout << "Denominator cannot be zero!";
		}
	} while (!ary[5]);

	cout << "\nPlease enter the numerator for the upper right corner's Y value: ";
	cin >> ary[6];
	do {
		cout << "\nPlease enter the  denominator for the upper right corner's Y value: ";
		cin >> ary[7];
		if (!ary[7]) {
			cout << "Denominator cannot be zero!";
		}
	} while (!ary[7]);

	if (*rec == nullptr) {
        *rec = new RectanglePeterMutch(PointPeterMutch(FractionPeterMutch(ary[0], ary[1]),
			FractionPeterMutch(ary[2], ary[3])), PointPeterMutch(FractionPeterMutch(ary[4], ary[5]),
				FractionPeterMutch(ary[6], ary[7])));
		cout << "\nRectangle has been initialized." << endl;
	}
	else {
        (*rec)->setBoth(PointPeterMutch(FractionPeterMutch(ary[0], ary[1]),
			FractionPeterMutch(ary[2], ary[3])), PointPeterMutch(FractionPeterMutch(ary[4], ary[5]),
				FractionPeterMutch(ary[6], ary[7])));
		cout << "\nRectangle has been updated." << endl;
    }
    delete[] ary;
}

int compareArea(RectanglePeterMutch** r1, RectanglePeterMutch** r2) {
	if ((*r1)->computeArea() > (*r2)->computeArea()) return 1;
	else if ((*r1)->computeArea() < (*r2)->computeArea()) return 2;
	else return 0;
}

int compareVolume(RectanglePeterMutch** r1, RectanglePeterMutch** r2) {
	if ((*r1)->computeVolume() >(*r2)->computeVolume()) return 1;
	else if ((*r1)->computeVolume() < (*r2)->computeVolume()) return 2;
	else return 0;
}

void init(CirclePeterMutch** circ) {
	int *ary = new int[6]();

	cout << "\nPlease enter the numerator for the center's X value: ";
	cin >> ary[0];

	do {
		cout << "\nPlease enter the denominator for the center's X value: ";
		cin >> ary[1];
		if (ary[1] == 0) cout << "\nThe denominator cannot equal zero!";
	} while (ary[1] == 0);

	cout << "\nPlease enter the numerator for the center's Y value: ";
	cin >> ary[2];

	do {
		cout << "\nPlease enter the denominator for the center's Y value: ";
		cin >> ary[3];
		if (ary[3] == 0) cout << "\nThe denominator cannot equal zero!";
	} while (ary[3] == 0);

	cout << "\nPlease enter the numerator for the circle's radius: ";
	cin >> ary[4];

	do {
		cout << "\nPlease enter the denominator for the circle's radius: ";
		cin >> ary[5];
		if (ary[5] == 0) cout << "The denominator cannot equal zero!";
	} while (ary[5] == 0);

	if (*circ == nullptr) {
		*circ = new CirclePeterMutch(PointPeterMutch(FractionPeterMutch(ary[0], ary[1]),
			FractionPeterMutch(ary[2], ary[3])), FractionPeterMutch(ary[4], ary[5]));
		cout << "\nCircle has been initialized." << endl;
	}
	else {
		(*circ)->setBoth(PointPeterMutch(FractionPeterMutch(ary[0], ary[1]),
			FractionPeterMutch(ary[2], ary[3])), FractionPeterMutch(ary[4], ary[5]));
		cout << "\nCircle has been updated." << endl;
	}
	delete[] ary;
}

int compareArea(CirclePeterMutch** circ1, CirclePeterMutch** circ2) {
	if ((*circ1)->computeArea() > (*circ2)->computeArea()) return 1;
	else if ((*circ1)->computeArea() < (*circ2)->computeArea()) return 2;
	else return 0;
}
int compareVolume(CirclePeterMutch** circ1, CirclePeterMutch** circ2) {
	if ((*circ1)->computeVolume() >(*circ2)->computeVolume()) return 1;
	else if ((*circ1)->computeVolume() < (*circ2)->computeVolume()) return 2;
	else return 0;
}

int compareArea(ShapePeterMutch** c1, ShapePeterMutch** r1) {
	if ((*c1)->computeArea() > (*r1)->computeArea()) {
            cout << "\nShape 1 ";
            (*c1)->print();
            cout << " is greater than " ;
            (*r1)->print();
            return 1;
	}
	else if ((*c1)->computeArea() < (*r1)->computeArea()) return 2;
	else return 0;
}

int compareVolume(ShapePeterMutch** r1, ShapePeterMutch** c1) {
	if ((*r1)->computeVolume() > (*c1)->computeVolume()) return 1;
	else if ((*r1)->computeVolume() < (*c1)->computeVolume()) return 2;
	else return 0;
}
