#include "Circle.h"
#include "Point.h"
#include <iostream>
#include "Shape.h"
#include "../../../../Downloads/Rectangle.h"
using namespace std;

double largestArea(Shape* shapes[], int size)
{
	double result = shapes[0]->getArea();
	for (int i = 1;i < size;i++)
	{
		if (shapes[i]->getArea() > result) {
			result = shapes[i]->getArea();
		}
	}
	return result;
}

void printShape(Shape& obj)
{
	obj.print();
}

void printShape(Shape* obj)
{
	obj->print(); //it is a reference, so need to use arrow to call a function
	cout << ", area:" << obj->getArea() << ", perimeter:" << obj->getPerimeter();
}

Shape* smallerShape(Shape* s1, Shape* s2)
{
	if (s1->getArea() < s2->getArea()) {
		return s1;
	}
	else if (s1->getArea() > s2->getArea())
	{
		return s2;
	}
	else return NULL; //returns nothing if the areas of the shapes are the same
	
}

void expandShape(Shape* obj)
{
	Circle* c = dynamic_cast<Circle*>(obj); //converts shape pointer to circle pointer
	if (c != NULL) { //checks if the value of the pointer is valid and it actually is a circle
		c->setRadius(c->getRadius() * 2);
	}
	Rectangle* rt = dynamic_cast<Rectangle*>(obj);
	if (rt != NULL) {
		rt->setWidth(rt->getWidth() * 2);
		rt->setHeight(rt->getHeight() * 2);
	}
}

void moveShape(Shape& obj)
{
	obj.move(1.5, 10.5);

}

int main()
{/*
	Shape s;
	cout << "Default shape object: ";
	s.print();
	cout << endl;
	s.setColor("Black");
	s.move(4, 5);
	cout << "After color change and move: ";
	s.print();
	cout << endl;
	*/
	Circle c;
	cout << "Initial state: ";
	c.print();
	cout << endl;
	c.setRadius(10);
	c.move(1, 2);
	cout << "Area of circle with radius 10: " << c.getArea() << endl;
	cout << "New state: " << c.getRadius() << endl;
	cout << "New location: (" << c.getLocation().getX() << ", " << c.getLocation().getY() << ")" << endl;
	c.print();
	cout << endl;

	cout << endl << endl;
	cout << "Testing for Polymorphism:\n";
	cout << "Move the generic shape object:";
	//moveShape(s);
	moveShape(c);
	cout << endl;
	//s.print();
	//printShape(&s);//printShape(s);
	cout << endl;
	//c.print();
	printShape(&c);//printShape(c);
	cout << endl;

	Point rtLoc(0.1, 0.1);
	Rectangle rt(10, 20, "Red", rtLoc);
	printShape(&rt);
	cout << endl;

	Shape* objs[2];
	objs[0] = &c;
	objs[1] = &rt;
	double largestResult = largestArea(objs, 2);
	cout << "The largest area is: " << largestResult << endl;

	for (int i = 0; i < 2; i++)
	{
		if (objs[i]->getArea() == largestResult) {
			objs[i]->print();
		}
	}
	cout << endl;

	Shape* smaller = smallerShape(&c, &rt);
	expandShape(smaller);
	smaller->print();
	cout << endl;
	
	/*
	Point p(1, 2);
	Circle c1(0.1, p);
	cout << "Second object info: \n";
	c1.print();
	p.setX(11);
	p.setY(12);
	c1.setCenter(p);
	cout << "After movement:\n";
	c1.print();
	cout << endl;
	cout << boolalpha<< (c >= c1) << endl;// need to overload operator

	Circle* dynamicCircle = new Circle();
	delete dynamicCircle; //destructor is called in this line
	*/

}