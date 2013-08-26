// ex05_28.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that uses repetition and switch statements to print the song
“The Twelve Days of Christmas.” One switch statement should be used to print
the day (i.e., “first,” “second,” etc.). A separate switch statement should be
used to print the remainder of each verse. Visit the website
www.12days.com/library/carols/12daysofxmas.htm for the complete lyrics to the
song.
*/

#include <iostream>
using namespace std;

int main()
{
	for (int day = 1; day <= 12; day++)
	{
		switch (day)
		{
			case 1:
				cout << "On the first day of Christmas\nmy true love sent to me:\n";
				break;
			case 2:
				cout << "On the second day of Christmas\nmy true love sent to me:\n";
				break;
			case 3:
				cout << "On the third day of Christmas\nmy true love sent to me:\n";
				break;
			case 4:
				cout << "On the fourth day of Christmas\nmy true love sent to me:\n";
				break;
			case 5:
				cout << "On the fifth day of Christmas\nmy true love sent to me:\n";
				break;
			case 6:
				cout << "On the sixth day of Christmas\nmy true love sent to me:\n";
				break;
			case 7:
				cout << "On the seventh day of Christmas\nmy true love sent to me:\n";
				break;
			case 8:
				cout << "On the eighth day of Christmas\nmy true love sent to me:\n";
				break;
			case 9:
				cout << "On the ninth day of Christmas\nmy true love sent to me:\n";
				break;
			case 10:
				cout << "On the tenth day of Christmas\nmy true love sent to me:\n";
				break;
			case 11:
				cout << "On the eleventh day of Christmas\nmy true love sent to me:\n";
				break;
			case 12:
				cout << "On the twelfth day of Christmas\nmy true love sent to me:\n";
				break;
		}
		switch (day)
		{
			case 12:
				cout << "12 Drummers Drumming\n";
			case 11:
				cout << "Eleven Pipers Piping\n";
			case 10:
				cout << "Ten Lords a Leaping\n";
			case 9:
				cout << "Nine Ladies Dancing\n";
			case 8:
				cout << "Eight Maids a Milking\n";
			case 7:
				cout << "Seven Swans a Swimming\n";
			case 6:
				cout << "Six Geese a Laying\n";
			case 5:
				cout << "Five Golden Rings\n";
			case 4:
				cout << "Four Calling Birds\n";
			case 3:
				cout << "Three French Hens\n";
			case 2:
				cout << "Two Turtle Doves\nand a ";
			case 1:
				cout << "Partridge in a Pear Tree\n\n";
		}
	}
}