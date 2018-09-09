//Paige Gadapee
//Header File for Sphere

#ifndef Sphere_h
#define Sphere_h
#include "ThreeDimensionalShape.h"
#include <iostream>
using namespace std;

class Sphere:public ThreeDimensionalShape{
  public:
    Sphere(int x, int y, double radius);
    double getRadius() const;
    double volume() const;
    void print() const;
   private:
     double radius;
};
#endif
