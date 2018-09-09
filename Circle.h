//Paige Gadapee
//Header File for Circle

#ifndef Circle_h
#define Circle_h
#include "TwoDimensionalShape.h"
#include <iostream>
using namespace std;

class Circle:public TwoDimensionalShape{
   public:
     Circle(int x, int y, double radius);
     double getRad() const;
     double area() const;
     void print() const;

   private:
     double radius;
};
#endif
