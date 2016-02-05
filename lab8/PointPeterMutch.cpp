#include "fractionPeterMutch.h"
#include "PointPeterMutch.h"
#include <iostream>
using namespace std;

    //Default Constructor
    PointPeterMutch::PointPeterMutch() {
        x = FractionPeterMutch(1, 1);
        y = FractionPeterMutch(1, 1);
		cout << "\nCalling PointPeterMutch() ";
    }
    //Two-Fraction Constructor
	PointPeterMutch::PointPeterMutch(const FractionPeterMutch& x, const 
		FractionPeterMutch& y) : x(x), y(y)
	{
		cout << "\nCalling PointPeterMutch() ";
	}
	
	//Copy Constructor
    PointPeterMutch::PointPeterMutch(const PointPeterMutch& arg)
		: x(arg.x), y(arg.y) {
		cout << "\nCalling PointPeterMutch() ";
    }
    
	//Convert Constructors

	PointPeterMutch::PointPeterMutch(const int input) : x(input) {
		cout << "\nCalling PointPeterMutch() ";
	}

	PointPeterMutch::PointPeterMutch(const FractionPeterMutch& xFrac) : x(xFrac)
	{
		cout << "\nCalling PointPeterMutch() ";
	}
	
	//Destructor

	PointPeterMutch::~PointPeterMutch() {
		cout << "\nCalling ~PointPeterMutch() ";
	}

	//Getters and Setters

	FractionPeterMutch PointPeterMutch::getX() const {
		return x;
	}

	FractionPeterMutch PointPeterMutch::getY() const {
		return y;
	}

	void PointPeterMutch::setX(const FractionPeterMutch& fracX) {
		x = fracX;
	}

	void PointPeterMutch::setX(int num, int denom) {
		x.setBoth(num, denom);
	}

	void PointPeterMutch::setY(const FractionPeterMutch& fracY) {
		y = fracY;
	}

	void PointPeterMutch::setY(int num, int denom) {
		y.setBoth(num, denom);
	}

	void PointPeterMutch::setBoth(int numX, int denomX, int numY, int denomY) {
		x.setBoth(numX, denomX);
		y.setBoth(numY, denomY);
	}
	
	void PointPeterMutch::setBoth(const FractionPeterMutch& fracX, const 
		FractionPeterMutch& fracY) {
		x = fracX;
		y = fracY;
	}
	
	
	void PointPeterMutch::moveBoth(const FractionPeterMutch& delX, const 
		FractionPeterMutch& delY) {
		x.add(delX);
		y.add(delY);
	}

	void PointPeterMutch::moveBoth(const int delX, const int delY) {
		//Must be written as int + fraction because of fraction operator
		//overloads.  Sloppy, could use better implementation.
		x = delX + x;
		y = delY + y;
	}

    void PointPeterMutch::moveX(const FractionPeterMutch& delX) {
		x.add(delX);
    }

	void PointPeterMutch::moveY(const FractionPeterMutch& delY) {
		y.add(delY);
	}

    void PointPeterMutch::flipByX() {
		x.setNum(-(x.getNum()));
    }

    void PointPeterMutch::flipByY() {
		y.setNum(-(y.getNum()));
    }

    void PointPeterMutch::flipThroughOrigin() {
		x.setNum(-(x.getNum()));
		y.setNum(-(y.getNum()));
    }

   
//Print function
    void PointPeterMutch::print() {
        cout << "\n(" << x << ", " << y << ")";
    }

//Operator overloads

	ostream& operator<<(ostream& os, const PointPeterMutch& point) {
		os << "(" << point.x << ", " << point.y << ")";
		return os;
	}

	PointPeterMutch& PointPeterMutch::operator=(const PointPeterMutch& newPoint) {
		x = newPoint.x;
		y = newPoint.y;
		return (*this);
	}