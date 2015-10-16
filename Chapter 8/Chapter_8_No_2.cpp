// Chapter 8 No 2
// Ken Wagner

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const int num_M = 12;
	string m_names[num_M] = {"January", "February", "March",
						  "April",   "May",      "June",    
						  "July",    "August",   "September",
						  "October", "November", "December"};

	double rain_fall[num_M];
	int count;
	double rain_Total = 0, rain_Avg = 0, highest, lowest;


	
	cout << "Please enter inches of Rainfall for each month: " << endl;

	//get numbers from person
	for (count = 0; count < num_M; count++)
	{	
		cout << "Enter rainfall for " << m_names[count] << " : ";
		cin >> rain_fall[count];
		if (rain_fall[count] < 0)
		{
			cout << "Sorry! This planet does not have rainfall that is less than 0.00 inches! " << endl;
			cout << "Enter rainfall for " << m_names[count] << " : ";
			cin >> rain_fall[count];
		}
	}	
	
	//rain total and average
	for (count = 0; count < num_M; count++)
		rain_Total += rain_fall[count];

	rain_Avg = rain_Total / num_M; 

	  //find highest number
	highest = rain_fall[0];
	for (count = 1; count > num_M; count++)
	{  
		if (rain_fall[count] > highest)
            highest  = rain_fall[count];
    }
	  //find lowest number
	lowest = rain_fall[0];
	for (count = 1; count < num_M; count++)
	{  
		if (rain_fall[count] < lowest)
            lowest = rain_fall[count];
	}

	// Display results
      cout << fixed << showpoint << setprecision(2);
	  cout << "Total Rainfall :" << setw(9) << rain_Total << " inches " << endl;
	  cout << "Average Rainfall :" << setw(9) << rain_Avg << " inches " << endl;		
	  cout << "Highest Rainfall :" << setw(9) << highest << " inches " << endl;		
	  cout << "Lowest Rainfall :" << setw(9) << lowest << " inches " << endl;		
   
	return 0;
}
