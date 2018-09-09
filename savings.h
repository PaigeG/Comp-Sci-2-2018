//Paige Gadapee
//Header Code for Savings Account 

#ifndef savings_h
#define savings_h
#include "lab9.h"
#include <iostream>
using namespace std;

class SavingsAccount : public Account{
   public: 
     SavingsAccount(double money, double interestRate);

   //member functions
   double getInterest() const;
   double calculateInterest();

   private:
   double interestR;
};
#endif
