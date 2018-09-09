//Paige Gadapee
//March 13, 2018
//Code for Lab 7a 

#include <iostream>
using namespace std;

class rational{
  public: 
     rational(int numb1);
     rational (int numb1, int numb2);
     rational ();

     //functions
     void set(int numb1, int num2);
     void output();
     int  getNum() const;
     int  getDem() const;
     friend rational add(const rational& p, const rational& q);
     friend rational subtract(const rational& p, const rational& q);
     friend rational product(const rational& p, const rational& q);

  private:
     int numerator;
     int denominator;
};

int main()
{
   //variables
   int seq_len, i;
   rational a, b;
 
   a.set(2, 5);
   a.output();

   b.set(5,10);
   b.output();

   cout << "The sum of the fractions is: ";
   add(a, b);
   rational temp = add(a,b);
   temp.output();

   cout << "The subraction of the fractions is: "; 
   subtract(a,b);
   rational other = subtract(a,b);
   other.output();

   cout << "The product of the fractions is: ";
   product(a, b);
   rational more = product(a, b);
   more.output();


   //part 2 of the lab 
   cout << "Enter the number of fractions that you want to add and multiply: ";
   cin  >> seq_len;

    rational *number = new rational[seq_len];
   for (i=0; i<seq_len; i++)
     {
        number[i].set(1, (i+1)); 
        number[i].output();
     }

    rational addition(0,1);
    rational production(1,1);

   for(int i =0; i<seq_len; i++)
     {
       addition = add(addition, number[i]);
       production = product(production, number[i]);
     }

  cout << "The sum of " << seq_len << " numbers is: ";
  addition.output();
     
  cout << "The product of " << seq_len << " numbers is: ";
  production.output();
   return 0;
}

rational::rational (int numb1, int numb2)
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
      cout << "This is an invalid number!"<< endl;
      exit(1);
    }
   numerator = numb1;
   denominator = 1;
}

rational::rational() : numerator(0), denominator(1)
{
}

void rational::set(int numb1, int numb2)
{
   numerator = numb1;
   denominator = numb2;
}

int rational::getNum() const
{
   return numerator;
}

int rational::getDem() const
{
   return denominator;
}

void rational::output()
{
   cout << numerator<<"/"<<denominator<<endl;
}

rational add(const rational& p, const rational& q)
{
   rational temp;

   temp.numerator = (p.numerator * q.denominator) + (p.denominator * q.numerator);
   temp.denominator = p.denominator * q.denominator;
   
   return temp;
}

rational subtract(const rational& p, const rational& q)
{
   rational temp;

   temp.numerator = (p.numerator*q.denominator) - (q.numerator*p.denominator);
   temp.denominator = p.denominator * q.denominator;
   return temp;
}

rational product(const rational& p, const rational& q)
{
   rational temp;

   temp.numerator = p.numerator * q.numerator;
   temp.denominator = p.denominator * q.denominator;
   return temp;
}
