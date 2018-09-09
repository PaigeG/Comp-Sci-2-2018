//Paige Gadapee 
//Driver File for 3D shapes
//April 24, 2018

#include "base.h"
#include "cube.h"
#include "sphere.h"
#include <iostream> 
using namespace std;

int main();
{
/*  //variables 
  int x;

  Base test(2, 3);
  test.print();
  cout << "Enter a x coordinate : ";
  cin >> x;
  test.setX(x);
  test.print();

  Cube cube(0, 0);
  cube.setH(2);
  cube.setW(2);
  cube.setL(2);
  cube.volume();
  cube.print();

  Sphere circle (3,5);
  circle.radius(5);
  circle.volume();
  circle.print();
*/

Base *shape;
Sphere cir(3,4);
Cube squ(0,0);

 shape = &cir;
 shape -> radius(5);
 shape -> volume();
 shape -> print();

 shape = &squ;
 shape -> SetH(2);
 shape -> SetW(2);
 shape -> SetL(2);
 shape -> volume();
 shape -> print();
}
