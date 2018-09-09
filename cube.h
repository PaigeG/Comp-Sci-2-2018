//Paige Gadapee
//Header File for Cube

#ifndef Cube_h
#define Cube_h
#include "ThreeDimensionalShape.h"
#include <iostream>
using namespace std;

class Cube: public ThreeDimensionalShape{
  public:
    Cube (int x, int y, int side);
    
    double GetSide() const;
    double volume() const;
    void print() const;

  private:
    int sideLength;
};
#endif
