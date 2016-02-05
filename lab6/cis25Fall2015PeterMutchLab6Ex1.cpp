/**
* Program Name: cis25Fall2015PeterMutchLab5Ex1.cpp
* Discussion:   Lab #5 Exercise #1
* Written By:   Peter Mutch
* Date:         2015/11/12
*/

#include <iostream>
#include "../lab5/fractionPeterMutch.h"
#include "../lab5/fractionUtilsPeterMutch.h"
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
Assignment Number: Lab 5,
Exercise # 1
Written by:        Peter Mutch
Due Date:          2015-11-05
*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 2
Not a proper call as no fractions are available!
*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 1

Calling Initializing Menu

************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 2

Not a proper call as no fractions are available!
************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 1

Calling init() --
Please enter the numerator for Fraction L: 1

Please enter the denominator for Fraction L: 2
FractionL initialized as 1/2
Please enter the numerator for Fraction R: 3

Please enter the denominator for Fraction R: 4
FractionR initialized as 3/4
************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 1

The fractions are already initialized, please choose another option.
************************
*  Initializing Menu   *
*                      *
* 1. Standalone Init() *
* 2. Update Fraction L *
* 3. Update Fraction R *
* 4. Update Both       *
* 5. Back              *
************************

Choose an option: 5

Returning to Main Menu

*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 2

Calling Adding Menu

*******************************
*        Adding Menu          *
*                             *
*  1. add() - Member          *
*  2. add() - Standalone      *
*  3. operator+() - Member    *
*  4. Return to Previous Menu *
*******************************

Choose an option: 1
Calling member adding method
1/2+3/4=5/4
*******************************
*        Adding Menu          *
*                             *
*  1. add() - Member          *
*  2. add() - Standalone      *
*  3. operator+() - Member    *
*  4. Return to Previous Menu *
*******************************

Choose an option: 2
Returning to Main Menu
Invalid option

*******************************
*        Adding Menu          *
*                             *
*  1. add() - Member          *
*  2. add() - Standalone      *
*  3. operator+() - Member    *
*  4. Return to Previous Menu *
*******************************

Choose an option: 4
Returning to Main Menu
Invalid option

*******************
*        MENU     *
*                 *
* 1. Initializing *
* 2. Adding       *
* 3. Subtracting  *
* 4. Multiplying  *
* 5. Dividing     *
* 6. Printing     *
* 7. Quit         *
*******************
Select an option (use integer value only): 7

Goodbye!





Comments:

My menus seem to refuse to accept any option other than 1 or the final option, and I'm not sure why.
I was unable to get the ostream overloader to work.
My formatting is awful.
I'm already using a late extension block and handing this in past 6:15.

I'm sorry that I've disappointed you.

*/
