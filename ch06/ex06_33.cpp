// ex06_33.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a program that simulates coin tossing. For each toss of the coin, the
program should print Heads or Tails. Let the program toss the coin 100 times
and count the number of times each side of the coin appears. Print the results.
The program should call a separate function flip that takes no arguments and
returns 0 for tails and 1 for heads. [Note: If the program realistically
simulates the coin tossing, then each side of the coin should appear 
approximately half the time.]
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int flip()
{
	return rand() % 2;
}

int main()
{
	int tailsCounter, headsCounter;
	int flipResult;
	srand( time(0));
	for (int i = 1; i <= 1000; i++)
	{
		flipResult = flip();
		if (flipResult == 0)
			tailsCounter++;
		else
			headsCounter++;
	}
	cout << "Tails: " << tailsCounter << endl << "Heads: " << headsCounter << endl;
}