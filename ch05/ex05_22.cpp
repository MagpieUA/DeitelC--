// ex05_22.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
De Morgan’s laws can sometimes make it more convenient for us to express a
logical expression. These laws state that the expression !( condition1 &&
condition2 ) is logically equivalent to the expression (!condition1 ||
!condition2 ). Also, the expression !( condition1 || condition2 ) is logically
equivalent to the expression (!condition1 && !condition2 ). Use De Morgan’s
laws to write equivalent expressions for each of the following, then write a
program to show that the original expression and the new expression in each
case are equivalent:
a) !( x < 5 ) && !( y >= 7 )								// ! (( x < 5 ) || ( y >= 7 ))
b) !( a == b) || !( g != 5 )								// ! (( a == b ) && ( g != 5 ))
c) !(( x <= 8 ) && ( y > 4 ))								// !( x <= 8 ) || !( y > 4 )
d) !(( i > 4 ) || ( j <= 6 ))								// !( i > 4 ) && !( j <= 6 )
*/

#include <iostream>
using namespace std;

int main()
{
	// a)
	int x;
	int y;
	cout << "Enter x and y for check !( x < 5 ) && !( y >= 7 ) [-1 -1 for exit]:";
	cin >> x >> y;
	while ((x != -1) or (y != -1))
	{
		bool result1 = !( x < 5 ) && !( y >= 7 );
		bool result2 = ! (( x < 5 ) || ( y >= 7 ));
		cout << result1 << " equivalent " << result2 << endl;
		cout << "Enter x and y for check !( x < 5 ) && !( y >= 7 ) [-1 -1 for exit]:";
		cin >> x >> y;
	}
	
	// b)
	int a, b, g;
	cout << "Enter a, b and g for check !( a == b) || !( g != 5 ) [-1 -1 -1 for exit]:";
	cin >> a >> b >> g;
	while ((x != -1) or (y != -1) or (g != -1))
	{
		bool result1 = !( a == b) || !( g != 5 );
		bool result2 = ! (( a == b ) && ( g != 5 ));
		cout << result1 << " equivalent " << result2 << endl;
		cout << "Enter a, b and g for check !( a == b) || !( g != 5 ) [-1 -1 -1 for exit]:";
		cin >> a >> b >> g;
	}
	
	// c)
	cout << "Enter x and y for check !(( x <= 8 ) && ( y > 4 ))	 [-1 -1 for exit]:";
	cin >> x >> y;
	while ((x != -1) or (y != -1))
	{
		bool result1 = !(( x <= 8 ) && ( y > 4 ));
		bool result2 = !( x <= 8 ) || !( y > 4 );
		cout << result1 << " equivalent " << result2 << endl;
		cout << "Enter x and y for check !(( x <= 8 ) && ( y > 4 )) [-1 -1 for exit]:";
		cin >> x >> y;
	}
	
	// d)
	int i, j;
	cout << "Enter i and j for check !(( i > 4 ) || ( j <= 6 ))	 [-1 -1 for exit]:";
	cin >> i >> j;
	while ((i != -1) or (j != -1))
	{
		bool result1 = !(( i > 4 ) || ( j <= 6 ));
		bool result2 = !( i > 4 ) && !( j <= 6 );
		cout << result1 << " equivalent " << result2 << endl;
		cout << "Enter i and j for check !(( i > 4 ) || ( j <= 6 ))	 [-1 -1 for exit]:";
		cin >> i >> j;
	}
}