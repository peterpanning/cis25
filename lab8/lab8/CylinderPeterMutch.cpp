#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "PointPeterMutch.h"
#include "CylinderPeterMutch.h"
#include <iostream>
using namespace std;

//Constructors
CylinderPeterMutch::CylinderPeterMutch() {
    base = CirclePeterMutch();
    height = FractionPeterMutch(1, 1);
    cout << "Calling CylinderPeterMutch()" << endl;
}

CylinderPeterMutch::CylinderPeterMutch(const CirclePeterMutch& circ, const FractionPeterMutch& frac) {
    base = circ;
    height = frac;
    validate();
    cout << "Calling CylinderPeterMutch()" << endl;
}
CylinderPeterMutch::CylinderPeterMutch(CylinderPeterMutch& cyl) {
    base = cyl.getBase();
    height = cyl.getHeight();
    cout << "Calling CylinderPeterMutch()" << endl;
}

//Setters

void CylinderPeterMutch::setBase(CirclePeterMutch& circ) {
    base.setBoth(circ.getCenter(), circ.getRadius());
}
void CylinderPeterMutch::setHeight(FractionPeterMutch& frac) {
    height.setBoth(frac.getNum(), frac.getDenom());
}
void CylinderPeterMutch::setBoth(const CirclePeterMutch& circ, const FractionPeterMutch& frac) {
    base.setBoth(circ.getCenter(), circ.getRadius());
    height.setBoth(frac.getNum(), frac.getDenom());
}

//Getters

CirclePeterMutch CylinderPeterMutch::getBase() {
    return base;
}
FractionPeterMutch CylinderPeterMutch::getHeight() {
    return height;
}

//Computation and other functions

FractionPeterMutch CylinderPeterMutch::computeArea() {
    return ((4 * pi * base.getRadius()) + (2 * pi * base.getRadius() * base.getRadius()));
}
FractionPeterMutch CylinderPeterMutch::computeVolume() {
    return (pi * base.getRadius() * base.getRadius() * getHeight());
}

void CylinderPeterMutch::validate() {
    if (height < 0) height = -1 * height;
}

void CylinderPeterMutch::print() {
    cout << "Base is centered at " << base.getCenter() << " with a radius of " << base.getRadius() << ", height is " << height << endl;
}


//Operator overloads

    /*&CylinderPeterMutch operator=(const CylinderPeterMutch arg) {
        base = arg.base;
        height = arg.height;
        return *this;
    }
    CylinderPeterMutch operator+(const CylinderPeterMutch& arg) {
        return CylinderPeterMutch(CirclePeterMutch((center + arg.base.getCenter()), radius + arg.base.getRadius()));
    }*/
