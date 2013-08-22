// ex04_27.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Input an integer containing only 0s and 1s  (i.e., a “binary” integer) and
// print its decimal equivalent. Use the modulus and division operators to
// pick off the “binary” number’s digits one at a time from right to left.

#include <iostream>
using namespace std;

int main()
{
	int binary;      			// binary number
	int decimal = 0;   	// combining decimal number
	int currRank = 1; 	// rank
	int digit;					// processing digit 
	cout << "Enter binary number (only 0's and 1's, maximum 10 digits long): ";
	cin >> binary;
	while (binary > 0)
	{
		digit = binary % 10;
		decimal  += digit * currRank;
		binary /= 10;
		currRank *= 2;
	}
	cout << "Decimal equivalent of entered binary number is: " << decimal << endl;
}