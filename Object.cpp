#include "Object.h"

Object::Object(string name) 
{
	classType = name;
}
void Object::print()
{
	cout << classType;
}
