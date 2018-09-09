//Paige Gadapee
//Code for Checking Account 

#include "lab9.h"
#include "checking.h" 
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double money, double fee):Account(money)
{
      this -> fee = fee;
    
}

double CheckingAccount:: GetFee() const
{
  return fee;
}

double CheckingAccount::credit(double amount)
{
  setBalance(amount + getBalance() - fee);
  cout << amount << " has been added to your account for a fee of " << fee << endl;
}

bool CheckingAccount::check(double amount) const
{
  return (getBalance() >= amount + fee);
}

double CheckingAccount::debit(double amount)
{
   if(amount != check(amount))
     {
       setBalance(getBalance() - amount - fee); 
       cout << amount << " has been subtracted from your balance for a fee of " << fee << endl;
     }
   else 
     {
       cout << "There are not enough funds in the account." << endl;
     }
}
