#include "Circle.h" //quotes instead of angle brackets
#include "Point.h"
#include <iostream>
using namespace std;

//implement public functions in cpp file


Circle::Circle():Shape(),Object("Circle")  //need Circle:: in order to have it be part of the Circle class, call Shape constructor
{
	radius = 1.0;
	//goes to constructor of Point and makes x and y set to 0
}

Circle::Circle(double initiR, Point& p, string col):Shape(col, p), Object("Circle")
{
	if (initiR >= 0)
		radius = initiR;
	else
		radius = 1.0;
	//center = p;
}
Circle::Circle(double initiR):Shape(), Object("Circle")
{
	if (initiR >= 0)
		radius = initiR;
	else
		radius = 1.0;
}
double Circle::getRadius() //double is before the Circle::
{
	return this->radius; //reference to THIS object needs ->
}
void Circle:: setRadius(double newR) //variable name can be omitted
{
	if (newR >= 0)
		radius = newR;
	else
		radius = radius;
}
double Circle::getArea() 
{
	return 3.14159 * this->radius * this->radius;
}
void Circle:: print() 
{
	Object::print();
	cout << ",";
	Shape::print();
	cout << ", radius: " << radius;
	//cout << ", center located at ";
	//center.print();
}
/*
Point Circle::getCenter() 
{
	return center;
}

void Circle::setCenter(Point& p)
{
	center = p;
}
*/
Circle:: ~Circle()
{
	cout << "Circle object is deleted! \n";

}

bool Circle::operator>=(Circle& other)
{
	return this->radius >= other.radius;
}

double Circle::getPerimeter()
{
	return 2 * 3.14159 * radius;
}


