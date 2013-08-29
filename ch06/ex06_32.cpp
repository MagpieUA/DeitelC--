// ex06_32.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a function qualityPoints that inputs a student’s average and returns 4 if
a student’s average is 90–100, 3 if the average is 80–89, 2 if the average is 
70–79, 1 if the average is 60–69 and 0 if the average is lower than 60.
*/

#include <iostream>
using namespace std;

int qualityPoints(int average)
{
	if (average >=90)
		return 4;
	else if (average >= 80)
		return 3;
	else if (average >= 70)
		return 2;
	else if (average >= 60)
		return 1;
	else
		return 0;
}

int main()
{
}