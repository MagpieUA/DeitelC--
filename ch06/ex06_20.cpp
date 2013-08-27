// ex06_20.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a function multiple that determines for a pair of integers whether the
second is a multiple of the first. The function should take two integer
arguments and return true if the second is a multiple of the first, false
otherwise. Use this function in a program that inputs a series of pairs of
integers.
*/

#include <iostream>
using namespace std;

bool multiple(int x, int y)
{
	return ((x % y) == 0);
}

int main()
{
	for (int i = 1; i <= 20; i++)
		for (int j = 1; j <= 20; j++)
			cout << i << " is multiple of " << j << "?: " << multiple(i,j) << endl;

}