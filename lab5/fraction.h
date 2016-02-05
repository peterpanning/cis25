#ifndef FRACTION_H
#define FRACTION_H

class FractionPeterMutch {

public:

	FractionPeterMutch();

	FractionPeterMutch(const FractionPeterMutch& arg);

	FractionPeterMutch(int arg);

	~FractionPeterMutch(); // DESTRUCTOR

	int getNum(void);

	void setNum(int arg);

	int getDenom(void);

	void setDenom(int arg);

	//Operator overloaders

	FractionPeterMutch::operator=(const FractionPeterMutch&);
	FractionPeterMutch::operator+(const FractionPeterMutch&);
	FractionPeterMutch::operator-(const FractionPeterMutch&);

private:

	int num;

	int denom;

};

#endif

// FILE #2 - Implementation File

