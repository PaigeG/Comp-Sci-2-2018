//Paige Gadapee 
//Drive Code for Lab 9 
//April 10, 2018 

#include "lab9.h"
#include "savings.h"
#include "checking.h"
#include <iostream>

using namespace std;

int main()
{
  //variables
  double interest, amount, number;

   cout << "Normal account : " << endl;
   Account origin(50.0);
   origin.getBalance();
   origin.display();
   cout << "After adding 12.50 to your accout :" << endl;
   origin.credit(12.5);
   origin.display();
   cout << "After crediting 6.25 to your account : " << endl;
   origin.debit(6.25);
   origin.display();

   cout << "Savings Account : " << endl;
   SavingsAccount save(300.0, .10);
   save.display();
   interest = save.calculateInterest();
   save.credit(interest);
   cout << "With interest ";
   save.display();

   cout << "Checking Account :" << endl;
   CheckingAccount spend(500.0, 2.25);
   spend.display();
   cout << "Enter an amount to add to your account : ";
   cin  >> amount;
   spend.credit(amount);
   spend.display();
   cout << "Enter an amount to subtract from your account : ";
   cin  >> number;
   spend.debit(number);
   spend.display();

   return(0);
}
