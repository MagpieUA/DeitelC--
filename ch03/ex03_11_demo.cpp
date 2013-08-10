// ex03_11_demo.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Modify class GradeBook (Figs. 3.11–3.12) as follows:
// a) Include a second string data member that represents the course instructor’s name.
// b) Provide a set function to change the instructor’s name and a get function to retrieve it.
// c) Modify the constructor to specify course name and instructor name parameters.
// d) Modify function displayMessage to output the welcome message and course name,
// then the string "This course is presented by: " followed by the instructor’s name.
// Use your modified class in a test program that demonstrates the class’s new capabilities.


// GradeBook class demonstration after separating 
// its interface from its implementation.
#include <iostream>
#include "ex03_11.h" // include definition of class GradeBook
using namespace std;

// function main begins program execution
int main()
{
	// create two GradeBook objects
	GradeBook gradeBook1( "CS101 Introduction to C++ Programming", "Eric Grimson");
	GradeBook gradeBook2( "CS102 Data Structures in C++" , "John Guttag");
	
   // display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName() 
		<< endl;
	
	// display message for each Gradebook
	cout << gradeBook1.displayMessage() << endl << gradeBook2.displayMessage();
	
} // end main