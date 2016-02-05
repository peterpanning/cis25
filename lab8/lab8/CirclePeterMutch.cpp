#include "CirclePeterMutch.h"
using namespace std;

//Constructors

CirclePeterMutch::CirclePeterMutch() {
	center = PointPeterMutch();
	radius = FractionPeterMutch(1, 1);
	pi = FractionPeterMutch(157, 50);
	height = FractionPeterMutch();
	cout << "\nCalling CirclePeterMutch() ";
}

CirclePeterMutch::CirclePeterMutch(const PointPeterMutch& pt,
	const FractionPeterMutch& frac)
	: center(pt), radius(frac)
	{
		cout << "\nCalling CirclePeterMutch() ";
		validate();
	}

CirclePeterMutch::CirclePeterMutch(const CirclePeterMutch& circ)
	: center(circ.center), radius(circ.radius)
	{
		cout << "\nCalling CirclePeterMutch() ";
	}

//Setters

void CirclePeterMutch::setCenter(const PointPeterMutch& pt) {
	center.setBoth(pt.getX(), pt.getY());
}

//The setters below call a new fraction constructor to set the
//radius--tried using the fraction's getter functions but they
//didn't work on a fraction address, and I couldn't evaluate the address
//to use them.  Below works, even if it's inefficient.

void CirclePeterMutch::setRadius(const FractionPeterMutch& arg) {
	radius = FractionPeterMutch(arg);
}

void CirclePeterMutch::setBoth(const PointPeterMutch& pt, const
	FractionPeterMutch& frac) {
	center.setBoth(pt.getX(), pt.getY());
	radius = FractionPeterMutch(frac);
}

//Getters

PointPeterMutch CirclePeterMutch::getCenter() const {
	return center;
}

FractionPeterMutch CirclePeterMutch::getRadius() const {
	return radius;
}

//Computation and others

FractionPeterMutch CirclePeterMutch::computeArea() {
	return (pi * radius * radius);
}

FractionPeterMutch CirclePeterMutch::computeVolume() {
	return (computeArea() * height);
}

void CirclePeterMutch::validate() {
	if (radius < 0) radius = -1 * radius;
}

void CirclePeterMutch::print() {
	cout << "Center is " << center << " and radius is " << radius;
}


