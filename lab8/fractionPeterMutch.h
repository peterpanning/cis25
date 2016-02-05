#ifndef FRACTIONPETERMUTCH_H
#define FRACTIONPETERMUTCH_H

#include <iostream>
using namespace std;

class FractionPeterMutch {

public:

	FractionPeterMutch();

	FractionPeterMutch(const FractionPeterMutch& arg);

	FractionPeterMutch(int arg);

	FractionPeterMutch(int arg1, int arg2);

	~FractionPeterMutch(); // DESTRUCTOR

	int getNum (void) const;

	void setNum(int arg);

	int getDenom (void) const;

	void setDenom(int arg);

	void setBoth(int input1, int input2);

	void reduce(void);

	void print(void);

	//Arithmetic Functions

	void add(const FractionPeterMutch&);

	void add(const FractionPeterMutch& fractionL, const
		FractionPeterMutch& fractionR);

	void subtract(const FractionPeterMutch& fractionL, const
		FractionPeterMutch& fractionR);

	void multiply(const FractionPeterMutch& fractionL, const
		FractionPeterMutch& fractionR);

	void divide(const FractionPeterMutch& fractionL, const
		FractionPeterMutch& fractionR);

	//Member Operator Overload Functions

	FractionPeterMutch& operator=(const FractionPeterMutch&);
	FractionPeterMutch operator+(const FractionPeterMutch&);
	FractionPeterMutch operator-(const FractionPeterMutch&);
	FractionPeterMutch operator*(const FractionPeterMutch&);
	FractionPeterMutch operator/(const FractionPeterMutch&);
	FractionPeterMutch operator%(const FractionPeterMutch&);

    //Member Comparison Operator Overload Functions

	bool operator==(const FractionPeterMutch&);
	bool operator!=(const FractionPeterMutch&);
	bool operator<=(const FractionPeterMutch&);
	bool operator>=(const FractionPeterMutch&);
	bool operator<(const FractionPeterMutch&);
	bool operator>(const FractionPeterMutch&);


	//Friend overloads, two of each so that arithmetic operations can be
	//performed with fractions on either side of the operator.

    friend ostream& operator<<(ostream& stream, const
		FractionPeterMutch& fraction);
	friend FractionPeterMutch operator+(const int&, const
		FractionPeterMutch&);
	friend FractionPeterMutch operator+(const FractionPeterMutch&,
		const int&);
	friend FractionPeterMutch operator-(const FractionPeterMutch&,
		const int&);
	friend FractionPeterMutch operator-(const int&, const
		FractionPeterMutch&);
	friend FractionPeterMutch operator*(const int&, const
		FractionPeterMutch&);
	friend FractionPeterMutch operator*(const FractionPeterMutch&,
		const int&);
	friend FractionPeterMutch operator/(const int&, const
		FractionPeterMutch&);
	friend FractionPeterMutch operator/(const FractionPeterMutch&,
		const int&);

private:

	int num;

	int denom;

};

#endif
