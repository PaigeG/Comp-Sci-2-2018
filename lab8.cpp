//Paige Gadapee
//Implementation Function for lab 8 
//April 10, 2018 

#include <iostream>
#include "lab8.h"

using namespace std;

StaticIntArray::StaticIntArray() : itemCount(0)
{

}

StaticIntArray::StaticIntArray(int arr[], int size)
{
   itemCount = size;
   
   for(int i = 0; i<itemCount; i++)
     {
        array[i] = arr[i];
     }     
}

int StaticIntArray::get_size() const
{
   return itemCount;
}

void StaticIntArray::output()
{
   cout << "There are " << itemCount << " items in the array" << endl;
   for (int i=0; i<itemCount; i++)
     {   
       cout << array[i] << " ";
     }
   cout << " " << endl;  
}

void StaticIntArray::add(int value)
{
  if(full())
    {
       cout << "Error the list is full." << endl;
       exit(1);
    }
  else 
   {
     array[itemCount] = value;
     itemCount = itemCount + 1;
   }
}

bool StaticIntArray::full() const
{
   return (itemCount == capacity);
}

void StaticIntArray::search(int search)
{
   for(int i =0; i<itemCount; i++)
     {
        if(search == array[i])
           cout << search << " was found at " << i << endl;
     }
   cout << "This value was not found" << endl;
}

void StaticIntArray::remove(int del)
{
   for(int i =0; i<itemCount; i++)
     {
       if (array[i] == del)
         {
           array[i] = array[i+1];
           itemCount = itemCount -1;
         }
     }
}

void StaticIntArray::frequency(int freq)
{
  //variables
  int counter = 0;

  for (int i = 0; i<itemCount; i++)
      {
         if(freq == array[i])
           {
              counter = counter + 1;
           }
      }   
   cout << freq << " occurs " << counter << " times in the array." << endl;
}
