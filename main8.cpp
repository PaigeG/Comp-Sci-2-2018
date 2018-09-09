//Paige Gadapee 
//Driver Code for Lab 8 

#include "lab8.h"
#include <iostream>
using namespace std;

int main(){
 
   //variables
   int number[] = {1, 2, 3, 4, 5};

  StaticIntArray amount(number, 5); 
  amount.output();
  amount.add(3);
  amount.output();
  amount.search(7);
  amount.remove(5);
  amount.output();
  amount.frequency(2);   
}
