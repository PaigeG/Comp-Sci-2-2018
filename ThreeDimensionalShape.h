//Paige Gadapee 
//Header Code for 3D shapes

#ifndef ThreeDimensionalShape_h
#define ThreeDimensionalShape_h
#include "Shape.h"
#include <iostream>
using namespace std;

class ThreeDimensionalShape:public Shape
{
   public:
     ThreeDimensionalShape(int x, int y):Shape(x, y)
       {}; 
     virtual double volume() = 0;
};

#endif
