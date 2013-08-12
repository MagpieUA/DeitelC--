// Employee.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Create a class called Employee that includes three pieces of information as data members 
// — a first name (type string), a last name (type string) and a monthly salary (type int).
// Your class should have a constructor that initializes the three data members.Provide a set
// and a get function for each data member. If the monthly salary is not positive, set it to 0.
// Write a test program that demonstrates class Employee’s capabilities. Create two Employee
// objects and display each object’s yearly salary. Then give each Employee a 10 percent raise 
// and display each Employee’s yearly salary again.

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee ( string fname, string lname, int sal )
{
	setFirstName (fname);
	setLastName (lname);
	setSalary (sal);
}

void Employee::setFirstName ( string fname)
{
	firstName = fname;
}

string Employee::getFirstName ()
{
	return firstName;
}

void Employee::setLastName ( string lname )
{
	lastName = lname;
}

string Employee::getLastName ()
{
	return lastName;
}

void Employee::setSalary ( int sal )
{
	if (sal >= 0) salary = sal;
	else salary = 0;
}

int Employee::getSalary ()
{
	return salary;
}