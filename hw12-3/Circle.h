#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES
#include <math.h>
#include "GeometricObject.h"
class Circle : public GeometricObject {
public:
	Circle(double d) { area = d*d*M_PI; }
	std::ostream& output(std::ostream& os) const {
		os << "Circle";
		return os;
	};
};
#endif