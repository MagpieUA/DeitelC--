// ex05_17.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int j = 2;
	int k = 3;
	int m = 2;
	cout << (i == 1) << endl;					// true
	cout << (j == 3) << endl;					// false
	cout << (i >=1 && j < 4) << endl;			// true
	cout << (m <= 99 && k < m) << endl;			// false
	cout << (j >= i || k == m) << endl;			// true
	cout << (k + m < j || 3 - j >= k) << endl;	// false
	cout << (!m) << endl;						// false
	cout << (!(j - m)) << endl;					// true
	cout << (!(k > m)) << endl;					// false
}

