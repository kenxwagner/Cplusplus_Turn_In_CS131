// Ken Wagner                        
// Pattern Displays
#include <iostream>

using namespace std;

int main()
{	
	int row, lstar, rstar, spaces, xspaces;

	cout << "Pattern A           Pattern B\n";

	for (row = 1; row < 11; row++)
	{
		for (lstar = 0; lstar < row; lstar++)
		{
			cout << '+';  
		}
		for (spaces = 11; spaces > row; spaces--)
		{
			cout<< ' ';
		}
        for (xspaces = 1; xspaces < 10; xspaces++)
		{
				cout<< ' ';
		}
		for (rstar = 11; rstar > row; rstar--)			
		{
			cout << "+";
		}	
		
		cout << endl;
	}


   return 0;
}
   
   
   


