// Geometry_Calculator_15.cpp 
// Ken Wagner
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int call_length;
	

	float time_of_day;
		
	double midnight_morning = 0.12,
		mid_day	= 0.55,
		days_end = 0.35,
		cost_of_call;

	cout << "Welcome the CS 131 C++ Phone Company\n\n";
	cout << "To know the cost of your phone call... \n"; 
	cout << "Enter the time of day of the call in HH.MM (2:39 PM = 14.39): \n"; 
	cin >> time_of_day;
	

	int short_test_time;
	double test_time;

	short_test_time = static_cast<int>(time_of_day);				
	test_time = time_of_day - short_test_time;
	
	if (test_time <=0.59)					
		
	{	
		cout << "Enter the length of the call in minutes: \n"; 
		cin >> call_length;

		if (time_of_day >= 00.00 && time_of_day <=6.59)
			cost_of_call = midnight_morning * call_length;

		else if (time_of_day >= 07.00 && time_of_day <= 19.00)
			cost_of_call = mid_day * call_length;

		else if (time_of_day >= 19.00 && time_of_day <= 23.59)
			cost_of_call = days_end * call_length;
		
		else 
		{			
			cout << "Something went horribly wrong!\n";				
		}				
		cout << fixed << showpoint << setprecision(2);
		
		cout << endl;
		cout << "The cost of your call is: $ " << cost_of_call << endl;
	}
	else if (test_time >=0.6)					
	{
		cout << "Please enter time in the requested format of HH.MM (9:35 AM = 09.35).\n";
	}
		
	return 0;
}