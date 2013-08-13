// HealthProfile.h
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

#include <string>

using namespace std;

class HealthProfile
{
public:
	HealthProfile ( string fname, string lname, char g, int mm, int dd, int yy, float h, float w );
	void setFirstName ( string fname);
	string getFirstName ();
	void setLastName (string lname);
	string getLastName ();
	void setGender (char g);
	char getGender ();
	void setMonthOfBirth (int mm);
	int getMonthOfBirth ();
	void setDayOfBirth (int dd);
	int getDayOfBirth ();
	void setYearOfBirth(int yy);
	int getYearOfBirth();
	void setHeight (float h);
	float getHeight();
	void setWeight(float w);
	float getWeight();
	int getAge();
	int getMaximumHeartRate();
	string getTargetHeartRate();
	float getBMI();
private:
	string firstName;
	string lastName;
	char gender;
	int dayOfBirth;
	int monthOfBirth;
	int yearOfBirth;
	float height;
	float weight;
};


