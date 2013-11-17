// ex06_40.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Modify the factorial function of Fig.6.29 to print its local variable and
recursive call parameter. For each recursive call, display the outputs on a
separate line and add a level of indentation. Do your utmost to make the
outputs clear, interesting and meaningful. Your goal here is to design and
implement an output format that helps a person understand recursion better. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long ); // function prototype

int main()
{
  // calculate the factorials of 0 through 10
  for ( int counter = 0; counter <= 10; ++counter )
    cout << setw( 2 ) << counter << "! = " << factorial( counter ) 
			<< endl;
} // end main

// recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
  if ( number <= 1 ) // test for base case
  {
	  cout << "\t1-th call: \t" << 1 << endl;
	  return 1; // base cases: 0! = 1 and 1! = 1
  }
  else // recursion step
	  {
			int result = number * factorial(number - 1);
			cout << "\t" << number << "-th call: \t" << result << endl;
			return result;
		}
} // end function factorial