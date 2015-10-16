// SoftwareSales_9.cpp
// Software sales
// Ken Wagner
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int software_package = 99; // Original MSRP

	int units_sold;
	double	discount1_to_9 = 1.00,
			discount10_to_19 = 0.8,
			discount20_to_49 = 0.7, 
			discount50_to_99 = 0.6, 
			discount100_or_more = 0.5,
			your_price;  


	// How many units sold?
	cout << "This program calculates and shows volume discounts" 
		<< " if applicable.\n";
	cout << endl;
	cout << "Enter the number of units sold: ";
	cin  >> units_sold;
	if (units_sold >=1)
	{
		if (units_sold >=1 && units_sold <=9)
		{	your_price = units_sold * software_package * discount1_to_9;
		}

		else if (units_sold >=10 && units_sold <=19)
		{	your_price = units_sold * software_package * discount10_to_19;
		}

		else if (units_sold >=20 && units_sold <=49)
		{	your_price = units_sold * software_package * discount20_to_49;
		}

		else if (units_sold >=50 && units_sold <=99)
		{	your_price = units_sold * software_package * discount50_to_99;
		}

		else if (units_sold >=100)
		{	your_price = units_sold * software_package * discount100_or_more;
		}
		cout << fixed << showpoint << setprecision(2);
		cout << endl;
		cout << "For buying " << units_sold <<" your price is:  $ " <<your_price << endl;
		cout << "Thanks for shopping with us! \n";
	}
	else if (units_sold <=1)
	{	cout << "The quantity must be greater than one.\n";
		cout << "Run the program again and try again.\n";
	}
 
	return 0;
}
