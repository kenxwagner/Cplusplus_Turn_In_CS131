// Lab4-7_areas.cpp 
// This program tells the area of squares, circles, and
// right triangles, based upon user input.
// Ken Wagner
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   int choice;  
   double sq_side, radius, area, base_tr, height_tr,
	   pi = 3.14159;
   bool no_choice = true;
   //Menu

	cout << "Program to calculate areas of objects \n\n";
	cout << "1 -- square  \n"; 
	cout << "2 -- circle  \n"; 
	cout << "3 -- right triangle \n"; 
	cout << "4 -- quit \n\n";
	cout << "Enter your choice: ";
	cin >> choice;

		// Now valideat 1,2,3, 4 or more
	if (choice >= 1 && choice <=3)
	{	if (choice == 1)
		{	cout << "Length of the square: ";
			cin  >> sq_side;
		}
		else if (choice == 2)
		{	cout << "Radius of the circle: ";
			cin  >> radius;
		}
		else if (choice == 3)
		{	cout << "Base of triangle: ";
			cin  >> base_tr;
			cout << "Height of triangle: ";
			cin  >> height_tr;
		}
		switch (choice)
		{
			case 1: area = pow(sq_side,2);
					break;
			case 2: area = pi * pow(radius,2);
					break;
			case 3: area = (.5)*(base_tr * height_tr);
		}

		// Display the Area
		cout << "The Area is: " << area << endl;
	}	
		
	else if (choice != 4)
		{	cout << "The valid choices are 1 through 4.\n";
			cout << "Run the program again and select one of these.\n";
		}
	return 0;
}