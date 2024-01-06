#include "Shape.h"

Shape::Shape() 
{
	color = "White";
}
Shape::Shape(string col, Point loc)
{
	color = col;
	location = loc;
}
void Shape::setColor(string col)
{
	color = col;
}
void Shape::move(double delX, double delY) 
{
	double currentX = location.getX();
	double currentY = location.getY();
	location.setX(currentX + delX);
	location.setY(currentY + delY);
}
string Shape::getColor()
{
	return color;
}
Point Shape::getLocation()
{
	return location;
}
void Shape::print()
{
	cout << "Color: " + color + ",";
	location.print();
}