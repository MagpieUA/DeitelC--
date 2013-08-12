// Date.h
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

using namespace std;

class Date
{
	public:
		Date ( int mm, int dd, int yy);
		void setMonth (int mm);
		int getMonth();
		void setDay (int dd);	
		int getDay();
		void setYear (int yy);
		int getYear();
		void displayDate();
	private:
		int month;
		int day;
		int year;
};
