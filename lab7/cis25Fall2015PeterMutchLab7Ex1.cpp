/**
* Program Name: cis25Fall2015PeterMutchLab7Ex1.cpp
* Discussion:   Lab #7 Exercise #1
* Written By:   Peter Mutch
* Date:         2015/11/12
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

OUTPUT:


CIS 25 -- C++ Programming
Laney College
Peter Mutch

Assignment Information --
  Assignment Number: Lab 6,
                     Exercise # 1
  Written by:        Peter Mutch
  Due Date:          2015-11-24

*************************************
*              Main MENU            *
*                                   *
* 1. Rectangle Tasks                *
* 2. Circle Tasks                   *
* 3. Mixed Rectangle & Circle Tasks *
* 4. Quit                           *
*************************************
Select an option (use integer value only): 1

Calling Rectangle Menu

***********************************
*         Rectangle Menu          *
*                                 *
* 1. Create two Rectangle Objects *
* 2. Compare by volume            *
* 3. Compare by area              *
* 4. Print two Rectangle Objects  *
* 5. Back                         *
***********************************

 Choose an option: 1

Calling init() for Rectangle 1 --
Please enter the numerator for the lower left corner's X value: 1

Please enter the  denominator for the lower left corner's X value: 2

Please enter the numerator for the lower left corner's Y value: 1

Please enter the  denominator for the lower left corner's Y value: 1

Please enter the numerator for the upper right corner's X value: 4

Please enter the  denominator for the upper right corner's X value: 1

Please enter the numerator for the upper right corner's Y value: 2

Please enter the  denominator for the upper right corner's Y value: 1

Calling PointPeterMutch()
Calling PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
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
Rectangle has been initialized.

Calling init() for Rectangle 2 --
Please enter the numerator for the lower left corner's X value: -1

Please enter the  denominator for the lower left corner's X value: 1

Please enter the numerator for the lower left corner's Y value: -2

Please enter the  denominator for the lower left corner's Y value: 1

Please enter the numerator for the upper right corner's X value: 2

Please enter the  denominator for the upper right corner's X value: 1

Please enter the numerator for the upper right corner's Y value: -1

Please enter the  denominator for the upper right corner's Y value: 2

Calling PointPeterMutch()
Calling PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
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
Rectangle has been initialized.


***********************************
*         Rectangle Menu          *
*                                 *
* 1. Create two Rectangle Objects *
* 2. Compare by volume            *
* 3. Compare by area              *
* 4. Print two Rectangle Objects  *
* 5. Back                         *
***********************************

 Choose an option: 2

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
The rectangles have the same volume.


***********************************
*         Rectangle Menu          *
*                                 *
* 1. Create two Rectangle Objects *
* 2. Compare by volume            *
* 3. Compare by area              *
* 4. Print two Rectangle Objects  *
* 5. Back                         *
***********************************

 Choose an option: 3

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Rectangle 2 is larger than Rectangle 1.


***********************************
*         Rectangle Menu          *
*                                 *
* 1. Create two Rectangle Objects *
* 2. Compare by volume            *
* 3. Compare by area              *
* 4. Print two Rectangle Objects  *
* 5. Back                         *
***********************************

 Choose an option: 4

Rectangle 1: Bottom left is (1/2, 1/1) and top right is (4/1, 2/1)
Rectangle 2: Bottom left is (-1/1, -2/1) and top right is (2/1, -1/2)

***********************************
*         Rectangle Menu          *
*                                 *
* 1. Create two Rectangle Objects *
* 2. Compare by volume            *
* 3. Compare by area              *
* 4. Print two Rectangle Objects  *
* 5. Back                         *
***********************************

 Choose an option: 5

 Returning to Main Menu


*************************************
*              Main MENU            *
*                                   *
* 1. Rectangle Tasks                *
* 2. Circle Tasks                   *
* 3. Mixed Rectangle & Circle Tasks *
* 4. Quit                           *
*************************************
Select an option (use integer value only): 2

Calling Circle Menu

*********************************
*          Circle Menu          *
*                               *
*  1. Create two Circle Objects *
*  2. Compare by Volume         *
*  3. Compare by Area           *
*  4. Print two Circle Objects  *
*  5. Return                    *
*********************************

 Choose an option: 1

Calling init() for Circle 1 -- Please enter the numerator for the center's X val
ue: 1
Please enter the denominator for the center's X value: 2
Please enter the numerator for the center's Y value: 2
Please enter the denominator for the center's Y value: 1
Please enter the numerator for the circle's radius: 4
Please enter the denominator for the circle's radius: 1

Calling PointPeterMutch()
Calling PointPeterMutch()
Calling CirclePeterMutch()
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCircle has been initialized.

Calling init() for Circle 2 -- Please enter the numerator for the center's X val
ue: -1
Please enter the denominator for the center's X value: 1
Please enter the numerator for the center's Y value: -1
Please enter the denominator for the center's Y value: 2
Please enter the numerator for the circle's radius: 2
Please enter the denominator for the circle's radius: 1

Calling PointPeterMutch()
Calling PointPeterMutch()
Calling CirclePeterMutch()
Calling ~FractionPeterMutch
Calling ~PointPeterMutch()
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutchCircle has been initialized.


*********************************
*          Circle Menu          *
*                               *
*  1. Create two Circle Objects *
*  2. Compare by Volume         *
*  3. Compare by Area           *
*  4. Print two Circle Objects  *
*  5. Return                    *
*********************************

 Choose an option: 2

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
The circles have the same volume.


*********************************
*          Circle Menu          *
*                               *
*  1. Create two Circle Objects *
*  2. Compare by Volume         *
*  3. Compare by Area           *
*  4. Print two Circle Objects  *
*  5. Return                    *
*********************************

 Choose an option: 3

Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
Calling ~FractionPeterMutch
The circles have the same area.


*********************************
*          Circle Menu          *
*                               *
*  1. Create two Circle Objects *
*  2. Compare by Volume         *
*  3. Compare by Area           *
*  4. Print two Circle Objects  *
*  5. Return                    *
*********************************

 Choose an option: 4

Circle 1: Center is (1/2, 2/1) and radius is 4/1
Circle 2: Center is (-1/1, -1/2) and radius is 2/1

*********************************
*          Circle Menu          *
*                               *
*  1. Create two Circle Objects *
*  2. Compare by Volume         *
*  3. Compare by Area           *
*  4. Print two Circle Objects  *
*  5. Return                    *
*********************************

 Choose an option:




 COMMENTS:

 Returns to main menu correctly, crashes when comparing a circle with a rectangle or vice versa.
 Seems to have some errors calculating circle errors, not sure why.
 Seems to have difficulty validating correct points, not sure why.
 Known issues from previous fraction and point classes still exist.




 */























