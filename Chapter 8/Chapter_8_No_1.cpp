// Chapter 8 No 1
// Ken Wagner

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int numX = 15;
	int anArray[numX];
	int count, largestNum, smallestNum;
	
	cout << "Please enter 15 whole numbers as prompted: " << endl;

	//get numbers from person
	for (count = 0; count <numX; count++)
	{	
		cout << "Number " << (count + 1) << " : ";
		cin >> anArray[count];
	}	

	  //find largest number
	largestNum = anArray[0];
	for (count = 1; count <numX; count++)
	{  
		if (anArray[count] > largestNum)
            largestNum  = anArray[count];
    }
	  //find smallest number
	smallestNum = anArray[0];
	for (count = 1; count < numX; count++)
	{  
		if (anArray[count] < smallestNum)
            smallestNum = anArray[count];
	}

	// Display results
      cout << fixed << showpoint << setprecision(2);


	  cout << "Largest Number :" << setw(9) << largestNum << endl;
	  cout << "Smallest Number :" << setw(9) << smallestNum  << endl;
   
	return 0;
}
