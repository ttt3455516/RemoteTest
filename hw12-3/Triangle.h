#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <math.h>
#include "GeometricObject.h"
class Triangle : public GeometricObject {
public:
	Triangle(double a, double b, double c) { 
		double s = (a + b + c) / 2;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
	}
	std::ostream& output(std::ostream& os) const {
		os << "Triangle";
		return os;
	};
};
#endif