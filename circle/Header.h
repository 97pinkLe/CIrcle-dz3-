#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14;

class circle {

private:
	double radius;
public:
	circle();
	~circle();
	void setRadius(double);
	double getRadius();
	double getArea();
	double getLength();

};

#endif
