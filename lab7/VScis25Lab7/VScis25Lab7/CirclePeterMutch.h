#ifndef CIRCLEPETERMUTCH_H
#define CIRCLEPETERMUTCH_H
#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "PointPeterMutch.h"
using namespace std;

class CirclePeterMutch : public ShapePeterMutch {
private:
	PointPeterMutch center;
	FractionPeterMutch radius;

public:
	
	//Constructors
	
	CirclePeterMutch();
	CirclePeterMutch(const PointPeterMutch&, const FractionPeterMutch&);
	CirclePeterMutch(const CirclePeterMutch);

	//Setters

	void setCenter(const PointPeterMutch&);
	void setRadius(const FractionPeterMutch&);
	void setBoth(const PointPeterMutch&, const FractionPeterMutch&);
	
	//Getters

	PointPeterMutch getCenter(const PointPeterMutch&);
	FractionPeterMutch getRadius(const FractionPeterMutch&);

	//Computation and others

	virtual FractionPeterMutch computeArea();
	virtual FractionPeterMutch computeVolume();

	void validate();

	void print();


};


#endif