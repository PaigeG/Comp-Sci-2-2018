//Paige Gadapee
//Jan 28, 2018
//Code for using arrays 

#include <iostream>
using namespace std;

//Global Variables
const int capacity =20;

//prototypes 
int array(int[], int&);
int duplicate(int[], int&);
int search(int[], int&);
int InsertValue(int[], int&, int, int);
void Display(int array[], int size);
void Delete(int[], int&);

int main()
{
  //variables 
  int NumArray[capacity]; 
  int size = 0;
  int value, index;

  //function calls
   array(NumArray, size);
   Display(NumArray, size);
   cout << " " << endl;
   cout << "Duplicates" << endl;
   duplicate(NumArray, size);
   cout << " " << endl;
   cout << "Search for the Number 50" << endl;
   search(NumArray, size);
   cout << " " << endl;
   cout << "Inserting Numbers" << endl;
   InsertValue(NumArray, size, value, index);
   cout << " " << endl;
   Delete(NumArray, size);

  return 0;
}

int array(int array[], int& size) 
{
  //variables 
  int numb, i=0;
 
  //input 
   cout << "Enter values for the array and end with -1"<< endl;
   cin >> numb;

    while(numb>=0 && i<capacity)
     {
       array[i] = numb;  
       i++;
       cin >> numb;
    }

   size =i; 
}

void Display(int array[], int size)
{ 
   for(int i=0; i<size; i++)
    {
      cout << array[i] << " ";
    }
}

int duplicate(int array[], int& size)
{
   //variables 
   int d, j;
   bool duplicates = false;

   for (d=0; d<size-1; d++)
     {
        for(j=d+1; j<size; j++)
          {
            if(array[d] == array[j])
             {
               cout << array[j] << " is a duplicate" << endl;
 	       return true;
	      }
          }
      }
  
      if (!duplicate)
        {
          cout << "There are no duplicates" << endl;
        }
}

int search(int array[], int& size)
{
  //varibales
  int n = 0;
  bool found = false;
  for (n=0; n<size; n++)
    {
       if(50 == array[n])
	{
         cout << "50 was found in position " << n << endl;
	 return true;
	}
     }
  
    if(found == false)
       cout << "-1" << endl;
}

int InsertValue(int array[], int& size, int value, int index)
{
  //code to replace values
  cout << "Enter a position : ";
  cin  >> index; 
  cout << "Enter a new value : ";
  cin  >> value;
   
  for(int i=size-1; i>= value; i--) 
    { 
       array[i+1] = array[i];
    } 
  array[index]=value;
   
  cout << "New Array Values : " << endl;
  for (int i=0; i<size; i++)
   {
     cout << array[i] << " "; 
   }
 
}

void Delete(int array[], int& size) 
{
   //code to delete elements
   cout << "Deleting 1st two elements" << endl;

   //variables
   int i, k;
   int newArray[18];

   for(i=0; i<size-2; i++)
     {
        newArray[i] = array[i];
     }
   for(k=0; k<size-2; k++)
     {
        newArray[k] = array[k+2];

        cout << newArray[k] << " ";
     }
   cout << " " << endl;
}
