// HeartRates.h
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
#include <sstream>
#include "HeartRates.h"

using namespace std;

template <typename T>
std::string toString(T val)
{
	std::ostringstream oss;
	oss << val;
	return oss.str();
}

HeartRates::HeartRates ( string fname, string lname, int mm, int dd, int yy )
{
	setFirstName(fname);
	setLastName(lname);
	setMonthOfBirth(mm);
	setDayOfBirth(dd);
	setYearOfBirth(yy);
}

void HeartRates::setFirstName ( string fname)
{
	firstName = fname;
}

string HeartRates::getFirstName ()
{
	return firstName;
}

void HeartRates::setLastName (string lname)
{
	lastName = lname;
}

string HeartRates::getLastName ()
{
	return lastName;
}

void HeartRates::setMonthOfBirth (int mm)
{
	monthOfBirth = mm;
}

int HeartRates::getMonthOfBirth ()
{
	return monthOfBirth;
}

void HeartRates::setDayOfBirth (int dd)
{
	dayOfBirth = dd;
}

int HeartRates::getDayOfBirth ()
{
	return dayOfBirth;
}

void HeartRates::setYearOfBirth(int yy)
{
	yearOfBirth = yy;
}

int HeartRates::getYearOfBirth()
{
	return yearOfBirth;
}

int HeartRates::getAge()
{
	int delta = 0;
	int month, day, year;
	cout << "Enter current date: ";
	cin >> month >> day >> year;
	// decide if birthday this year passed
	if (getMonthOfBirth() > month) delta = -1;
	if ((getMonthOfBirth() == month) && (getDayOfBirth() > day)) delta  = -1;
	return (year - getYearOfBirth() + delta);	
}

int HeartRates::getMaximumHeartRate()
{
	return (220 - getAge());
}

string HeartRates::getTargetHeartRate()
{
	int max;
	max = getMaximumHeartRate();
	string lowrate, highrate;
	lowrate = toString(max * 50 / 100);
	highrate = toString(max * 85 / 100);
	return (lowrate + "-" + highrate);
}