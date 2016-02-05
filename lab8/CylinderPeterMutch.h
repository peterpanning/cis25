#ifndef CYLINDERPETERMUTCH_H
#define CYLINDERPETERMUTCH_H
#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "PointPeterMutch.h"
#include "CirclePeterMutch.h"
#include <iostream>
using namespace std;

class CylinderPeterMutch: public ShapePeterMutch {
private:
    CirclePeterMutch base;
    FractionPeterMutch height;
    FractionPeterMutch pi = FractionPeterMutch(157, 50);

public:
    //Constructors
    CylinderPeterMutch();
    CylinderPeterMutch(const CirclePeterMutch&, const FractionPeterMutch&);
    CylinderPeterMutch(CylinderPeterMutch&);

    //Setters

    void setBase(CirclePeterMutch&);
    void setHeight(FractionPeterMutch&);
    void setBoth(const CirclePeterMutch&, const FractionPeterMutch&);

    //Getters

    CirclePeterMutch getBase();
    FractionPeterMutch getHeight();

    //Computation and other functions

    FractionPeterMutch computeArea();
    FractionPeterMutch computeVolume();

    void validate();

    void print();

    //Operator overloads
	/*
    CylinderPeterMutch operator+(const CylinderPeterMutch&);

};*/




#endif
