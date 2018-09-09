//Paige Gadapee 
//Feb 27, 2018
//Code for Lab 6 

#include <iostream>
using namespace std;

 class rational{
   public: 
      rational(int numb1);
        //makes int into fractions
      rational (int numb1, int numb2);
        //makes two ints into a fraction
      rational();
       //initalizes numerator to 0 and denominator to 1 

   //functions
    void input();
    void output();
    int getNum();
    int getDen();
    void  sum(rational p, rational q);

   private:
    int numerator;
    int denominator; 
     
  };
int main()
{
  cout << "This is a test of the constructors : " << endl;
   rational a(1,2);
   a.output ();
   a.getNum();
   a.getDen();

   rational b(2);
   b.output();
   b.getNum();
   b.getDen();

   rational c;   
   c.output();
  
   cout << "This is where the user can imput values: " << endl;
   c.input();
   c.output();

   cout << "This is the sum using the constructs: " << endl;
   c.sum (a,b);

   return 0;
}

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
       cout << "This is an invalid number!" << endl;
       exit(1);
     }
  numerator = numb1;
  denominator = 1;
}

rational::rational() : numerator(0), denominator(1)
{

}

void rational::output()
{
  cout << numerator<<"/"<<denominator<<endl;
}

void rational::input()
{
  //variables 
     char c;
     int num;
     int den;
     
     cout << "Enter a fraction : " << endl;
     cin>>num>>c>>den;

    numerator = num;
    denominator = den;
}

int rational::getNum()
{
    return numerator;   
}

int rational::getDen()
{
   return denominator;
}

void rational::sum(rational p, rational q)
{
	cout <<(p.numerator * q.denominator + p.denominator * q.numerator)
             <<"/"<<(p.denominator * q.denominator)<<endl;
}
