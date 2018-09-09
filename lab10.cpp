//Paige Gadapee
//Code for Lab 10 Main 
//April 17, 2018

#include <iostream>
#include "lab9.h"
#include "checking.h"
#include "savings.h"

using namespace std;

int main()
{
  //variables
  double subtract, addition, interest;
   Account * accounts[4];
  
   accounts[0] = new SavingsAccount(25.0, .03);
   accounts[1] = new CheckingAccount(80.0, 1.0);
   accounts[2] = new SavingsAccount(200.0, .1);
   accounts[3] = new CheckingAccount(400.0, .50);

for (int i = 0; i <4; i++)
{
   SavingsAccount *savingsPtr = dynamic_cast<SavingsAccount*>(accounts[i]);

    cout << "Account " << i << " balance : " << accounts[i] -> getBalance() << endl;
    cout << "Enter an amount to withdrawl from Account: ";
    cin  >> subtract;
    if (savingsPtr == NULL)
      {
       // CheckingAccount check = accounts[i];
        accounts[i] -> debit(subtract);
        cout << "Enter an amount to add to the account : ";
        cin >> addition;
        accounts[i] -> credit(addition);
      }
    else
      {
       
        savingsPtr -> debit(subtract);
        interest = savingsPtr -> calculateInterest();
        savingsPtr -> credit(addition);
        savingsPtr -> credit(interest);
      }
    cout << "The updated account balance is : " << accounts[i] -> getBalance() << endl;
   }
}
