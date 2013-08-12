// Employee.h
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Create a class called Employee that includes three pieces of information as data members 
// — a first name (type string), a last name (type string) and a monthly salary (type int).
// Your class should have a constructor that initializes the three data members.Provide a set
// and a get function for each data member. If the monthly salary is not positive, set it to 0.
// Write a test program that demonstrates class Employee’s capabilities. Create two Employee
// objects and display each object’s yearly salary. Then give each Employee a 10 percent raise 
// and display each Employee’s yearly salary again.

#include <string>

using namespace std;

class Employee
{
	public:
		Employee ( string fname, string lname, int sal );
		void setFirstName ( string fname);
		string getFirstName ();
		void setLastName ( string lname );
		string getLastName ();
		void setSalary ( int sal );	
		int getSalary ();
	private:
		string firstName;
		string lastName;
		int salary;
};