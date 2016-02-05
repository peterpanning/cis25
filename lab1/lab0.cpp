#include <iostream>
using namespace std;

int printMyInformation(){
	cout << "CIS 25 - C++ Programming" << endl;
	cout << "Laney College" << endl;
	cout << "Peter Mutch" << endl;
	cout << endl << "Assignment Information --" << endl;
	cout << "  Assignment Number: Lab 01," << endl;
	cout << "                     Coding Assignment -- Exercise #1" << endl;
	cout << "  Written by:        Peter Mutch" << endl;
	cout << "  Submitted Date:    September 3, 2015" << endl;
	return 0;
}

int getMostOccurredDigit(int x){
	int Array0[10] = {};
	int mostOccurred;
	int index;
	//Until x is 0, increment the index of the array that is equal to the rightmost digit of x and then remove that digit.
	while (x != 0) {
		Array0[x % 10] += 1;
		x /= 10;
	}
	mostOccurred = 0;
	//Check each index of the array to find the index with the highest corresponding value.
	//If two values are tied, we do not change the mostOccurred value.
	for (index = 1; index < 10; index++){
		if (Array0[mostOccurred] < Array0[index]){
			mostOccurred = index;
		}
	}
	return mostOccurred;
}

int menu(){
	int menuChoice;
	int int0;
	int result;
	do {
		cout << endl;
		cout << "****************************************" << endl;
		cout << "*                 MENU                 *" << endl;
		cout << "*  (1) Calling getMostOccurredDigit()  *" << endl;
		cout << "*  (2) Quit                            *" << endl;
		cout << "****************************************" << endl << endl;
		cout << "Enter your option (1 or 2): ";
        cin >> menuChoice;
		switch (menuChoice){
		case 1:
			cout << endl << "Enter an integer: ";
			cin >> int0;
			if (int0 < 0){
				result = getMostOccurredDigit(int0*-1);
			}
			else{
				result = getMostOccurredDigit(int0);
			}
			cout << endl << "The digit occurred most in " << int0 << " is " << result << "." << endl;
			break;
		case 2:
			cout << endl << "Working Good!" << endl;
			break;
		default:
			cout << endl << "Please enter either 1 or 2." << endl << endl;
		}
	} while (menuChoice != 2);
	return 0;
}

int main(){
	printMyInformation();
	menu();
	return 0;
}
