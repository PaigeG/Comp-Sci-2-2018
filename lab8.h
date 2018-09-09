//Paige Gadapee 
//Header Function for lab 8 
//April 10, 2018 

#ifndef lab8_h
#define lab8_h
#include <iostream>
 
using namespace std;

class StaticIntArray{
    public: 
    StaticIntArray(); //default constructor 
    StaticIntArray(int arr[], int size);

     //member functions
     void output();
     int get_size() const;
     void add(int value);
     bool full() const;
     void search(int search);
     void remove(int del);
     void frequency(int freq);

   private:
     static const int capacity=20;
     int array[capacity];
     int itemCount;
};

#endif
