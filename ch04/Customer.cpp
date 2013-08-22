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
// calculate the new balance (= beginning balance + charges–credits) and
// determine whether the new balance exceeds the customer’s credit limit.
// For those customers whose credit limit is exceeded, theprogram should
// display the customer's account number, credit limit, new balance and
// the message “CreditLimit Exceeded.”

#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer (int number, double balance, double charges, double credits, double creditLim)
{
	accountNumber = number;
	balanceTotal = balance;
	chargesPerMonth = charges;
	creditsPerMonth = credits;
	creditLimit = creditLim;
}

void Customer::setBalance(double balance)
{
	balanceTotal = balance;
}

double Customer::getBalance()
{
	return balanceTotal;
}

int Customer::getNumber()
{
	return accountNumber;
}

double Customer::getCharges()
{
	return chargesPerMonth;
}

double Customer::getCredits()
{
	return creditsPerMonth;
}

double Customer::getAllowedCredit()
{
	return creditLimit;
}