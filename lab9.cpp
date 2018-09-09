//Paige Gadapee 
//Lab 9 Implementation file
//April 10, 2018 

#include "lab9.h"
#include <iostream>

using namespace std;

Account::Account(double money)
{
  if(money < 0)
   {
      cout << "The amount entered was invalid" << endl;
      balance = 0.0;
      exit(1);
   }
  else
    balance = money;
}

void Account::setBalance(double money)
{
   balance = money;
}

double Account::getBalance() const
{
   return balance;
}

void Account::display()
{
   cout << "Your account balance is : " << getBalance() << endl;
   //cout << balance << endl;
}

double Account::credit(double amount) 
{
   balance = amount + balance;
}

double Account::debit(double amount)
{
  if(amount > balance)
    {
      cout << "Debit amount exceeded account balance." << endl;
    }
  else
    {
      balance = balance - amount;
    }
}

