// ex02_04.cpp
// Self-review exercises from Chapter 2 "How to program C++ 8th edition"
#include <iostream>

using namespace std;

// Program calculate the product of three integers
int main ()
{
	int x;     
	int y;
	int z;
	int result;
	
	cout << "Enter three integers: ";
	cin >> x >> y >> z;   
	result = x * y * z;
	cout << "The product is " << result << "\n";
	return 0;
}