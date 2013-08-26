// ex05_29.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Legend has it that, in 1626, Peter Minuit purchased Manhattan Island for $24.00
in barter. Did he make a good investment? To answer this question, modify the
compound interest program of Fig.5.6 to begin with a principal of $24.00 and to
calculate the amount of interest on deposit if that money had been kept on
deposit until this year (e.g., 384 years through 2010). Place the for loop that
performs the compound interest calculation in an outer for loop that varies the
interest rate from 5% to 10% to observe the wonders of compound interest.
*/

#include <iostream>
#include <iomanip>
#include <cmath> // standard C++ math library
using namespace std;

int main()
{
  double amount; // amount on deposit at end of each year
	double principal = 24.0; // initial amount before interest
	double rate = .05; // interest rate
	
	// display headers
	cout << "Year" << setw( 24 ) << "Amount on deposit" << endl;
	
	// set floating-point number format
	cout << fixed << setprecision( 2 );
	for ( rate = .05; rate <= 0.1; rate += 0.01)
	{
		// calculate amount on deposit for each of ten years
		for ( int year = 1; year <= 384; ++year ) 
		{
			// calculate new amount for specified year
			amount = principal * pow( 1.0 + rate, year );
			
			// display the year and the amount
			cout << setw( 4 ) << year << setw( 24 ) << amount << endl;
		} // end for 
		cout << endl;
	}
} // end main
