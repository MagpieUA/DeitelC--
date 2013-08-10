// GradeBook.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Modify class GradeBook (Figs. 3.11–3.12) as follows:
// a) Include a second string data member that represents the course instructor’s name.
// b) Provide a set function to change the instructor’s name and a get function to retrieve it.
// c) Modify the constructor to specify course name and instructor name parameters.
// d) Modify function displayMessage to output the welcome message and course name,
// then the string "This course is presented by: " followed by the instructor’s name.
// Use your modified class in a test program that demonstrates the class’s new capabilities.

// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name, string iname)
{
	setCourseName( name ); // call set function to initialize courseName
	setInstructorName ( iname); // call the function to initialize instructorName	
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
	courseName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName()
{
	return courseName; // return object's courseName
} // end function getCourseName

// function to set the instructor's name
void GradeBook::setInstructorName( string name )
{
	instructorName = name; // store the instructor's name in the object
}

// function to get instructor's name
string GradeBook::getInstructorName()
{
	return InstructorName; // return object's instructorName
}

// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
   // call getCourseName to get the courseName
	cout << "Welcome to the grade book for\n" << getCourseName() 
	<< "!" << endl;
	cout << "This course is presented by: " << getInstructorName() << "." << endl;
} // end function displayMessage
