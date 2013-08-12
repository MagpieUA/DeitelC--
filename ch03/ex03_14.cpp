// ex03_14.cpp
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

int main()
{
	// create two Employee objects
	Employee employee1 ("Mihail", "Sorokin", 4000);
	Employee employee2 ("Vladimir", "Korolev", 3500);
	// show current salary
	cout << employee1.getFirstName() << " " << employee1.getLastName() << "'s salary now is " << employee1.getSalary() << endl;
	cout << employee2.getFirstName() << " " << employee2.getLastName() << "'s salary now is " << employee2.getSalary() << endl;
	cout << endl;
	// give each employee 10% raise
	employee1.setSalary(employee1.getSalary() * 1.1);
	employee2.setSalary(employee2.getSalary() * 1.1);
	// show current salary again
	cout << employee1.getFirstName() << " " << employee1.getLastName() << "'s salary now is " << employee1.getSalary() << endl;
	cout << employee2.getFirstName() << " " << employee2.getLastName() << "'s salary now is " << employee2.getSalary() << endl;
	
}