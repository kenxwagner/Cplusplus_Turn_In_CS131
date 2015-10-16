//Hotel_Occupancy.cpp
//Ken Wagner

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	int total_floors, hotel_rooms, rooms_occupied;
	
	double total_rooms = 0, rooms_occupied_total = 0, unoccupied_rooms;

	// Learn number of floors
	cout << "Welcome to the CS 131 Hotel Calculator! " <<endl;
    cout << "How many floors does your hotel have (do not skip any)? \n";
	cin >> total_floors;
			
	while (total_floors < 1 || total_floors > 100)
	{ 
		cout << "Sorry, but no such hotel like that is known to exist! \n";
		cout << "Please enter a number between 1 and 100. How many floors? \n";
		cin >> total_floors;
	
	}
	//Loop  starts and 
	//accumulator for floors
	for (int hotel_floors = 1; hotel_floors <= total_floors; hotel_floors++)
	{
		// adjustment for 13th floor iteration
		if (hotel_floors == 13)
		{	
		hotel_floors = 14;
		}

		//find room total
		cout << "How many rooms are there on floor " << hotel_floors << " : \n";
		cin >> hotel_rooms;
	

		//minimum of 10 rooms 
		if ( hotel_rooms <10 )
		{	
			cout << "Oops, you cannot have less than 10 rooms per floor!  \n";
			cout << "How many rooms are there on floor " << hotel_floors << " : \n";
			cin >> hotel_rooms;
		
		
		}

		//find occupied room total
		cout << "How many rooms are currently occupied?  \n";
		cin >> rooms_occupied;
		
		if (rooms_occupied > hotel_rooms)
		{	
			cout << "Oops, you cannot have more rooms occupied than are available!  \n";
			cout << "How many rooms are currently occupied?  \n";
			cin >> rooms_occupied;
		
		
		}
		//accumulator for total rooms
		total_rooms += hotel_rooms;
		//accumulator for rooms occupied
		rooms_occupied_total += rooms_occupied;
}	//Loop Ends

		unoccupied_rooms = total_rooms - rooms_occupied_total;
		
		cout << "----------------------------------------------------------\n";
		cout << "Total Number of Rooms ..............................."<< total_rooms << endl;
        cout << "Total Number of Rooms Occupied......................."<< rooms_occupied_total << endl;
        cout << "Number of Rooms Unoccupied..........................."<< unoccupied_rooms << endl;
		cout << fixed << showpoint << setprecision(2);
		cout << "Hotel Occupancy Rate................................."<< (rooms_occupied_total / total_rooms) * 100 << " %" << endl;
		cout << "----------------------------------------------------------\n";
        





	return 0;
}


