// ex06_38.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a program to solve the Towers of Hanoi problem. Use a recursive function
with four parameters:
a) The number of disks to be moved
b) The peg on which these disks are initially threaded
c) The peg to which this stack of disks is to be moved
d) The peg to be used as a temporary holding area
Display the precise instructions for moving the disks from the starting peg to
the destination peg. To move a stack of three disks from peg 1 to peg 3, the
program displays the following moves:
1 → 3 (This means move one disk from peg 1 to peg 3.)
1 → 2
3 → 2
1 → 3
2 → 1
2 → 3
1 → 3
*/

#include <iostream>
using namespace std;

// recursive function to solve Towers of Hanoi problem
void hanoiTowers(int number, int initPeg, int finalPeg, int tempPeg)
{
	if (number == 1)
	{
		cout << initPeg << " -> " << finalPeg << endl;
	}
	else
	{
		hanoiTowers(number - 1, initPeg, tempPeg, finalPeg);
		cout << initPeg << " -> " << finalPeg << endl;
		hanoiTowers(number - 1, tempPeg, finalPeg, initPeg);
	}		
}

int main()
{
	int n;
	cout << "This program will solve Towers of Hanoi problem recursively" << endl;
	cout << "Enter number of disks: ";
	cin >> n;
	hanoiTowers(n, 1, 3, 2);	
}
