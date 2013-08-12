// ex03_12.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Create an Account class that a bank might use to represent customers’ bank accounts.
// Include a data member of type int to representthe account balance. Provide a constructor
// that receives an initial balance and uses it to initializethe data member.The constructor 
// should validate the initial balance to ensure that it’s greater than or equal to 0. If not,
// set the balance to 0 and display an error message indicating that the initial balance was invalid.
// Provide three member functions. Member function credit should add an amount to the current 
// balance. Member function debit should withdraw money from the Account and ensure that the
// debit amount does not exceed the Account’s balance. If it does,the balance should be left unchanged
// and the function should print a message indicating "Debit amount exceeded account balance."
// Member function getBalance should return the current balance. Createa program that creates
// two Account objects and tests the member functions of class Account.

#include <iostream>
#include "Account.h"

using namespace std;

int main ()
{
	// create two Account objects
	Account account1(50);
	Account account2(-40);
	
	// display initial balance
	cout << "account1 balance is " << account1.getBalance() << endl;
	cout << "account2 balance is " << account2.getBalance() << endl << endl;
	
	
	// credit some funds
	cout << "Credit 100 to account1" << endl;
	account1.credit(100);
	cout << "Now account1 balance is " << account1.getBalance() << endl << endl;
	
	// debit some funds
	cout << "Trying to debit 200 from account1" << endl;
	account1.debit(200);
	cout << "Now account1 balance is " << account1.getBalance() << endl << endl;
	
	cout << "Trying to debit 80 from account1" << endl;
	account1.debit(80);
	cout << "Now account1 balance is " << account1.getBalance() << endl << endl;	
	
}