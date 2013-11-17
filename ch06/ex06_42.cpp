// ex06_42.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Can main be called recursively on your system? Writea program containing a
function main. Include static local variable count and initialize it to 1.
Postincrement and print the value of count each time main is called. Compile
your program. What happens?
*/

#include <iostream>
using namespace std;

int main()
{
	static int count = 1;
	count++;
	cout << count << endl;
	main();
}