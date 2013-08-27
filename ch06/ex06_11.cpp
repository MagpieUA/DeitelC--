// ex06_11.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Show the value of x after each of the following statements is performed:
a) x = fabs( 7.5 )													// 7.5
b) x = floor( 7.5 )												// 7.0
c) x = fabs( 0.0 )													// 0.0
d) x = ceil( 0.0 )													// 0.0
e) x = fabs( -6.4 )												// 6.4
f) x = ceil( -6.4 )												// -6.0
g) x = ceil( -fabs( -8 +floor( -5.5 )) )		// -14.0
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// check answers
	cout << fabs(7.5) << endl << floor(7.5) << endl << fabs (0.0) << endl <<
		ceil(0.0) << endl << fabs(-6.4) << endl << ceil (-6.4) << endl <<
		ceil(-fabs(-8 + floor(-5.5))) << endl;
}