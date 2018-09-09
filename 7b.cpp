//Paige Gadapee
//Code for implementation of class functions for lab 7b
//April 3, 2018 

#include "lab7b.h"
#include <iostream> 

using namespace std; 

rational::rational(int numb1, int numb2)
{
   if(numb1<0 || numb2<1)
     {
       cout << "This is an invalid number!" << endl;
       exit(1);
     }
   numerator = numb1;
   denominator = numb2;
}

rational::rational(int numb1)
{
   if(numb1<0)
    {
      cout << "This is an invaild number!" << endl;
      exit(1);
    }
  numerator = numb1;
  denominator = 1;
}

rational::rational() : numerator(0), denominator(1)
{

}

int rational::getNum()
{
   return numerator;
}

int rational::getDem()
{
   return denominator;
}

void rational::output()
{
   cout << numerator << "/" << denominator << endl;
}

rational rational::operator +(const rational& p)
{
   rational temp;
  
   temp.numerator = (p.numerator * denominator) + (p.denominator * numerator);
   temp.denominator = p.denominator * denominator;

   cout << temp << endl;
}

rational rational::operator -(const rational& p)
{
   rational temp;

   temp.numerator = (p.numerator * denominator) - (p.denominator * numerator);
   temp.denominator = p.denominator * denominator;

   cout << temp << endl;
}

rational rational::operator *(const rational& p)
{
   rational temp;

   temp.numerator = p.numerator * numerator;
   temp.denominator = p.denominator * denominator;

   cout << temp << endl;
 }

rational rational::operator /(const rational& p)
{
   rational temp;

   temp.numerator = p.numerator * denominator;
   temp.denominator = p.denominator * numerator;

   cout << temp << endl; 
}  

rational rational::operator -()
{
   rational temp;
  
   temp.numerator = -numerator;
   temp.denominator = denominator;

   return temp;
}

rational rational::operator ==(const rational& p) 
{
  if( p.numerator == numerator && p.denominator == denominator)
    {
      cout << "The fractions are equal" << endl;
    }
}

rational rational::operator !=(const rational& p)
{
   if(p.numerator != numerator || p.denominator != denominator)
     {
        cout << "The fractions are not the same!" << endl;
     }
} 

rational rational::operator <(const rational& p)
{
   if(p.numerator < numerator && p.denominator == denominator)
     {
       cout << p.numerator << "/" << p.denominator << " is less than " << numerator << "/" << denominator << endl;
     }
   else
     {
       rational a, b;

       a.numerator = p.numerator * denominator;
       a.denominator = p.denominator * denominator;
       b.numerator = numerator * p.denominator;
       b.denominator = p.denominator * denominator;
     
        if(a.numerator < b.numerator && a.denominator == b.denominator)
           {
             cout << p.numerator << "/" << p.denominator << " is less than " << numerator << "/"<< denominator << endl;
           }
     }  
}

rational rational::operator >(const rational& p)
{
   if(p.numerator > numerator && p.denominator == denominator)
     {
       cout << p.numerator << "/" << p.denominator << " is greater than " << numerator << "/"<< denominator << endl;
     }
   else
     {
       rational a, b;

       a.numerator = p.numerator * denominator;
       a.denominator = p.denominator * denominator;
       b.numerator = numerator * p.denominator;
       b.denominator = p.denominator * denominator;
     
        if(a.numerator > b.numerator && a.denominator == b.denominator)
           {
             cout << p.numerator << "/" << p.denominator << " is greater than " << numerator << "/"<< denominator << endl;
           }
     }  
}
             
rational rational::operator <=(const rational& p)
{
   if(p.numerator <= numerator && p.denominator == denominator)
     {
       cout << p.numerator << "/" << p.denominator << " is less than or equal to " << numerator << "/" << denominator << endl;
     }
   else
     {
       rational a, b;

       a.numerator = p.numerator * denominator;
       a.denominator = p.denominator * denominator;
       b.numerator = numerator * p.denominator;
       b.denominator = p.denominator * denominator;
     
        if(a.numerator <= b.numerator && a.denominator == b.denominator)
           {
             return true;
             cout << p.numerator << "/" << p.denominator << " is less than or equal to  " << numerator << "/"<< denominator << endl;
           }
     }  
}             

rational rational::operator >=(const rational& p)
{
   if(p.numerator >= numerator && p.denominator == denominator)
     {
       cout << p.numerator << "/" << p.denominator << " is greater than or equal to " << numerator << "/" << denominator << endl;
     }
   else
     {
       rational a, b;

       a.numerator = p.numerator * denominator;
       a.denominator = p.denominator * denominator;
       b.numerator = numerator * p.denominator;
       b.denominator = p.denominator * denominator;
     
        if(a.numerator >= b.numerator && a.denominator == b.denominator)
           {
             return true;
             cout << p.numerator << "/" << p.denominator << " is greater than or equal to " << numerator << "/"<< denominator << endl;
           }
     }  
}

istream& operator >>(istream& ins, const rational& p) 
{
  //varaibles
  int den = p.denominator;
  int num = p.numerator;
  char slash;
  ins >> num >> slash >> den;
  return ins;
}

ostream& operator <<(ostream& outs, const rational& p)
{
  outs << p.numerator << "/" << p.denominator;
  return outs;
}            
              
