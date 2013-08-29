// ex06_35.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Modify the program of Exercise 6.34 to count the number of guesses the player 
makes. If the number is 10 or fewer, print "Either you know the secret or you
got lucky!" If the player guesses the number in 10 tries, then print "Ahah! You
know the secret!" If the player makes more than 10 guesses, then print "You
should be able to do better!"
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
		int counter = 0;
		number = choose();
		cout << "I have a number between 1 and 1000.\nCan you guess my number\n";
		cout << "Please type your first guess.\n";
		cin >> guess;
		while (guess != number)
		{
			counter++;
			if (guess < number)
				cout << "Too low. Try again.\n";
			else 
				cout << "Too high. Try again.\n";
			cin >> guess;
		}
		cout << "Excellent! You guessed the number!\n";
		if (counter < 10)
			cout << "Either you know the secret or you got lucky!\n";
		else if (counter == 10)
			cout << "Ahah! You know the secret!\n";
		else
			cout << "You should be able to do better!\n";
		cout << "Would you like to play again (y or n)?\n";
		cin >> playAgain;
	} while (playAgain != 'n');
}