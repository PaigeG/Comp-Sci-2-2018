//Paige Gadapee
//Lab 9 header
//April 10, 2018 

#ifndef lab9_h
#define lab9_h
#include <iostream>
using namespace std;

class Account{
  public:
    Account(double money);
    
    //member functions
    virtual double credit(double amount);
    //void credit(double amount);
    virtual double debit(double amount);
    //void debit(double amount);
    double getBalance() const;
    void display();
    void setBalance(double money);

  private:
    double balance;
};

#endif
