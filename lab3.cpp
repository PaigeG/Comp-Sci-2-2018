//Lab 3: working with sorted array
//Paige Gadapee
//Jan 30, 2018

#include <iostream>
using namespace std;

//global varibales
  const int capacity = 20;

//prototypes
  void DisplayArray(int array[], int size);
  bool BinarySearch(int array[], int size);
  void Delete(int array[], int& size, int index);
  int InsertByValue(int array[], int& size, int value);
  void InsertByIndex(int array[], int& size, int value, int index);
  void Sort(int array[], int size); 

int main()
{
  //variables
  int NumArray[capacity];
  int size =0, value, index; 
  
  //processing 
   for(int i=0; i<10; i++)
      {
         NumArray[i]=3*i+2;
      }
    size = 10;

  //function calls
     cout << "Orignal Array : " << endl;
     DisplayArray(NumArray, size);
     cout << " " << endl;

     cout << "Search for Value : " << endl;
     BinarySearch(NumArray, size);
     cout << " " << endl;

     cout << "Deleting a value : " << endl;
     Delete(NumArray, size, index);
     cout << " " << endl;
  
     cout << "Insert by Value : " << endl;
     InsertByValue(NumArray, size, value);
     cout << " " << endl;
 
     cout << "Inserting at an index : " << endl;
    cout << "Enter a position : ";
    cin  >> index;
    cout << "Enter a value : ";
    cin  >> value;
     InsertByIndex(NumArray, size, value, index);
     cout << " " << endl;

     //variables
     int AnotherArray[capacity] = {12, 11, 10, 22, 49};
     int AnotherSize = 5;
 
     cout << "Ordering an array : " << endl;
     Sort(AnotherArray, AnotherSize);
     cout << " " << endl;

   return 0;
}

void DisplayArray(int array[], int size)
{
   for(int i=0; i<size; i++)
      {
        cout << array[i] << " ";
      }
}

bool BinarySearch(int array[], int size)
{
   //variables
   int value, index;
   bool search = false;

   //input 
   cout << "Enter a Value to search for : ";
   cin  >> value;

   //processing
   for(index=0; index<size; index++)
      {
          if(value == array[index])
           {
             cout << value << " was found at position " << index << endl;
             return true;
           }
      }

    if(search == false)
      {
        cout << "There was no " << value << " in this array." << endl;
      }
}

void Delete(int array[], int& size, int index)
{
   cout << "Enter a position to delete : ";
   cin  >> index;

   for(int i = index -1; i<size; i++)
     {
       array[i] = array[i+1];
     }
    size = size -1;

   for(int i=0; i< size; i++)
      {
        cout << array[i] << " ";
      }
}

int InsertByValue(int array[], int& size, int value)
{
   //varibales
   size = size +1;
   int array2[size];

   cout << "Enter a value that you want to insert : "; 
   cin  >> value;

   array2[10] = value;
   for(int i=0; i<size; i++)
     {
        if(value < array[i] && value > array[i-1])
           InsertByIndex(array, size, value, i);
     }    
}

void InsertByIndex(int array[], int& size, int value, int index)
{
   //variables
   int newarray[size];

    for(int i=0; i<= size; i++)
       {
          if(i< index)
           {
             newarray[i] = array[i];
           }
          if (i == index)
           {
             newarray[i] = value;
           }
          if(i > index)
           {
             newarray[i] = array[i-1];
           }
       }

     for(int i=0; i<size; i++)
        {
           cout << newarray[i] << " ";
        }
}

void Sort(int arr[], int arr_size)
{
   //variables
   int i, temp;

    for (i=0; i<arr_size-1; i++)
      {
        for(int j=0; j<arr_size - i - 1; j++)
           {
              if(arr[j] > arr[j+1])
                {
                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
                }
           }   
      }  

    for(i=0; i<arr_size; i++)
       {
         cout << arr[i] << " ";
       }
}
