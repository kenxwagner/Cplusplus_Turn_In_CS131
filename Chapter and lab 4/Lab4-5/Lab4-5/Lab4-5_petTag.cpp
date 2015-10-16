// Lab4-5_petTag.cpp
// This program determines the fee for a cat or dog pet tag.
// It uses nested if/else statements.
// Ken Wagner
#include <iostream>
#include <string>
using namespace std;


int main()
{
   string pet;         // "cat" or "dog"
   char spayed;        // 'y' or 'n'
   bool catdog = true; 
      
   // Get pet type and spaying information
   cout << "Enter the pet type (cat or dog): ";
   cin  >> pet;
   
   
   // Determine the pet tag fee 
   if (pet == "cat")
   {cout << "Has the pet been spayed or neutered (y/n)? ";
   cin  >> spayed;
     if (spayed == 'y') 
         cout << "Fee is $4.00 \n";
      else if (spayed == 'Y') 
         cout << "Fee is $4.00 \n";
      else
         cout << "Fee is $8.00 \n";
   }
   else if (pet == "dog")
   {cout << "Has the pet been spayed or neutered (y/n)? ";
   cin  >> spayed;
     if (spayed == 'y')
         cout << "Fee is $6.00 \n";
      else if (spayed == 'Y')
         cout << "Fee is $6.00 \n";
      else
         cout << "Fee is $12.00 \n";
   }
   else
        catdog = false;

    if (catdog);
        
    else
            cout << "Only cats and dogs need pet tags. \n";

	return 0;
}
