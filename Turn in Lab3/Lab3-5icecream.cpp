// Lab3-5icecream.cpp 
// This program will show your ice cream cone sales. 
// Ken Wagner
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{  
	// DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3 
    // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE. 
	double one_scoop_price = 1.49,      //  DeLIGHTful     (1 scoop)  $1.49
		   two_scoop_price = 2.49,      //  Double DeLIGHT (2 scoops) $2.49 
		   three_scoop_price = 3.49;    //  Triple DeLIGHT (3 scoops) $3.49

	int one_scoop_total, 
		two_scoop_total, 
		three_scoop_total,
		total_scoops;
	double one_scoop_sales,
		two_scoop_sales,
		three_scoop_sales,
		total_sales;

   
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE. 
   
   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   // THE PROGRAM NEEDS TO GET FROM THE USER.
    cout << " Number of single scoop cones sold: " ;
	cin >> one_scoop_total;
	cout << " Number of double scoop cones sold: " ;
	cin >> two_scoop_total;
    cout << " Number of triple scoop cones sold: " ;
	cin >> three_scoop_total; 
	cout << endl;
	cout << endl;



   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
   // AND ASSIGN THE RESULTS TO VARIABLES.
   one_scoop_sales = one_scoop_total * (float) one_scoop_price;
   two_scoop_sales = two_scoop_total * (float) two_scoop_price;
   three_scoop_sales = three_scoop_total * (float) three_scoop_price;
   total_scoops = one_scoop_total + two_scoop_total + three_scoop_total;
   total_sales = one_scoop_sales + two_scoop_sales + three_scoop_sales;

   
   
   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
      cout << " ______ QUANTITY SOLD _______" << endl;
	  cout << left << setw(35) << "Number of single scoop cones sold: " << right<< setw(6) << one_scoop_total << endl;
	  cout << left << setw(35) << "Number of double scoop cones sold: " << right<< setw(6) << two_scoop_total << endl;
	  cout << left << setw(35) << "Number of triple scoop cones sold: " << right<< setw(6) << three_scoop_total << endl;
	  cout << endl;
	  cout << endl;
	  cout << " ______ OVERALL SALES _______" << endl; 
	  cout << left << setw(23) << "DeLIGHTful cones " << right<< setw(7) << one_scoop_total << "    " << " $" << fixed << showpoint << setprecision(2)<< right<< setw(9) << one_scoop_sales << endl;
	  cout << left << setw(23) << "Double DeLIGHT cones " << right<< setw(7) << two_scoop_total << "    " << " $" << fixed << showpoint << setprecision(2)<< right<< setw(9) << two_scoop_sales << endl;
	  cout << left << setw(23) << "Triple DeLIGHT cones " << right<< setw(7) << three_scoop_total << "    " << " $" << fixed << showpoint << setprecision(2)<< right<< setw(9) << three_scoop_sales << endl;
	  cout << left << setw(23) << "Total of cones sold " << right<< setw(7) << total_scoops << "    " << " $" << fixed << showpoint << setprecision(2)<< right<< setw(9) << total_sales << endl;
	  cout << endl;
	  cout << endl;

   return 0;
}
