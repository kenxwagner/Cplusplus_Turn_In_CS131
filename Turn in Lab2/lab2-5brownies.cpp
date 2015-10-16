// brownies.cpp 
// A program to find brownie yields. 
// Ken Wagner.
#include <iostream>            
using namespace std;

int main()
{   
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE. 
double length = 0,     // Length of a pan inches
           width = 0,           // Width of a pan inches
           sbarea,              // Area of the pan for Small brownie 1"x1"
           bbarea;				// Area of the pan for Big brownie 2"x2"
		 
		    
   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   // THE PROGRAM NEEDS TO GET FROM THE USER.
   // Get the pan dimensions
    cout << "Enter pan length (in inches): ";
    cin  >> length;
    
    cout << "Enter pan width (in inches): ";
    cin  >> width;

   
   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
   // AND ASSIGN THE RESULTS TO VARIABLES.
	sbarea = length * width;
	bbarea = sbarea / 4;
   
   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
	
// A 12 X 9 inch pan can hold 108 small brownies or 27 large brownies.
cout << "A " << length << " X " << width << " inch pan can hold " << sbarea << " small brownies or " << bbarea << " large brownies." << endl;
      
   return 0;
}
