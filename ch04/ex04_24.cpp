// ex04_24.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Modify the following code to produce the output shown. Use proper indentation
// techniques. You must not make any changes other than inserting braces. The
// compiler ignores indentation in a C++ program. We eliminated the indentation
// from the following code to make theproblem more challenging. 
// [Note: It’s possible that no modification is necessary.]

// initial
/*
if (y == 8 )
if (x == 5 )
cout << "@@@@@" << endl;
else
cout << "#####" << endl;
cout << "$$$$$" << endl;
cout << "&&&&&" << endl;
*/
/*

a) Assuming x= 5 and y= 8, the following output is produced.

@@@@@
$$$$$
&&&&&

b) Assuming x= 5 and y= 8, the following output is produced.

@@@@@

c) Assuming x= 5 and y= 8, the following output is produced.

@@@@@
&&&&&

d) Assuming x=5 and y=7, the following output is produced. [Note: The last three
output statements after the else are all part of a block.]

#####
$$$$$
&&&&&

*/
// Solutions:
// a)

#include <iostream>
using namespace std;
int main()
{
	int x = 5;
	int y = 8;
// a)
	if (y == 8 )
		if (x == 5 )
			cout << "@@@@@" << endl;
		else
			cout << "#####" << endl;
	cout << "$$$$$" << endl;
	cout << "&&&&&" << endl;
	cout << endl;
	
// b)
	if (y == 8 )
	{
		if (x == 5 )
			cout << "@@@@@" << endl;
	}
	else
	{
		cout << "#####" << endl;
		cout << "$$$$$" << endl;
		cout << "&&&&&" << endl;
	};
	cout << endl;

// c)
	if (y == 8 )
		if (x == 5 )
			cout << "@@@@@" << endl;
		else
		{
			cout << "#####" << endl;
			cout << "$$$$$" << endl;
		}
	cout << "&&&&&" << endl;
	cout << endl;
	
// d)
	y =7;
	if (y == 8 )
	{
		if (x == 5 )
			cout << "@@@@@" << endl;
	}
	else
		cout << "#####" << endl;
	cout << "$$$$$" << endl;
	cout << "&&&&&" << endl;

}