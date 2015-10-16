// Calories_Burned
// Ken Wagner
// 
#include <iostream>
using namespace std;

int main()
{
	int min_run = 10;
	float calorie_energy = 3.9, calorie_burn;

	cout << "Minutes of running      Calories burned\n";
	cout << "---------------------------------------\n";
	while (min_run <= 30)
	{ 
		cout << min_run << "                             " << (calorie_burn = min_run * calorie_energy) << endl;
		min_run = min_run + 5;
	}
	return 0;
}
