// ex06_39.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Try writing an iterative version of the Towers of Hanoi. If you succeed,
compare your iterative version with the recursive version developed in
Exercise 6.38. Investigate issues of performance, clarity and your ability to
demonstrate the correctness of the programs.
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

int main()
{
	int n;
	cout << "This program will solve Towers of Hanoi problem iteratively" << endl;
	cout << "Enter number of disks: ";
	cin >> n;
  for (int x=1; x < (1 << n); x++)
	{
    cout << (x&x-1)%3 + 1 << " -> " << ((x|x-1)+1)%3 + 1 << endl;
	}
}
