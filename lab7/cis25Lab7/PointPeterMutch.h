#ifndef POINTPETERMUTCH_H
#define POINTPETERMUTCH_H
#include "fractionPeterMutch.h"
#include <iostream>
using namespace std;

class PointPeterMutch {

private:
	FractionPeterMutch x;
	FractionPeterMutch y;

public:
    //Default Constructor
	PointPeterMutch();

	//Copy Constructor
	PointPeterMutch(const PointPeterMutch&);

	//Fractional Constructor
	PointPeterMutch(const FractionPeterMutch&, const FractionPeterMutch&);

	//Convert Constructors
	PointPeterMutch(const int);
	PointPeterMutch(const FractionPeterMutch&);
	//TODO: Convert constructor for two ints

	//Destructor
	~PointPeterMutch();

	//Setters and Getters

	void setX(int num, int denom);
	void setX(const FractionPeterMutch&);
	void setY(int num, int denom);
	void setY(const FractionPeterMutch&);
	void setBoth(int numX, int denomX, int numY, int denomY);
	void setBoth(const FractionPeterMutch&, const FractionPeterMutch&);

	FractionPeterMutch getX() const;
	FractionPeterMutch getY() const;

	//Movers and Flippers

	void moveBoth(const FractionPeterMutch&, const FractionPeterMutch&);
	void moveBoth(const int, const int);
	void moveX(const FractionPeterMutch&);
	void moveY(const FractionPeterMutch&);
	void flipByX();
	void flipByY();
	void flipThroughOrigin();
	void print();

	//Operator Overloaders

	friend ostream& operator<<(ostream&, const PointPeterMutch&);
	PointPeterMutch& operator=(const PointPeterMutch&);
};

#endif
