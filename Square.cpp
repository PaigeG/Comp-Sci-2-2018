//Paige Gadapee
//Implementation File for Sqaure

#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(int x, int y, double side):TwoDimensionalShape(x, y)
{
   sideLength = side;
}

double Square::GetSideLength() const
{
  return sideLength;
}

double Square::area() const
{
  return sideLength * sideLength;
}

void Square::print() const
{
  cout << "Square" << endl;
  cout << "Side Length : " << sideLength << endl;
  cout << "Area : " << area() <<endl;
  Shape::print();
}
