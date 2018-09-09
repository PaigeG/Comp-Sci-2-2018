//Paige Gadapee 
//Code for Savings Account 

#include "lab9.h"
#include "savings.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(double money, double interestRate):Account(money)
{
   interestR = interestRate;
}

double SavingsAccount::getInterest()const
{
   return interestR;
}

double SavingsAccount::calculateInterest()
{
   return interestR * getBalance();
}


