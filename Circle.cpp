//Paige Gadapee
//Implementation for Circle 

#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Cirlce(int x, int y, double radius):TwoDimensionalShape(x, y)
{
  this -> radius = radius;
}

double Circle::getRad() const
{
   return radius;
}

double Circle::area() const
{
  return radius * radius * 3.14159;
}

void Circle::print() const
{
  cout << "Circle" << endl;
  cout << "Radius : " << radius << endl;
  cout << "Area : " << area() << endl;
  Shape::print();
}
