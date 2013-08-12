// Date.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Create a class called Date that includes three pieces of information as data members —
// a month (type int), a day (type int) and a year (type int). Your class should have 
// a constructor with three parameters that uses the parameters to initialize the three
// data members. For the purpose of this exercise, assume that the values provided for
// the year and day are correct, but ensure that the month value is in therange 1–12;
// if it isn’t, set the month to 1. Provide a set and a get function for each data member.
// Provide a member function displayDate that displays the month, day and year
// separated by forward slashes (/). Write a test program that demonstrates
// class Date’s capabilities.

#include <iostream>
#include "Date.h"

using namespace std;

Date::Date ( int mm, int dd, int yy)
{
	setMonth(mm);
	setDay(dd);
	setYear(yy);
}

void Date::setMonth (int mm)
{
	if ( (1 <= mm) && (mm <= 12)) month = mm;
	else month = 1;
}

int Date::getMonth()
{
	return month;
}

void Date::setDay (int dd)
{
	day = dd;
}

int Date::getDay()
{
	return day;
}

void Date::setYear (int yy)
{
	year = yy;
}

int Date::getYear()
{
	return year;
}

void Date::displayDate()
{
	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}