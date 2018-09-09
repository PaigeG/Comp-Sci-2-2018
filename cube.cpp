//Paige Gadapee
//Implementation File for Cube

#include "Cube.h"
#include <iostream>
using namespace std;

Cube::Cube(int x, int y, int side):ThreeDimensionalShape(x, y)
{
  sideLength = side;
}

double Cube::GetSide() const
{
  return sideLength;
}

double Cube::volume() const
{
  return sideLength * sideLength * sideLength;
}

void Cube::print() const
{
  cout << "Cube" << endl;
  cout << "Volume : " << volume() << endl;
  cout << "Side Length : " << sideLength << endl;
  Shape::print();
}
