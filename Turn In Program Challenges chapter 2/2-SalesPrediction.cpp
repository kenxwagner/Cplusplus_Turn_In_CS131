// Programming Challenge 2. Sales Prediction 
// Ken Wagner.
// East Coast division = ECdiv
// Total Company sales = CoSales
// East Coast division sales = ECdivSales

#include <iostream>            
using namespace std;

int main()
{ 
	double ECdiv = 0.62;
	int CoSales = 4600000, ECdivSales;

	ECdivSales = ECdiv * CoSales;
cout << "If the company generates $" << CoSales << endl;
cout << "East Coast division sales will be $"<< ECdivSales <<endl;

   return 0;
}
