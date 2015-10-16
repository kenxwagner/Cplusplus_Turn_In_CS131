// Geometry_Calculator_15.cpp 
// Ken Wagner
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   int choice;  
   double rect_length, rect_width, radius, area, base_tr, height_tr,
	   pi = 3.14159;
   
   //Menu

	cout << "Geometry Calculator \n\n";
	cout << "1. Calculate the area of a Circle \n"; 
	cout << "2. Calculate the area of a Rectangle \n"; 
	cout << "3. Calculate the area of a Triangle \n"; 
	cout << "4. Quit \n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;

		// Now validate 1,2,3, 4 or more
	if (choice >= 1 && choice <=3)
	{	
		
		 if (choice == 1)
		{
		{	cout << "Radius of the circle: ";
			cin  >> radius;
		}
			if (radius >= 0)
			{
				area = pi * pow(radius,2);
				cout << "The Area is: " << area << endl;
			}
			else if (radius < 0)
			{
				cout << "Negative numbers aren't allowed.\n";
				cout << "Run the program again and select a positive number.\n";
			}
		}
		else if (choice == 2)
		{
			{	cout << "Length of the rectangle: ";
				cin  >> rect_length;
				cout << "Width of the rectangle: ";
				cin  >> rect_width;
		    }
			if (rect_length >= 0 && rect_width >=0)
			{
				area = rect_length * rect_width;
				cout << "The Area is: " << area << endl;
			}	
			else if (rect_length < 0 || rect_width < 0)
			{
				cout << "Negative numbers aren't allowed.\n";
				cout << "Run the program again and select a positive number.\n";
			}
		}		
		
		else if (choice == 3)
		{
		{	cout << "Base of the triangle: ";
			cin  >> base_tr;
			cout << "Height of the triangle: ";
			cin  >> height_tr;
		}
			if (base_tr >= 0 && height_tr >= 0 )
			{
				area = (.5)*(base_tr * height_tr);
				cout << "The Area is: " << area << endl;
			}
			else if (base_tr < 0 || height_tr < 0 )
			{
				cout << "Negative numbers aren't allowed.\n";
				cout << "Run the program again and select a positive number.\n";
			}
		}			
	}	
		
	else if (choice != 4)
		{	cout << "The valid choices are 1 through 4.\n";
			cout << "Run the program again and select one of these.\n";
		}
	return 0;
}