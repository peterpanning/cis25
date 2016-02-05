#ifndef BOXPETERMUTCH_H
#define BOXPETERMUTCH_H
#include "rectanglePeterMutch.h"
#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "PointPeterMutch.h"
#include <iostream>
using namespace std;

class BoxPeterMutch: public ShapePeterMutch {

private:
    RectanglePeterMutch base;

    FractionPeterMutch height;

    FractionPeterMutch length; //y - y of rectangle
	FractionPeterMutch width; //x - x of rectangle

public:
    //Constructors

    BoxPeterMutch();
    BoxPeterMutch(const RectanglePeterMutch&, const FractionPeterMutch&);
    BoxPeterMutch(const BoxPeterMutch&);

    //Setters
    void setBase(const RectanglePeterMutch&);
    void setHeight(FractionPeterMutch&);
    void setBoth(const RectanglePeterMutch&, const FractionPeterMutch&);

    //Getters

    RectanglePeterMutch getBase() const;
    FractionPeterMutch getHeight() const;

    //Calculations and other functions

    FractionPeterMutch computeArea();
    FractionPeterMutch computeVolume();

    void validate();
    void print();
};



#endif // BOXPETERMUTCH_H
