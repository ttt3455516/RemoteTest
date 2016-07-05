#ifndef SQUARE_H
#define SQUARE_H
#include "GeometricObject.h"
class Square : public GeometricObject{
public:
	Square(double d) { area = d*d; }
	std::ostream& output(std::ostream& os) const{
		os << "Square";
		return os;
	};
};
#endif