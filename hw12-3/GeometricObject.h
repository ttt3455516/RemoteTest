#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <iostream>
class GeometricObject {
protected:
	double area;
public:
	double getArea()  { return area; }
	virtual std::ostream& output(std::ostream& os) const {
		os << "GeometricObject";
		return os;
	};
};
inline
std::ostream& operator << (std::ostream& os, const GeometricObject& g) {
	return g.output(os);
}
#endif

