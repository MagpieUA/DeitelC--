// ex04_36.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

/*
Write a program that calculates world population growth each year for the next
75years, using the simplifying assumption that the current growth rate will stay
constant. Print the results in a table. The first column should display the year
from year 1 to year 75. The second column should display the anticipated world
population at the end of that year. The third column should display the numerical
increase in the world population that would occur that year. Using your results,
determine the year in which the population would be double what it is today, if
this year’s growth rate were to persist.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double growthRate = 0.01;  // population growth per year rate
	int year = 2013;
	int initialPopulation = 7000000;            // population in thousands
	int currPopulation = initialPopulation;
	int doubleYear = 0;                                  // year, when population would be double of initial, if this year's growth rate were to persist
	cout << "Year" << "\t\t\t" << "Population" << "\t\t" << "Delta" << endl << endl;
	cout << fixed << setprecision (0) << year << "\t\t\t" << initialPopulation << " k\t\t" << 0 << " k" << endl;
	while (year <= 2088)
	{
		year++;
		cout << fixed << setprecision (0) << year << "\t\t\t" << currPopulation * 1.01 << "k\t\t" << currPopulation * 0.01 << " k" <<endl;
		currPopulation *= 1.01;
		if ((doubleYear == 0) and (currPopulation >= initialPopulation * 2))
		{
			doubleYear = year;
		}
	}
	cout << endl << "Year, when population would be double what it is today, if this year's growth rate were to persist: "
			<< doubleYear << endl;
}