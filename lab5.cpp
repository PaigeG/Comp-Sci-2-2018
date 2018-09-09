//Paige Gadapee 
//Feb 18, 2018
//Code for Lab 5: Tortose and the Hare 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int raceEnd = 70;

void moveTort(int * const);
void moveHare(int * const);
void printPosition(const int * const, const int * const);

int main()
{
   int tort = 1;
   int hare = 1;
   int timer = 0;

   srand(time(0));

   cout << "ON YOUR MARK, GET SET\nBANG				!!!!"
        << "\nAND THEY'RE OFF           !!!!\n";

   while (tort != raceEnd && hare != raceEnd)
    {
      moveTort(&tort);
      moveHare(&hare);
      printPosition(&tort, &hare);
      timer++;
    }

   if (tort > hare)
      {
        cout << "TORTOISE WINS!!!! YAY!!!"<< endl;
      }
   else if (hare > tort)
      {
        cout << "Hare wins. Yuch." << endl;
      }
   else if (tort == hare)
      {
        cout << "It's a tie." << endl;
      }
  
   cout << "Time Elapsed = " << timer << " seconds" << endl;
}

void moveTort(int * const tort)
{
  int t;
   
   //srand(time(0));
   
   //while(*tort < 70)
    //{
      t = 1 + rand()%10;

      if(*tort<1)
        *tort = 1;
      else if (*tort >raceEnd)
        *tort = raceEnd;

      if (t>=1 && t <= 5)
        *tort = *tort + 3;
      else if (t>=6 && t<=7)
        *tort = *tort - 6;
      else if (t>=8 && t<=10)
        *tort = *tort + 1;
    //}
}

void moveHare(int * const hare)
{
   int h;    
   
   //srand(time(0));

   //while(hare < raceEnd)
     //{
       h = 1 + rand()%10;
   
       if(*hare<1) 
         *hare =1;
       else if (*hare>raceEnd)
         *hare = raceEnd;

       if (h==1 || h==2)
         *hare = *hare;
       else if (h>=3 && h<=4)
         *hare = *hare + 9;
       else if (h == 5)
         *hare = *hare - 12;
       else if (h>=6 && h<=8)
         *hare = *hare + 1;
       else if (h>=9 && h<=10)
         *hare = *hare -2;
    //}
}

void printPosition(const int * const snapper, const int * const bunny)
{
    if(*bunny == *snapper)
      cout << setw(*bunny) << "OUCH!!";
    else if (*bunny < *snapper)
      cout << setw(*bunny) << "H" << setw(*snapper - *bunny) << "T";
    else
      cout << setw(*snapper) << "T" << setw(*bunny - *snapper) << "H";
   
    cout << "\n";
}

