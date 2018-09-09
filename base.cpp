//Paige Gadapee
//Implementation code for base case 
//April 24, 2018

#include "base.h"
#include <iostream>
using namespace std;

Base::Base(int x, int y)
{
  this -> x = x;
  this -> y = y;
}

void Base::setX(int x)
{
  this -> x = x;
}

void Base::setY(int y)
{
  this -> y = y;
}

int Base::getX() const
{
   return x;
}

int Base::getY() const
{
   return y;
}

void Base::print()
{
  cout << "Starting Coordinates : (" << x << "," << y << ")" << endl;
}
