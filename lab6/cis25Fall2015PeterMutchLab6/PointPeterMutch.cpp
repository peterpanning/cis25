#include "fractionPeterMutch.h"
#include <iostream>
using namespace std;

class PointPeterMutch {
public:
    //Default Constructor
    PointPeterMutch() {
        x = FractionPeterMutch();
        y = FractionPeterMutch();
    }
    //Copy Constructor
    PointPeterMutch(const PointPeterMutch& arg) {
        x = arg.x;
        y = arg.y;
    }
    //Assignment operator function

    void moveBy(FractionPeterMutch delX, FractionPeterMutch delY) {
    }

    void moveBy(int iOld) {
    }

    void flipByX() {
    }

    void flipByY() {
    }

    void flipThroughOrigin() {
    }

    FractionPeterMutch getX() {
        return x;
    }

    FractionPeterMutch getY() {
        return y;
    }


    void setX(int num, int denom) {
        x.setNum(num);
        x.setDenom(denom);
    }

    void setY(int num, int denom) {
        y.setNum(num);
        y.setDenom(denom);
    }

    void setBoth(int numX, int denomX, int numY, int denomY) {
        x.setNum(numX);
        x.setDenom(denomX);
        y.setNum(numY);
        y.setDenom(denomY);
    }

    void print() {
        cout << "Gets here" << endl;
        cout << "X: " << getX() << "\nY: " << getY() << endl;
    }




private:
    FractionPeterMutch x;
    FractionPeterMutch y;

    //Also include I/O operator functions, whatever those are


};
