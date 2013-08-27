// ex06_23.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Modify the function created in Exercise 6.22 to form the square out of whatever
character is contained in character parameter fillCharacter. Thus, if side is 5
and fillCharacter is #, then this function should print the following:
#####
#####
#####
#####
#####
*/

#include <iostream>
using namespace std;

void displaySquare(int squareSize, char fillCharacter)
{
	for (int i = 1; i <= squareSize; i++)
	{
		for (int j = 1; j <= squareSize; j++)
			cout << fillCharacter;
		cout << endl;
	}
}

int main()
{
	char character;
	int size;
	cout << "Enter size of square (-1 to exit): ";
	cin >> size;
	while (size != -1)
	{
		cout << "Enter fill character: ";
		cin >> character;
		displaySquare(size, character);
		cout << "Enter size of square (-1 to exit): ";
		cin >> size;
	}
}