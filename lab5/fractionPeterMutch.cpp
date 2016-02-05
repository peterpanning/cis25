/**

* Program Name: fractionPeterMutch.cpp

* Fraction Class

*/

#include <iostream>

#include "fractionPeterMutch.h"

using namespace std;

FractionPeterMutch::FractionPeterMutch() {

	num = 0;

	denom = 1;

}

FractionPeterMutch::FractionPeterMutch(const FractionPeterMutch& arg) {

	num = arg.num;

	denom = arg.denom;

}

FractionPeterMutch::FractionPeterMutch(int arg) {

	num = arg;

	if (arg) {

		denom = arg;

	}
	else {

		denom = 1;

	}

}

FractionPeterMutch::FractionPeterMutch(int arg1, int arg2) {
    num = arg1;

    if (arg2) {

        denom = arg2;

    }
    else {

        denom = 1;

    }

}

FractionPeterMutch::~FractionPeterMutch() {

}

int FractionPeterMutch::getNum() {

	return num;

}

void FractionPeterMutch::setNum(int arg) {

	num = arg;

	return;

}

int FractionPeterMutch::getDenom() {

	return denom;

}

void FractionPeterMutch::setDenom(int arg) {

	if (arg) {

		denom = arg;

	}
	else {

		denom = 1;

	}

	return;

}

void FractionPeterMutch::setAll(int input1, int input2) {
	if (input2 < 0) {
		denom = -input2;
		num = -input1;
	}
	else {
		num = input1;
		denom = input2;
	}
	reduce();
}

void FractionPeterMutch::reduce() {
	int gcd, lesser;
	if (num < denom) lesser = num;
	else lesser = denom;
	for (gcd = lesser; gcd > 1; gcd--) {
		if (denom % gcd == 0 && num % gcd == 0) {
			denom /= gcd;
			num /= gcd;
			gcd = num;
		}
	}
}

void FractionPeterMutch::print() {
	cout << num << "/" << denom;
}

void FractionPeterMutch::add(const FractionPeterMutch& fractionL, const FractionPeterMutch& fractionR) {
	if (fractionL.denom == fractionR.denom) {
		num = fractionL.num + fractionR.num;
		denom = fractionL.denom;
	}
	else {
		num = (fractionL.num * fractionR.denom) + (fractionR.num * fractionL.denom);
		denom = fractionL.denom * fractionR.denom;
	}
	reduce();
}

void FractionPeterMutch::subtract(const FractionPeterMutch& fractionL, const FractionPeterMutch& fractionR) {
	if (fractionL.denom == fractionR.denom) {
		num = fractionL.num - fractionR.num;
		denom = fractionL.denom;
	}
	else {
		num = (fractionL.num * fractionR.denom) - (fractionR.num * fractionL.denom);
		denom = fractionL.denom * fractionR.denom;
	}
	reduce();
}

void FractionPeterMutch::multiply(const FractionPeterMutch& fractionL, const FractionPeterMutch& fractionR) {
	num = fractionL.num * fractionR.num;
	denom = fractionL.denom * fractionR.denom;
	reduce();
}

void FractionPeterMutch::divide(const FractionPeterMutch& fractionL, const FractionPeterMutch& fractionR) {
	num = fractionL.num * fractionR.denom;
	denom = fractionL.denom * fractionR.num;
	reduce();
}

//Member operator overloads

FractionPeterMutch& FractionPeterMutch::operator=(const FractionPeterMutch& arg) {
    num = arg.num;
    denom = arg.denom;
    return *this;
}

FractionPeterMutch FractionPeterMutch::operator+(const FractionPeterMutch& arg) {
    if (denom == arg.denom) {
        num += arg.num;
        return *this;
    }
    else {
        return FractionPeterMutch((*this).num * arg.denom + ((*this).denom * arg.num),
		(*this).denom * arg.denom);
    }
}

FractionPeterMutch FractionPeterMutch::operator-(const FractionPeterMutch& arg) {
    if (denom == arg.denom) {
        num -= arg.num;
        return *this;
    }
    else {
        return FractionPeterMutch((*this).num * arg.denom - ((*this).denom * arg.num),
		(*this).denom * arg.denom);
    }
}

FractionPeterMutch FractionPeterMutch::operator*(const FractionPeterMutch& arg) {
        return FractionPeterMutch((*this).num * arg.num, (*this).denom * arg.denom);
}

FractionPeterMutch FractionPeterMutch::operator/(const FractionPeterMutch& arg) {
    return FractionPeterMutch((*this).num * arg.denom, (*this).denom * arg.num);
}

//TODO: friend functions

ostream& operator<<(ostream& stream, const FractionPeterMutch& fraction) {
    stream << fraction.num << "/" << fraction.denom;
    return stream;
}

FractionPeterMutch operator+(const int& left, const FractionPeterMutch& right) {
	return FractionPeterMutch(left * right.denom + right.num, right.denom);
}

FractionPeterMutch operator+(const FractionPeterMutch& left, const int& right) {
    return FractionPeterMutch(right * left.num, left.denom);
}

FractionPeterMutch operator-(const int& left, const FractionPeterMutch& right) {
	return FractionPeterMutch(left * right.denom - right.num, right.denom);
}

FractionPeterMutch operator-(const FractionPeterMutch& left, const int& right) {
	return FractionPeterMutch(right * left.denom + left.num, left.denom);
}

FractionPeterMutch operator*(const int& left, const FractionPeterMutch& right) {
    return FractionPeterMutch(left * right.num, right.denom);
}

FractionPeterMutch operator*(const FractionPeterMutch& left, const int& right) {
    return FractionPeterMutch(right * left.num, left.denom);
}

FractionPeterMutch operator/(const int& left, const FractionPeterMutch& right) {
    return FractionPeterMutch(left * right.denom, left * right.num);
}

FractionPeterMutch operator/(const FractionPeterMutch& left, const int& right) {
	return FractionPeterMutch(right * left.denom, right * left.num);
}
