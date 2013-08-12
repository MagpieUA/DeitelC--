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

#include <string>

using namespace std;

class HeartRates
{
	public:
		HeartRates ( string fname, string lname, int mm, int dd, int yy );
		void setFirstName ( string fname);
		string getFirstName ();
		void setLastName (string lname);
		string getLastName ();
		void setMonthOfBirth (int mm);
		int getMonthOfBirth ();
		void setDayOfBirth (int dd);
		int getDayOfBirth ();
		void setYearOfBirth(int yy);
		int getYearOfBirth();
		int getAge();
		int getMaximumHeartRate();
//		string getTargetHeartRate();
	private:
		string firstName;
		string lastName;
		int dayOfBirth;
		int monthOfBirth;
		int yearOfBirth;
};
