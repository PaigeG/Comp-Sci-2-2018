//Paige Gadapee
//Feb 6, 2018
//Code for lab 4: recursive functions

#include <iostream>
#include <string> 

using namespace std;

//global variable
 int capacity = 10;

//prototypes
  int findSum(int arr[], int size);
  int findMax(int arr[], int index, int size);
  int Fib(int n);
  int SumOfDigits(int n);
  bool pal(string s);

int main()
{
  //variables
  int size =0;
  int NumbArray[capacity];
  int n, numb, i, z, max;
  int v=0;
  string s;

  //array input
    cout << "Enter values for an array and end with -1 : " << endl;
    cin  >> numb;

   while(numb>=0)
     {
       NumbArray[i] = numb;
       i++;
       cin >> numb;
     }
   size = i;

  for(i=0; i<size; i++)
     {
       cout << NumbArray[i] << " ";
     }
   cout << " " << endl;

  //function calls
    cout << "Finding the sum of the array : " << endl;
    cout << findSum(NumbArray, size);
    cout << " " << endl;
  
    cout << "Finding the max : " << endl;
    cout << findMax(NumbArray, 0, size) << " ";
    cout << " "  << endl;
    
    cout << "Adding the digits : " << endl;
    cout << "Enter a number : ";
    cin  >> z;
    cout << SumOfDigits(z); 
    cout << " " << endl;

   cout << "Fibanaci sequence : " << endl;
   cout << "Enter the number of terms that you want : ";
   cin  >> n;
     while(v<n)
     {
        cout << Fib(v) << " ";
        v++;
     }
   cout << " " << endl;
   
    cout << "Is the word a palindrome : " << endl;
    cout << " Enter a word : ";
    cin  >> s;
      if(pal(s)) 
        cout << "This is a palindrome!" << endl;
      else 
        cout << "This is not a palindrome." << endl;

   return 0;
}

int findSum(int arr[], int size)
{
     //Base: 
     if(size <= 0)
       return 0;
     else
        return (findSum(arr, size -1) + arr[size -1]);
}

int findMax(int arr[], int index, int size)
{
  //variables
  int max;

  if(index >= size -2) 
    {
      if(arr[index] > arr[index +1])
        return arr[index];
      else
        return arr[index+1];
    }

   max = findMax(arr, index +1, size);

   if(arr[index] > max)
     return arr[index];
   else 
     return max;
}

int Fib(int n) 
{
  if((n == 0)||(n==1))
     return(n);
   else
     return (Fib(n-1)+Fib(n-2));
}

int SumOfDigits(int n) 
{
  //processing 
     if (n <= 0)
       return 0;
     else 
       { 
          return ((n%10) + SumOfDigits(n / 10));
       }
}

bool pal(string s)
{
  if (s.length() <= 1) 
      return true;
  return (s[0] == s[s.length() - 1] && pal(s.substr(1, s.length() -2)));
}
