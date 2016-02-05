#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include <iostream>
using namespace std;

void init(FractionPeterMutch** fractionL, FractionPeterMutch** fractionR) {
	int input1, input2;
	cout << "\nPlease enter the numerator for Fraction L: ";
	cin >> input1;
	cout << "\nPlease enter the denominator for Fraction L: ";
	cin >> input2;
	*fractionL = new FractionPeterMutch(input1, input2);

	cout << "FractionL initialized as " << (**fractionL).getNum() << "/" 
		<< (**fractionL).getDenom();

	cout << "\nPlease enter the numerator for Fraction R: ";
	cin >> input1;
	cout << "\nPlease enter the denominator for Fraction R: ";
	cin >> input2;
	*fractionR = new FractionPeterMutch(input1, input2);

	cout << "FractionR initialized as " << (**fractionR).getNum() << "/" 
		<< (**fractionR).getDenom();

	return;

}

void add(FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, 
	FractionPeterMutch** result) {
	if (*result == nullptr) {
		(*result) = new FractionPeterMutch(
			(*fractionL)->getNum() * (*fractionR)->getDenom() +
			(*fractionR)->getNum() * (*fractionL)->getDenom(),
			(*fractionL)->getDenom() * (*fractionR)->getDenom());
	}
	else {
		(*result)->setBoth(
			(*fractionL)->getNum() * (*fractionR)->getDenom() +
			(*fractionR)->getNum() * (*fractionL)->getDenom(),
			(*fractionL)->getDenom() * (*fractionR)->getDenom());
	}
}

void subtract(FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, 
	FractionPeterMutch** result) {
	if (*result == nullptr) {
		(*result) = new FractionPeterMutch(
			(*fractionL)->getNum() * (*fractionR)->getDenom() -
			(*fractionR)->getNum() * (*fractionL)->getDenom(),
			(*fractionL)->getDenom() * (*fractionR)->getDenom());
	}
	else {
		(*result)->setBoth(
			(*fractionL)->getNum() * (*fractionR)->getDenom() -
			(*fractionR)->getNum() * (*fractionL)->getDenom(),
			(*fractionL)->getDenom() * (*fractionR)->getDenom());
	}
}

void multiply(FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, 
	FractionPeterMutch** result) {
	if (*result == nullptr) {
		(*result) = new FractionPeterMutch(
			(*fractionL)->getNum() * (*fractionR)->getNum(),
			(*fractionL)->getDenom() * (*fractionR)->getDenom());
	}
	else {
		(*result)->setBoth(
			(*fractionL)->getNum() * (*fractionR)->getNum(),
			(*fractionL)->getDenom() * (*fractionR)->getDenom());
	}
}

void divide(FractionPeterMutch** fractionL, FractionPeterMutch** fractionR, 
	FractionPeterMutch** result) {
	if (*result == nullptr) {
		(*result) = new FractionPeterMutch(
			(*fractionL)->getNum() * (*fractionR)->getDenom(),
			(*fractionL)->getDenom() * (*fractionR)->getNum());
	}
	else {
		(*result)->setBoth(
			(*fractionL)->getNum() * (*fractionR)->getDenom(),
			(*fractionL)->getDenom() * (*fractionR)->getNum());
	}
}

void print(FractionPeterMutch** fraction) {
	cout << (*fraction)->getNum() << "/" << (*fraction)->getDenom();
}