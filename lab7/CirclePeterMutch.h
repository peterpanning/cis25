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
	FractionPeterMutch pi;
	FractionPeterMutch height;
public:
	
	//Constructors
	
	CirclePeterMutch();
	CirclePeterMutch(const PointPeterMutch&, const FractionPeterMutch&);
	CirclePeterMutch(const CirclePeterMutch&);

	//Setters

	void setCenter(const PointPeterMutch&);
	void setRadius(const FractionPeterMutch&);
	void setBoth(const PointPeterMutch&, const FractionPeterMutch&);
	
	//Getters

	PointPeterMutch getCenter();
	FractionPeterMutch getRadius();

	//Computation and others

	virtual FractionPeterMutch computeArea() override;
	virtual FractionPeterMutch computeVolume() override;

	void validate();

	void print();


};


#endif