// ex05_15.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/* 
Modify the GradeBook program of Fig.5.9 – Fig. 5.11 to calculate the
grade-point average. A grade of A is worth 4 points, B is worth 3 points, and
so on.
*/

#include "GradeBook.h" // include definition of class GradeBook

int main()
{
   // create GradeBook object
   GradeBook myGradeBook( "CS101 C++ Programming" );

   myGradeBook.displayMessage(); // display welcome message
   myGradeBook.inputGrades(); // read grades from user
   myGradeBook.displayGradeReport(); // display report based on grades
} // end main