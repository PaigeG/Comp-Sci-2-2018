//Paige Gadapee 
//Header file for lab 7b
//April 3, 2018 

#ifndef lab7b_H
#define lab7b_H
#include <iostream>

using namespace std;

class rational{
     public:
     rational (int numb1);
     rational (int numb1, int numb2);
     rational ();

     //member functions
     void output();
     int getNum();
     int getDem();
     rational operator +(const rational& p);
     rational operator -(const rational& p);
     rational operator ==(const rational& p);
     rational operator -();
     rational operator <(const rational& p);
     rational operator >(const rational& p);
     rational operator !=(const rational& p);
     rational operator <=(const rational& p);
     rational operator >=(const rational& p);
     rational operator *(const rational& p);
     rational operator /(const rational& p);
     
     //friend functions
     friend istream& operator >>(istream& ins, const rational& p);
     friend ostream& operator <<(ostream& outs, const rational& p);
   
     private:
        int numerator;
        int denominator;
}; 

#endif
