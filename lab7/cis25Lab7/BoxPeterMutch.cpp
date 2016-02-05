#include "BoxPeterMutch.h"
#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "shapePeterMutch.h"
#include "PointPeterMutch.h"
#include "rectanglePeterMutch.h"
#include <iostream>

using namespace std;

//Constructors

BoxPeterMutch::BoxPeterMutch() {
    base = RectanglePeterMutch();//Creates a rectangle at (0, 0) (1, 1)
    height = FractionPeterMutch(1, 1);
    length = FractionPeterMutch(1, 1);
    width = FractionPeterMutch(1, 1);
}

BoxPeterMutch::BoxPeterMutch(const RectanglePeterMutch& rect, const FractionPeterMutch& frac) {
    base = rect;
    height = frac;
    length = rect.getHeight();
    width = rect.getWidth();
    validate();
}

BoxPeterMutch::BoxPeterMutch(const BoxPeterMutch& bArg) {
    base = bArg.getBase();
    height = bArg.getHeight();
    length = bArg.base.getHeight();
    width = bArg.base.getWidth();
}

//Setters

void BoxPeterMutch::setBase(const RectanglePeterMutch& rect) {
    base.setBoth(rect.getBottomLeft(), rect.getTopRight());
}
void BoxPeterMutch::setHeight(FractionPeterMutch& frac) {
    height.setBoth(frac.getNum(), frac.getDenom());
}
void BoxPeterMutch::setBoth(const RectanglePeterMutch& rect, FractionPeterMutch& frac) {
    base.setBoth(rect.getBottomLeft(), rect.getTopRight());
    height.setBoth(frac.getNum(), frac.getDenom());
}

//Getters

RectanglePeterMutch BoxPeterMutch::getBase() const {
    return base;
}
    FractionPeterMutch BoxPeterMutch::getHeight() const {
    return height;
}

//Computation and other functions

FractionPeterMutch BoxPeterMutch::computeArea() {
    return ((2 * (length * width)) + ((2 * (height * length))) + ((2 * (height * width))));
}

FractionPeterMutch BoxPeterMutch::computeVolume() {
    return (length * width * height);
}

void BoxPeterMutch::validate() {
    if (height < 0) height = (-1 * height);
}

void BoxPeterMutch::print() {
    cout << "\nBox Print function goes here." << endl;
}




