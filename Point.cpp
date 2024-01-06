#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	x = y = 0;
}
Point::Point(double x, double y)
{
	this->x = x; //need to differentiate argument from instance variables
	this->y = y;
}
double Point::getX()
{
	return this->x;
}
double Point::getY()
{
	return this->y;
}
void Point::setX(double x)
{
	this->x = x;
}
void Point::setY(double y)
{
	this->y = y;
}
void Point::print()
{
	cout << "(" << x << "," << y << ")";
}