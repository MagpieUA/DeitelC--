// HealthProfile.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Design a "starter" HealthProfile class for a person. The class attributes should
// include the person’s first name, last name, gender, date of birth(consisting of
// separate attributes for the month, day and year of birth), height (in inches) and
// weight (in pounds). Your class should have a constructor that receives this data.
// For each attribute, provide set and get functions. The class also should include
// functions that calculate and return the user’s age in years, maximum heart rate and
// target-heart-rate range (see Exercise 3.16), and body mass index(BMI; see Exercise 2.30).
// Write an application that prompts for the person’s information, instantiates an object
// of class HealthProfile for that person and prints the information from that object — 
// including the person’s first name, last name, gender, date of birth, height and weight 
// — then calculates and prints the person’s age in years, BMI, maximum heart rate and
// target-heart-rate range. It should also display the "BMI values" chart from Exercise2.30.
// Use the same technique as Exercise3.16 to calculate the person’s age.

#include <iostream>
#include <sstream>
#include <string>
#include "HealthProfile.h"

using namespace std;

template <typename T>
std::string toString(T val)
{
	std::ostringstream oss;
	oss << val;
	return oss.str();
}

HealthProfile::HealthProfile ( string fname, string lname, char g, int mm, int dd, int yy, float h, float w )
{
	setFirstName(fname);
	setLastName(lname);
	setGender(g);
	setMonthOfBirth(mm);
	setDayOfBirth(dd);
	setYearOfBirth(yy);
	setHeight(h);
	setWeight(w);
}


void HealthProfile::setFirstName ( string fname)
{
	firstName = fname;
}

string HealthProfile::getFirstName ()
{
	return firstName;
}

void HealthProfile::setLastName (string lname)
{
	lastName = lname;
}

string HealthProfile::getLastName ()
{
	return lastName;
}

void HealthProfile::setGender (char g)
{
	gender = g;
}

char HealthProfile::getGender()
{
	return gender;
}

void HealthProfile::setMonthOfBirth (int mm)
{
	monthOfBirth = mm;
}

int HealthProfile::getMonthOfBirth ()
{
	return monthOfBirth;
}

void HealthProfile::setDayOfBirth (int dd)
{
	dayOfBirth = dd;
}

int HealthProfile::getDayOfBirth ()
{
	return dayOfBirth;
}

void HealthProfile::setYearOfBirth(int yy)
{
	yearOfBirth = yy;
}

int HealthProfile::getYearOfBirth()
{
	return yearOfBirth;
}

void HealthProfile::setHeight (float h)
{
	height = h;
}

float HealthProfile::getHeight()
{
	return height;
}

void HealthProfile::setWeight(float w)
{
	weight = w;
}

float HealthProfile::getWeight()
{
	return weight;
}

int HealthProfile::getAge()
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

int HealthProfile::getMaximumHeartRate()
{
	return (220 - getAge());
}

string HealthProfile::getTargetHeartRate()
{
	int max;
	max = getMaximumHeartRate();
	string lowrate, highrate;
	lowrate = toString(max * 50 / 100);
	highrate = toString(max * 85 / 100);
	return (lowrate + "-" + highrate);
}

float HealthProfile::getBMI()
{
	return (weight / (height * height));
}