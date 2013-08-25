// ex05_11.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Modify the compound interest program of Section 5.4 to repeat its steps for the
interest rates 5%, 6%, 7%, 8%, 9% and 10%. Use a for statement to vary the
interest rate.
*/

#include <iostream>
#include <iomanip>
#include <cmath> // standard C++ math library
using namespace std;

int main()
{
   double amount; // amount on deposit at end of each year
   double principal = 1000.0; // initial amount before interest
   double rate; // interest rate

   for (rate = 0.05; rate <= 0.1; rate += 0.01)
   {
	   // display headers
	   cout << "Compound interest with rate " << rate << endl;
	   cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

	   // set floating-point number format
	   cout << fixed << setprecision( 2 );

	   // calculate amount on deposit for each of ten years
	   for ( int year = 1; year <= 10; ++year ) 
	   {
		   // calculate new amount for specified year
		   amount = principal * pow( 1.0 + rate, year );
		   
		   // display the year and the amount
		   cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
	   } // end for 
	   cout << endl;
   }
} // end main