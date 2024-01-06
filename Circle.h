#pragma once
#include "Point.h" //need to include header file when using method from that class
#include "Shape.h"
#include "Object.h"
class Circle: public Shape, public Object //makes inherited methods public in child class, inherit multiple with commas
{
private:
	double radius;
	//Point center;
public: //creating prototype public methods
	Circle();
	Circle(double initiR, Point& p, string col); //make it a reference so a new copy of Point isn't created
	Circle(double initiR);
	~Circle(); //destructor needs ~
	double getRadius();
	void setRadius(double); //variable name can be omitted
	double getArea();
	double getPerimeter();
	void print();
	//Point getCenter();
	//void setCenter(Point& p);
	bool operator>=(Circle& other);
};

