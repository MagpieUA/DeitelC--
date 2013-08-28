// ex06_25.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a function that takes the time as three integer arguments (hours, minutes
and seconds) and returns the number of seconds since the last time the clock 
"struck 12." Use this function to calculate the amount of time in seconds 
between two times, both of which are within one 12-hour cycle of the clock.
*/

#include <iostream>
using namespace std;

int calcSecondsFromTvelwe(int hh, int mm, int ss)
{
	return (hh % 12 * 3600 + mm * 60 + ss);   // take hh modulo 12 to maintain 24h mode
}

int main()
{
	int hours, minutes, seconds;
	int time1, time2;
	cout << "Enter first time (hours, minutes and seconds): ";
	cin >> hours >> minutes >> seconds;
	time1 = calcSecondsFromTvelwe(hours, minutes, seconds);
	cout << "Enter second time (hours, minutes and seconds): ";
	cin >> hours >> minutes >> seconds;
	time2 = calcSecondsFromTvelwe(hours, minutes, seconds);
	cout << "Amount of time in seconds between two times is: " << abs(time1 - time2) << endl;
}