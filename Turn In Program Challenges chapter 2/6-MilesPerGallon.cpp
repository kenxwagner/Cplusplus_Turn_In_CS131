// Programming Challenge 6 Miles Per Gallon
// Ken Wagner.
#include <iostream>            
using namespace std;

int main()
{ 
	double tank = 16, dist = 350, milesPerGal;

	milesPerGal = dist / tank;

cout << "If a car drives "<< dist << " miles on " << tank<< " gallons, it's miles per gallon is "<<endl;
cout << milesPerGal <<endl;

   return 0;
}
