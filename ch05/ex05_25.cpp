// ex05_25.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
A criticism of the break and continue statements is that each is unstructured.
These statements can always be replaced by structured statements. Describe in
general how you’d remove any break statement from a loop in a program and
replace it with some structured equivalent. [Hint: The break statement leaves
a loop from within the body ofthe loop. Another way to leave is by failing the
loop-continuation test. Consider using in theloop-continuation test a second
test that indicates “early exit because of a ‘break’ condition.”] Use the 
technique you developed here to remove the break statement from the program of
Fig. 5.13.
*/

#include <iostream>
using namespace std;

int main()
{
	int count; // control variable also used after loop terminates
	bool trigger = false;
	for ( count = 1; count <= 10, !trigger; ++count ) // loop 10 times
	{
		if ( count == 4 ) // if count is 5,
			trigger = true; // break loop only if x is 5
		
		cout << count << " ";
	} // end for 
		
	cout << "\nBroke out of loop at count = " << count << endl;
} // end main