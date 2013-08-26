// ex05_23.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that prints the following diamond shape. You may use output
statements that print a single asterisk(*), a single blank or a single newline.
Maximize your use of repetition (with nested for statements) and minimize the
number of output statements.
    *    
   ***   
  *****  
 *******
*********
 *******
  *****
	 ***
	  *
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int row = 1; row <= 9; row++)
	{
		for (int col = 1; col <= abs(5 - row); col++)
			cout << " ";
		for (int col = abs(5 - row) + 1; col <= 9 - abs(5 - row); col++)
			cout << "*";
		for (int col = 11 - abs(6 - row); col <= 10; col++)
			cout << " ";
		cout << endl;	
	}		
}