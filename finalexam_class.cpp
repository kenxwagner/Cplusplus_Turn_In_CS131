class Grades
{
 public:

	int total, Avg_G, count;
	

			Grades(); // Constructor 
	int getAverage(int G_Array[], int)    //function for average
	{ 
		for (count=1; count < 5; count ++);
	 	total += G_Array[count];

		Avg_G = total / 5;
		return Avg_G;
	}

	void displayAverage(int Avg_G) //display average
	{
		cout << "your average is: " <<Avg_G;
	}
};