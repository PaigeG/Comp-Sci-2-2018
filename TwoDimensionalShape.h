//Paige Gadapee
//Header function for 2D Shape

#ifndef TwoDimensionalShape_h
#define TwoDimensionalShape_h
#include "Shape.h"
#include <iostream>
using namespace std;

class TwoDimensionalShape:public Shape{
   public:
    TwoDimensionalShape(int x, int y):Shape(x, y)
          {};
    virtual double area() = 0;

};

#endif
