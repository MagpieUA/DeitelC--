// ex05_27.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Describe in general how you’d remove any continue statement from a loop in a 
program and replace it with some structured equivalent. Use the technique you
developed here to remove the continue statement from the program of Fig.5.14.
*/

#include <iostream>
using namespace std;

int main()
{
	for ( int count = 1; count <= 10; ++count ) // loop 10 times
	{ 
		if ( count != 5 ) // if count is 5,
			cout << count << " ";
	} // end for
		
	cout << "\nSkip printing 5 without using continue" << endl;
} // end main