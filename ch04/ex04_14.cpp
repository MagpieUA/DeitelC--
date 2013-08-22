// ex04_14.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Develop a C++ program that will determine whether a department-store
// customer has exceeded the credit limit on a charge account. For each
// customer, the following facts are available:
// a) Account number(an integer)
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit
// The program should use a while statement to input each of these facts,
// calculate the new balance (= beginning balance + charges – credits) and
// determine whether the new balance exceeds the customer’s credit limit.
// For those customers whose credit limit is exceeded, the program should
// display the customer's account number, credit limit, new balance and
// the message “CreditLimit Exceeded.”

#include <iostream>
#include "Customer.h"
using namespace std;

int main()
{
	int number;
	double balance;
	double charges;
	double credits;
	double limit;
	cout << "Enter account number (or -1 to quit): ";
	cin >> number;
	while (number != -1)
	{
		cout << "Enter beginning balance: ";
		cin >> balance;
		cout << "Enter total charges: ";
		cin >> charges;
		cout << "Enter total credits: ";
		cin >> credits;
		cout << "Enter credit limit: ";
		cin >> limit;
		Customer customer1 (number, balance, charges, credits, limit);
		customer1.setBalance(customer1.getBalance() + customer1.getCharges()
			- customer1.getCredits());
		cout << "New Balance is " << customer1.getBalance() << endl;
		if (customer1.getBalance() > customer1.getAllowedCredit())
		{
			cout << "Account: " << customer1.getNumber() << endl;
			cout << "Credit Limit: " << customer1.getAllowedCredit() << endl;
			cout << "Balance: " << customer1.getBalance() << endl;
			cout << "Credit Limit Exceeded." << endl;
		}
		cout << endl;
		cout << "Enter account number (or -1 to quit): ";
		cin >> number;
	}
}

