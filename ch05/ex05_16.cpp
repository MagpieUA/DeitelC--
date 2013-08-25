// ex05_16.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Modify Fig.5.6 so it uses only integers to calculate the compound interest.
[Hint: Treat all monetary amounts as numbers of pennies. Then “break” the
result into its dollar and cents portions by using the division and modulus
operations. Insert a period.]
*/

#include <iostream>
#include <iomanip>
#include <cmath> // standard C++ math library
using namespace std;

int main()
{
   int amount; // amount on deposit at end of each year
   int principal = 100000; // initial amount before interest
   int rate = 5; // interest rate
   int previous = principal;  // amount on deposit at end of previous year;
   // display headers
   cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // calculate amount on deposit for each of ten years
   for ( int year = 1; year <= 10; ++year ) 
   {
      // calculate new amount for specified year
      amount = previous * (100 + rate) / 100;
	  previous = amount;

      // display the year and the amount
      cout << setw( 4 ) << year << setw( 18 ) << amount / 100 << "." << amount % 100 << endl;
   } // end for 
} // end main
