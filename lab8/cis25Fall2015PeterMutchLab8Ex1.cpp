/**
* Program Name: cis25Fall2015PeterMutchLab7Ex1.cpp
* Discussion:   Lab #8 Exercise #1
* Written By:   Peter Mutch
* Date:         2015/12/15
*/

#include <iostream>
#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "DriverUtilitiesPeterMutch.h"

using namespace std;


int main() {
	printMyInformation();
	displayMainMenu();
	return 0;
}

/*

CIS 25 -- C++ Programming
Laney College
Peter Mutch

Assignment Information --
  Assignment Number: Lab 8,
                     Exercise # 1
  Written by:        Peter Mutch
  Due Date:          2015-12-15

******************************************
*              Main MENU                  *
*                                         *
* 1. Create 2 RectanglePeterMutch objects *
* 2. Create 2 CirclePeterMutch objects    *
* 3. Create 2 BoxPeterMutch objects       *
* 4. Create 2 CylinderPeterMutch objects  *
* 5. Compare 2 selected objects by area   *
* 6. Compare 2 selected objects by size   *
* 7. Print selected objects               *
* 8. Quit                                 *
*******************************************
Select an option (use integer value only): 1

Calling init() for Rectangle 1 --
Please enter the numerator for the lower left corner's X value: 0

Please enter the  denominator for the lower left corner's X value: 1

Please enter the numerator for the lower left corner's Y value: 0

Please enter the  denominator for the lower left corner's Y value: 1

Please enter the numerator for the upper right corner's X value: 1

Please enter the  denominator for the upper right corner's X value: 1

Please enter the numerator for the upper right corner's Y value: 1

Please enter the  denominator for the upper right corner's Y value: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling RectanglePeterMutch()

Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Rectangle has been initialized.

Calling init() for Rectangle 2 --
Please enter the numerator for the lower left corner's X value: 2

Please enter the  denominator for the lower left corner's X value: 1

Please enter the numerator for the lower left corner's Y value: 2

Please enter the  denominator for the lower left corner's Y value: 1

Please enter the numerator for the upper right corner's X value: 3

Please enter the  denominator for the upper right corner's X value: 1

Please enter the numerator for the upper right corner's Y value: 3

Please enter the  denominator for the upper right corner's Y value: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling RectanglePeterMutch()

Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Rectangle has been initialized.


******************************************
*              Main MENU                  *
*                                         *
* 1. Create 2 RectanglePeterMutch objects *
* 2. Create 2 CirclePeterMutch objects    *
* 3. Create 2 BoxPeterMutch objects       *
* 4. Create 2 CylinderPeterMutch objects  *
* 5. Compare 2 selected objects by area   *
* 6. Compare 2 selected objects by size   *
* 7. Print selected objects               *
* 8. Quit                                 *
*******************************************
Select an option (use integer value only): 2

Calling init() for Circle 1 --
Please enter the numerator for the center's X value: 3

Please enter the denominator for the center's X value: 1

Please enter the numerator for the center's Y value: 3

Please enter the denominator for the center's Y value: 1

Please enter the numerator for the circle's radius: 2

Please enter the denominator for the circle's radius: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling CirclePeterMutch() Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Circle has been initialized.

Calling init() for Circle 2 --
Please enter the numerator for the center's X value: 0

Please enter the denominator for the center's X value: 1

Please enter the numerator for the center's Y value: 0

Please enter the denominator for the center's Y value: 1

Please enter the numerator for the circle's radius: 4

Please enter the denominator for the circle's radius: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling CirclePeterMutch() Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Circle has been initialized.


******************************************
*              Main MENU                  *
*                                         *
* 1. Create 2 RectanglePeterMutch objects *
* 2. Create 2 CirclePeterMutch objects    *
* 3. Create 2 BoxPeterMutch objects       *
* 4. Create 2 CylinderPeterMutch objects  *
* 5. Compare 2 selected objects by area   *
* 6. Compare 2 selected objects by size   *
* 7. Print selected objects               *
* 8. Quit                                 *
*******************************************
Select an option (use integer value only): 2

Calling init() for Circle 1 --
Please enter the numerator for the center's X value: 0

Please enter the denominator for the center's X value: 1

Please enter the numerator for the center's Y value: 0

Please enter the denominator for the center's Y value: 1

Please enter the numerator for the circle's radius: 1

Please enter the denominator for the circle's radius: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Circle has been updated.

Calling init() for Circle 2 --
Please enter the numerator for the center's X value: 2

Please enter the denominator for the center's X value: 1

Please enter the numerator for the center's Y value: 2

Please enter the denominator for the center's Y value: 1

Please enter the numerator for the circle's radius: 3

Please enter the denominator for the circle's radius: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Circle has been updated.


******************************************
*              Main MENU                  *
*                                         *
* 1. Create 2 RectanglePeterMutch objects *
* 2. Create 2 CirclePeterMutch objects    *
* 3. Create 2 BoxPeterMutch objects       *
* 4. Create 2 CylinderPeterMutch objects  *
* 5. Compare 2 selected objects by area   *
* 6. Compare 2 selected objects by size   *
* 7. Print selected objects               *
* 8. Quit                                 *
*******************************************
Select an option (use integer value only): 3

Calling init() for Box 1 --
Please enter the numerator for the front's lower left corner's X numerator: 0

Please enter the  denominator for the front's lower left corner's X denominator: 1

Please enter the numerator for the front's lower left corner's Y numerator: 0

Please enter the  denominator for the front's lower left corner's Y denominator: 1

Please enter the numerator for the front's upper right corner's X numerator: 2

Please enter the  denominator for the front's upper right corner's X denominator: 1

Please enter the numerator for the front's upper right corner's Y numerator: 2

Please enter the  denominator for the front's upper right corner's Y denominator: 1

Please enter the numerator for the height: 1

Please enter the  denominator for the height: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling RectanglePeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch()
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch()
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling RectanglePeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling BoxPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Box has been initialized.

Calling init() for Box 2 --
Please enter the numerator for the front's lower left corner's X numerator: 3

Please enter the  denominator for the front's lower left corner's X denominator: 1

Please enter the numerator for the front's lower left corner's Y numerator: 3

Please enter the  denominator for the front's lower left corner's Y denominator: 1

Please enter the numerator for the front's upper right corner's X numerator: 4

Please enter the  denominator for the front's upper right corner's X denominator: 1

Please enter the numerator for the front's upper right corner's Y numerator: 4

Please enter the  denominator for the front's upper right corner's Y denominator: 1

Please enter the numerator for the height: 3

Please enter the  denominator for the height: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling RectanglePeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch()
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch()
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling RectanglePeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling BoxPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Box has been initialized.

Calling init() for Cylinder 1 --
Please enter the numerator for the base center's X value: 2

Please enter the denominator for the base center's X value: 1

Please enter the numerator for the base center's Y value: 3

Please enter the denominator for the base center's Y value: 1

Please enter the numerator for the base's radius: 4

Please enter the denominator for the base's radius: 1

Please enter the numerator for the height: 3

Please enter the  denominator for the height: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling CirclePeterMutch() Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch()
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling CirclePeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling CylinderPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Cylinder has been initialized.

Calling init() for Cylinder 2 --
Please enter the numerator for the base center's X value: 2

Please enter the denominator for the base center's X value: 1

Please enter the numerator for the base center's Y value: 3

Please enter the denominator for the base center's Y value: 1

Please enter the numerator for the base's radius: 4

Please enter the denominator for the base's radius: 1

Please enter the numerator for the height: 5

Please enter the  denominator for the height: 1
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling CirclePeterMutch() Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling PointPeterMutch()
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutchCalling FractionPeterMutch()

Calling ~FractionPeterMutch
Calling CirclePeterMutch() Calling FractionPeterMutch()
Calling FractionPeterMutch()
Calling FractionPeterMutch()

Calling ~FractionPeterMutchCalling CylinderPeterMutch()

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Cylinder has been initialized.


******************************************
*              Main MENU                  *
*                                         *
* 1. Create 2 RectanglePeterMutch objects *
* 2. Create 2 CirclePeterMutch objects    *
* 3. Create 2 BoxPeterMutch objects       *
* 4. Create 2 CylinderPeterMutch objects  *
* 5. Compare 2 selected objects by area   *
* 6. Compare 2 selected objects by size   *
* 7. Print selected objects               *
* 8. Quit                                 *
*******************************************
Select an option (use integer value only): 5
