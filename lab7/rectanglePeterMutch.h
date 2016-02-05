#ifndef RECTANGLEPETERMUTCH_H
#define RECTANGLEPETERMUTCH_H
#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "PointPeterMutch.h"
#include <iostream>

using namespace std;

class RectanglePeterMutch: public ShapePeterMutch {

private:
	
	PointPeterMutch bottomLeft;
	PointPeterMutch topRight;
	
	FractionPeterMutch depth;
    FractionPeterMutch height;
	FractionPeterMutch width;

public:
	
	//Constructors
	
	RectanglePeterMutch();
	RectanglePeterMutch(const PointPeterMutch&, const PointPeterMutch&);
	RectanglePeterMutch(const RectanglePeterMutch&);

    //Setters

    void setBottomLeft(const PointPeterMutch&);
    void setTopRight(const PointPeterMutch&);
    void setBoth(const PointPeterMutch&, const PointPeterMutch&);

    //Getters

    PointPeterMutch getBottomLeft() const;
    PointPeterMutch getTopRight() const;
    FractionPeterMutch getHeight() const;
    FractionPeterMutch getWidth() const;


    //Computation

    virtual FractionPeterMutch computeArea();
    virtual FractionPeterMutch computeVolume();

	void validate();


    void print();
};

#endif 


