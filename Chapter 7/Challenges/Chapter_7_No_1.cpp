// Chapter 7 number 1
// Ken Wagner
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

 struct MovieData
{
	string title,     // Title of movie
           dir;       // Director of movie
   int year,          // Year movie was released in YYYY format
       runtime;       // Movie running time in minutes
   
   MovieData (string t, string d, int y, int r)
	{
		title = t,
		dir = d,
		year = y,
		runtime = r;     

    }
};

//function prototype

void displayMovie(MovieData &movies)
{
	cout << fixed << showpoint << setprecision(2)      << endl;
	cout << "Title               : " << movies.title   << endl;
	cout << "Director            : " << movies.dir     << endl;
	cout << "Year                : " << movies.year    << endl;
	cout << "Running Time (min)  : " << movies.runtime << endl;
}
int main()
{
	MovieData movie1("Jaws ", "Steven Spielberg ", 1975, 124);
	MovieData movie2("The Lord of the Rings: The Return of the King ", "Peter Jackson ", 2003, 200);	

	displayMovie(movie1);
	displayMovie(movie2);

return 0;
}