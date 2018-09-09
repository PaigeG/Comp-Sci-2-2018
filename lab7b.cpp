//Paige Gadapee
//Lab 7b
//April 3, 2018 

#include <iostream>
#include "lab7b.h"
#include "7b.cpp"
#include <fstream>

using namespace std;

int main{
   ifstream ins;
   ins.open("7b.cpp");
   rational a, b;
   ins >> (2,3)
       >> (5,6);
     
   ofstream outs;
   outs.open("7b.cpp")
   
   return 0;
}

