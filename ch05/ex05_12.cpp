// ex05_12.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that uses for statements to print the following patterns
separately, one below the other. Use for loops to generate the patterns.
All asterisks(*) should be printed by a single statement of the form
cout << '*'; (this causes the asterisks toprint side by side).
[Hint: The last two patterns require that each line begin with an appropriate
number of blanks. Extra credit: Combine your code from the four separate
problems into a single program that prints all four patterns side by side by
making clever use of nested for loops.]
(a)(b) (c)(d)
*			********** ********** 			 *
** 			********* 	********* 			**
*** 		******** 	 ******** 		   ***
**** 		*******		  ******* 		  ****
***** 		******		   ****** 		 *****
****** 		***** 			***** 	    ******
*******		**** 		     **** 	   *******
******** 	*** 			  *** 	  ********
*********	** 				   ** 	 *********
**********	*					*	**********

*/

#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		// draw i-th line of first figure
		for (int j = 1; j <= i; j++)
			cout << "*";
		for (int j = i + 1; j <= 10; j++)
			cout << " ";
		cout << " ";
		// draw i-th line of second figure
		for (int j = 1; j <= (11 - i); j++)
			cout << "*";
		for (int j = (11 - i) + 1; j <= 10; j++)
			cout << " ";
		cout << " ";
		// draw i-th line of third figure
		for (int j = 1; j < i; j++)
			cout << " ";
		for (int j = i; j <= 10; j++)
			cout << "*";
		cout << " ";
		// draw i-th line of fourth figure
		for (int j = 1; j < (11 - i); j++)
			cout << " ";
		for (int j = (11 - i); j <= 10; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}