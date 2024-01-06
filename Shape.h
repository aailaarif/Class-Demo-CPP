#pragma once
#include <string>
#include "Point.h"
#include <iostream>
using namespace std;
class Shape
{
private:
	string color;
	Point location;
public:
	Shape();
	Shape(string col, Point loc);
	void setColor(string col);
	void move(double delX, double delY);
	string getColor();
	Point getLocation();
	virtual void print(); //makes it go to the print function from the object type - makes it execute during running time instead of compiling time
	virtual double getArea() = 0; // =0 means it has no definition, do not need to implement in Shape.cpp, basically abstract
	virtual double getPerimeter() = 0; //made this class into an abstract class, cannot create Shape objects

};

