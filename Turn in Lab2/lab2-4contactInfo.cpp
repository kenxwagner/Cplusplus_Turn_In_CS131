// contactInfo.cpp -- This program prints information about the programmer.
// WRITE A cout STATEMENT TO PRINT YOUR FIRST AND LAST NAME, 
// FOLLOWED BY A BLANK LINE.
// WRITE A cout STATEMENT TO PRINT YOUR PREFERRED PHONE NUMBER.
// WRITE A cout STATEMENT TO PRINT YOUR PREFERRED EMAIL ADDRESS.
// Ken Wagner
#include <iostream>
#include <string>           
using namespace std;

int main()
{   
 string name1;
 string name2;
 string phone;
 string email;
	
cout << "Please enter your first and last name: "; 
cin  >> name1 >> name2;
	
cout << "Please enter your phone number: "; 
cin  >> phone;

cout << "Please enter your email address: "; 
cin  >> email;

cout << name1 << " " << name2 << endl;
cout << "  " << endl;
cout << phone << endl;
cout << email << endl;
   
   return 0;
}
