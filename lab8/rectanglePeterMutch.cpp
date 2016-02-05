#include "fractionPeterMutch.h"
#include "fractionUtilsPeterMutch.h"
#include "PointPeterMutch.h"
#include "rectanglePeterMutch.h"
#include <iostream>
using namespace std;


    //Constructors

	RectanglePeterMutch::RectanglePeterMutch() {
		bottomLeft = PointPeterMutch(0, 0);
		topRight = PointPeterMutch(1, 1);
		height = topRight.getY() - bottomLeft.getY();
		width = topRight.getX() - bottomLeft.getX();
		depth = FractionPeterMutch(0, 1);
		cout << "Calling RectanglePeterMutch()" << endl;
	}

	RectanglePeterMutch::RectanglePeterMutch(const PointPeterMutch& bLeft, const
		PointPeterMutch& tRight) {
		bottomLeft = bLeft;
		topRight = tRight;
		validate();
		height = topRight.getY() - bottomLeft.getY();
		width = topRight.getX() - bottomLeft.getX();
        cout << "Calling RectanglePeterMutch()" << endl;
	}

	RectanglePeterMutch::RectanglePeterMutch(const RectanglePeterMutch& arg) {
        bottomLeft = arg.getBottomLeft();
        topRight = arg.getTopRight();
        height = topRight.getY() - bottomLeft.getY();
		width = topRight.getX() - bottomLeft.getX();
		cout << "Calling RectanglePeterMutch()" << endl;
	}

    //Setters

    void RectanglePeterMutch::setBottomLeft(const PointPeterMutch& arg) {
        bottomLeft.setBoth(arg.getX(), arg.getY());
    }

    void RectanglePeterMutch::setTopRight(const PointPeterMutch& arg) {
        topRight.setBoth(arg.getX(), arg.getY());
    }

    void RectanglePeterMutch::setBoth(const PointPeterMutch& blArg, const
		PointPeterMutch& trArg) {
        bottomLeft.setBoth(blArg.getX(), blArg.getY());
        topRight.setBoth(trArg.getX(), trArg.getY());
    }

    //Getters

    PointPeterMutch RectanglePeterMutch::getBottomLeft() const {
        return bottomLeft;
    }
    PointPeterMutch RectanglePeterMutch::getTopRight() const {
        return topRight;
    }
    FractionPeterMutch RectanglePeterMutch::getHeight() const {
        return height;
    }
    FractionPeterMutch RectanglePeterMutch::getWidth() const {
        return width;
    }

    //Computation

    FractionPeterMutch RectanglePeterMutch::computeArea() {
        return FractionPeterMutch(height * width);
    }
    FractionPeterMutch RectanglePeterMutch::computeVolume() {
        return FractionPeterMutch(height * width * depth);
    }

	//Validation

	void RectanglePeterMutch::validate() {

		FractionPeterMutch* tmpFrac = nullptr;
		PointPeterMutch* tmpPoint = nullptr;

		//If the points are completely wrong, wherein the lower left is
		//actually the upper right, we just switch them.

		if (bottomLeft.getX() > topRight.getX() && bottomLeft.getY() >
			topRight.getY()) {
			tmpPoint = &bottomLeft;
			setBottomLeft(topRight);
			setTopRight(*tmpPoint);
		}

		//Otherwise, if the lower left is either not lower or not left,
		//we just switch the x values.

		else if (bottomLeft.getX() > topRight.getX() || bottomLeft.getY()
 > topRight.getY()) {
			tmpFrac = new FractionPeterMutch(bottomLeft.getX());
			setBottomLeft(PointPeterMutch(topRight.getX(), bottomLeft.getY()));
			setTopRight(PointPeterMutch(*tmpFrac, topRight.getY()));
		}
		delete tmpPoint;
		delete tmpFrac;
	}


    void RectanglePeterMutch::print() {
        cout << "Bottom left is " << bottomLeft << " and top right is " << topRight;
    }
