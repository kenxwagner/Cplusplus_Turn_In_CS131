// Chapter 7 number 5
// Ken Wagner
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CustData          
{
	string name,	   				// Name of account holder
            adr, city, state,	    // Address, City, State
			zip,
			ph;
	double bal;   					// account balance
	string pdate;	  				// date of last payment
	CustData ()
	{ bal = 0.00; }
};


//function prototypes
void displayMenu();					// Show menu
int getChoice();					
int get_upChoice();					
void newInfo(CustData &);			// Get new customer info
void upInfo(CustData &);			// Update customer info
void displayInfo(CustData);			// Show customer info

int main()
{
	CustData info;  // variable
	int choice;

	// Menu
	cout << fixed << showpoint << setprecision(2);
	
	do
	{	displayMenu();
		choice = getChoice();       // Get customer choice 
		if (choice != 4)
		{
			switch (choice)
         {
			   case 1:	cout << endl;
						newInfo(info);
					      break;
			   case 2:  cout << endl;
						upInfo(info);
			   			break;	
			   case 3:	cout << endl;
						displayInfo(info);
         }
      }
	} while (choice != 4);
	
	return 0;
}

// Menu display
void displayMenu()
{
	cout << "\n     Customer Account Menu\n";
	cout << "\n  ******************************\n";
	cout << "1.  Enter New Customer Information\n";
	cout << "2.  Update Customer Information\n";
	cout << "3.  Display Customer Information\n";
	cout << "4.  Quit the Program\n\n";
}
// Limit choice
int getChoice()
{	
	int choice;

	cin >> choice;
	while (choice < 1 || choice > 4)
	{	cout << "The only valid choices are 1-4.  Please re-enter. ";
		cin  >> choice;
	}
	return choice;
}
int get_upChoice(int maxChoice)
{	
	int upchoice;

	cin >> upchoice;
	while (upchoice < 1 || upchoice > 8)
	{	cout << "You must choose between 1 and " << maxChoice << ".  Try again. ";
		cin  >> upchoice;
	}
	return upchoice;
	}
// New Customer
void newInfo(CustData &info)   
{
	bool validInfo = true;

	do
{	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nPlease enter information in to each field.\n";
	cout << "Enter Your Name: ";
	cin.get();
	getline(cin, info.name);
	cout << "Enter Address: ";
 	getline(cin, info.adr);
	cout << "Enter City: ";
	getline(cin, info.city);
	cout << "Enter State: ";
	getline(cin, info.state);
	cout << "Enter Zip: ";
	getline(cin, info.zip);
	cout << "Enter Telephone Number: ";
	getline(cin, info.ph);

	cout << "Account Balance: ";
	cin >> info.bal;
		if (info.bal < 0.00)
		{
			cout << "Balance must be more than $0.00!";
			cout << "Try Again!";
			cin >> info.bal;
		}
	cout << "Date of last payment: ";
	cin.get();
	  	getline(cin, info.pdate);
	if (   (info.name).length() ==0  || (info.adr).length() == 0 
			 || (info.city).length() ==0  || (info.state).length() == 0 
			 || (info.zip).length() == 0  || (info.ph).length() == 0
			 || (info.pdate).length() == 0)
   	{
			cout << "You must enter data in to each field.";
			cout << "Please try again.";
			validInfo = false;
   	}
   } while (!validInfo);
}
void upInfo(CustData &info)
{	
	const int MAX_DATA_FIELD = 8;
	int choice;


	displayInfo(info);
	cout << "\nPlease enter field you want update: ";
	choice = get_upChoice(MAX_DATA_FIELD);
	cin.get();     

	switch (choice)
	{
	case 1: cout << "Name: " << info.name << endl;
			 cout << "Enter new name: ";
			 getline(cin, info.name);
			  break;

	case 2: cout << "Address  : " << info.adr << endl;
		     cout << "Enter new address: ";
			 getline(cin, info.adr);
			  break;
	
	case 3: cout << "City  : " << info.city << endl;
			cout << "Enter new city: ";
		    getline(cin, info.city);
			  break;

	case 4: cout << "State  : " << info.state << endl;
		     cout << "Enter new state: ";
			 getline(cin, info.state);
			  break;

	case 5: cout << "Zipcode  : " << info.zip << endl;
		     cout << "Enter new zipcode: ";
		     getline(cin, info.zip);
			  break;	

	case 6: cout << "Telephone  : " << info.ph << endl;
		     cout << "Enter new telephone: ";
		     getline(cin, info.ph);
			  break;

	case 7: cout << "Account balance  : " << info.bal << endl;
		     cout << "Enter new account balance: ";
			 cin >> info.bal;
			 
			 if (info.bal < 0.00)
			 {
				 cout << "Balance must be more than $0.00!\n";
				 cout << "Try Again!\n";
				 cin >> info.bal;
			 }
			  break;

	case 8: cout << "Last payment  : " << info.pdate << endl;
		     cout << "Enter date of last payment: ";
			 getline(cin, info.pdate);
			  break;
	}


}

//Display results
void displayInfo(CustData info)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Name                    : "  << info.name << endl;
		cout << "Address                 : "  << info.adr << endl;
		cout << "City, State, and Zip    : "  << info.city << ", " << info.state << ", " << info.zip << endl;
		cout << "Telephone Number        : "  << info.ph << endl;
		cout << "Account Balance        $: "  << info.bal << endl;
		cout << "Date of last payment    : "  << info.pdate << endl;
	}