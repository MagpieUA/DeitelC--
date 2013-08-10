// ex03_11.h
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Modify class GradeBook (Figs. 3.11–3.12) as follows:
// a) Include a second string data member that represents the course instructor’s name.
// b) Provide a set function to change the instructor’s name and a get function to retrieve it.
// c) Modify the constructor to specify course name and instructor name parameters.
// d) Modify function displayMessage to output the welcome message and course name,
// then the string "This course is presented by: " followed by the instructor’s name.
// Use your modified class in a test program that demonstrates the class’s new capabilities.

// GradeBook class definition. This file presents GradeBook's public 
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	GradeBook( string, string); // constructor that initializes courseName
	void setCourseName( string ); // function that sets the course name
	string getCourseName(); // function that gets the course name
	void setInstructorName( string ); // function that sets the instructor's name
	string getInstructorName(); // fuction that gets the instructor's name
	void displayMessage(); // function that displays a welcome message
private:
	string courseName; // course name for this GradeBook
	string instructorName; // instructor's name for this GradeBook

}; // end class GradeBook  