// ex05_20.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
A set of three integer values for the sides of a right triangle is called a
Pythagorean triple. These three sides must satisfy the relationship that the
sum of the squares of two of the sides is equal to the square of the hypotenuse.
Find all Pythagorean triples for side1, side2 and hypotenuse all no larger than 
500. Use a triple-nested for loop that tries all possibilities.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int side1, side2, hypotenuse;
	for (side1 = 1; side1 <= 500; side1++)
		for (side2 = 2; side2 <= 500; side2 ++)
			for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
				{
					if (side1 * side1 + side2*side2 == hypotenuse * hypotenuse)
						cout << setw(8) << side1 << setw(8) << side2 << setw(8) << hypotenuse << endl;
				}
}
	
	