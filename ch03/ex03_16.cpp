// ex03_16.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Create a class called HeartRates. The class attributes should include the person’s firstname,
// last name and date of birth (consisting of separate attributes for the month, day and year
// of birth). Your class should have a constructor that receives this data as parameters.For each
// attribute provide set and get functions. The class also should include a function getAge that
// calculates and returns the person’s age (in years), a function getMaxiumumHeartRate that
// calculates and returns the person’s maximum heart rate and a function getTargetHeartRate
// that calculates and returns the person’s target heart rate. Since you do not yet know how to 
// obtain the current date from the computer, function getAge should prompt the user to enter
// the current month, day and year before calculating the person’s age. Write an application
// thatprompts for the person’s information, instantiates an object of class HeartRates and prints
// theinformation from that object — including the person’s first name, last name and date of birth
// — then calculates and prints the person’s age in (years), maximum heart rate and
// target-heart-rate range.

#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

int main()
{
	string fname, lname;
	int mm, dd, yy;
	cout << "Enter your name and date of birth (first name, last name, month, day, year): ";
	cin >> fname >> lname >> mm >> dd >> yy;
	HeartRates person1( fname, lname, mm, dd, yy);
	cout << "Your name is " << person1.getFirstName() << " " << person1.getLastName() <<
		". Your birthday is " << person1.getMonthOfBirth() << "/" << person1.getDayOfBirth() <<
		"/" << person1.getYearOfBirth() << endl;
	cout << "Your age is " << person1.getAge() << " years!" << endl;
	cout << "Your maximum heart rate is " << person1.getMaximumHeartRate() << endl;
//	cout << "Your taget heart rate is " << person1.getTargetHeartRate() << endl;
}
