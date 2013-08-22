// ex04_8.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a C++ program that uses the statements in Exercise 4.7 to calculate x raised to the y
// power. The program should have a while repetition statement.
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	cin >> x;				
	cin >> y;
	int i = 1;																					
	int power = 1;
	while (i <= y)
	{
		power *= x;
		i++;
	}
	cout << "x power y is: " << power << endl;	
}