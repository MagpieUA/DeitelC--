// ex04_35.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

/*
A company that wants to send data over the Internet has asked you to write a
program that will encrypt it so that it may be transmitted more securely. All 
the data is transmitted as four-digit integers. Your application should read a
four-digit integer entered by the user and encrypt it as follows: Replace each
digit with the result of adding 7 to the digit and getting the remainder after
dividing the new value by 10. Then swap the first digit with the third, and swap
the second digit with the fourth. Then print the encrypted integer. Write a 
separate application that inputs an encrypted four-digit integer and decrypts
it (by reversing the encryption scheme) to form the original number. 
*/

#include <iostream>
using namespace std;

int encrypt( int n)
{
	// obtain digits of number
	int a = n / 1000;
	int b = (n % 1000) / 100;
	int c = (n % 100) / 10;
	int d = n % 10;
	// cout << a << "  " << b << "  " << c << "  " << d << endl; 
	// Replace each digit with the result of adding 7 to the digit and getting
	// the remainder after dividing the new value by 10. 
	a = (a + 7) % 10;
	b = (b + 7) % 10;
	c = (c + 7) % 10;
	d = (d + 7) % 10;
	return (c * 1000 + d * 100 + a * 10 + b);   // swap a-c and b-d; generate result number 
}

int decrypt( int n)
{
	// obtain digits of number
	int a = n / 1000;
	int b = (n % 1000) / 100;
	int c = (n % 100) / 10;
	int d = n % 10;
	// Replace each digit with the result of substract 7 to the digit and getting
	// the remainder after dividing the new value by 10. 
	a = (a + 3) % 10;
	b = (b + 3) % 10;
	c = (c + 3) % 10;
	d = (d + 3) % 10;
	return (c * 1000 + d * 100 + a * 10 + b);
}

int main()
{
	int n;
	cout << "Enter four-digit number: ";
	cin >> n;
	cout << "Encrypted number is: " << encrypt(n) << endl;
	cout << "Number after encrypt-decrypt cycle is: " << decrypt(encrypt(n)) << endl;
}