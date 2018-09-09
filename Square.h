//Paige Gadapee
//Header File for a Square

#ifndef Square_h
#define Square_h
#include "TwoDimensionalShape.h"
#include <iostream>
using namespace std;

class Square:public TwoDimensionalShape{
  public:
    Square (int x, int y, double side);
    double GetSideLength() const;
    double area() const;
    void print() const;

  private:
    double sideLength;
};
#endif
