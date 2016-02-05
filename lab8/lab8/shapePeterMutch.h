#ifndef SHAPEPETERMUTCH_H
#define SHAPEPETERMUTCH_H
#include "fractionPeterMutch.h"
#include <iostream>

using namespace std;

class ShapePeterMutch {
public:
    virtual FractionPeterMutch computeArea(){};
    virtual FractionPeterMutch computeVolume(){};
    virtual void print() =0;
};

#endif
