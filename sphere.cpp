//Paige Gadapee 
//Implementation for Sphere

#include "Sphere.h"
#include <iostream>
using namespace std;

Sphere::Sphere(int x, int y, double radius):ThreeDimensionalShape(x,y)
{
   this -> radius = radius;
}

double Sphere::getRadius() const
{
   return radius;
}

double Sphere::volume() const
{
  return 4.0/3.0 * 3.14159 * radius * radius * radius;
}

void Sphere::print() const{
    cout << "Sphere" << endl;
    cout << "Radius : " << radius << endl;
    cout << "Volume : " << volume() << endl;
    Shape::print();
}
