// ex06_34.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a program that plays the game of "guess the number" as follows:
Your program chooses the number to be guessed by selecting an integer at random
in the range 1 to 1000. The program then displays the following:
_______________________________________
I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.
---------------------------------------
The player then types a first guess. The program responds with one of the
following:
_______________________________________
1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.
---------------------------------------
If the player’s guess is incorrect, your program should loop until the player
finally gets the number right. Your program should keep telling the player "Too
high" or "Too low" to help the player "zero in" on the correct answer.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int choose()
{
	return (rand() % 1000 + 1);
}

int main()
{
	int guess;
	int number;
	char playAgain;
	srand(time(0));
	do {
		number = choose();
		cout << "I have a number between 1 and 1000.\nCan you guess my number\n";
		cout << "Please type your first guess.\n";
		cin >> guess;
		while (guess != number)
		{
			if (guess < number)
				cout << "Too low. Try again.\n";
			else 
				cout << "Too high. Try again.\n";
			cin >> guess;
		}
		cout << "Excellent! You guessed the number!\nWould you like to play again (y or n)?\n";
		cin >> playAgain;
	} while (playAgain != 'n');
}