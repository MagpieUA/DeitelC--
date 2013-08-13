// ex03_17.cpp
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
#include <string>
#include "HealthProfile.h"

using namespace std;

int main()
{
	string fname, lname;
	char g;
	int mm, dd, yy;
	float h, w;
	cout << "Enter your first name, last name, gender and date of birth (first name, last name, month, day, year): ";
	cin >> fname >> lname >> g >> mm >> dd >> yy;
	cout << "Enter your height (in meters) and weight (in kilograms): ";
	cin >> h >> w;
	HealthProfile profile1 (fname, lname, g, mm, dd, yy, h, w);
	cout << "Your name is " << profile1.getFirstName() << " " << profile1.getLastName() <<
		". Your birthday is " << profile1.getMonthOfBirth() << "/" << profile1.getDayOfBirth() <<
		"/" << profile1.getYearOfBirth() << endl;
	cout << "Your age is " << profile1.getAge() << " years!" << endl;
	cout << "Your maximum heart rate is " << profile1.getMaximumHeartRate() << endl;
	cout << "Your target heart rate is " << profile1.getTargetHeartRate() << endl;
	cout << "Your BMI is " << profile1.getBMI() << endl;
	cout << endl;
	cout << "BMI VALUES\n";
	cout << "Underweight: less than 18.5\n";
	cout << "Normal: between 18.5 and 24.9\n";
	cout << "Overweight: between 25 and 29.9\n";
	cout << "Obese: 30 or greater\n";
	cin >> dd;
	
}