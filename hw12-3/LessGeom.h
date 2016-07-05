#ifndef LESSGEOM_H
#define LESSGEOM_H
#include "GeometricObject.h"
#include <memory>
class LessGeom {
public:
	bool operator() (std::shared_ptr<GeometricObject> g1,  std::shared_ptr<GeometricObject> g2) {
		return g1->getArea() < g2->getArea();
	}
};
#endif