#include <iostream>
#include <memory>
#include <set>
#include "GeometricObject.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "LessGeom.h"
using namespace std;
int main() {
	shared_ptr<GeometricObject> square1(new Square(10));
	shared_ptr<GeometricObject> circle1(new Circle(5));
	shared_ptr<GeometricObject> circle2(new Circle(4));
	shared_ptr<GeometricObject> triangle(new Triangle(3, 4, 5));
	shared_ptr<GeometricObject> square2(new Square(5));
	multiset< shared_ptr<GeometricObject>, LessGeom > geos = { square1,
		circle1, circle2, triangle, square2 };
	for (const auto& e : geos)
	{
		cout << *e << " with area equals " << e->getArea() << endl;
	}
	//test
	return 0;
}