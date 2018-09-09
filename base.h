//Paige Gadapee
//Base Case Header File 

#ifndef base_h
#define base_h
#include <iostream>
using namespace std;

class Base{
  public:
   //constructor
    Base(int x, int y);

   //member functions
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    virtual int volume() = 0;
    void print();
    
   private:
     int x;
     int y;
};

#endif
