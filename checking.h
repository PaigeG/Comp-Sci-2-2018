//Paige Gadapee 
//Header Code for Checking Account 

#ifndef checking_h
#define checking_h
#include "lab9.h"
#include <iostream>
using namespace std;

class CheckingAccount:public Account{
   public:
      CheckingAccount(double money, double fee);

    //member functions
    virtual double credit(double amount);
    //double credit(double amount);
    bool check(double amount) const;
    //double debit(double amount);
    virtual double debit(double amount);
    double GetFee() const;
  
   private:
     double fee;
};
#endif
