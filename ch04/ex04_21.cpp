// ex04_21.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Whatdoes this program print?

#include <iostream>
using namespace std;

int main()
{
	int count = 1; // initialize count

	while (count <= 10 ) // loop10times
	{
		// outputline of text
		cout << (count % 2 ? "****" : "++++++++" )<<endl;
		++count; // increment count
	} // end while
} // endmain



// Answer:
/* 
	****
	++++++++
	****
	++++++++
	****
	++++++++
	****
	++++++++
	**** 
	++++++++
*/