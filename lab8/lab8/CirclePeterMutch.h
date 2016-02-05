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
	FractionPeterMutch height;
protected:
    FractionPeterMutch pi;
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

	PointPeterMutch getCenter() const;
	FractionPeterMutch getRadius() const;

	//Computation and others

	FractionPeterMutch computeArea();
	FractionPeterMutch computeVolume();

	void validate();

	void print();


};


#endif
