// Invoice.h
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Create a class called Invoice that a hardware store might use to represent an invoice
// for an item sold at the store. An Invoice should include four data members —
// a part number (type string), a part description (type string), a quantity of the item
// being purchased (type int) and a price per item (type int). Your class should have
// a constructor that initializes the four data members. Provide a set and a get function for
// each data member. In addition, provide a member function named getInvoiceAmount
// that calculates the invoice amount (i.e., multiplies the quantity by the price per item),
// then returns the amount as an int value. If the quantity is not positive, it should be set to 0.
// If the price per item is not positive, it should be set to 0. Write a test program that
// demonstrates class Invoice’s capabilities.

#include <string>

using namespace std;

class Invoice
{
	public:
		Invoice ( string, string, int, int );
		void setPartNumber (string number);
		string getPartNumber ();
		void setPartDescription (string desc);
		string getPartDescription();
		void setQuantity (int quant);
		int getQuantity();
		void setPricePerItem(int price);
		int getPricePerItem();
		int getInvoiceAmount();
	private:
		string partNumber;
		string partDescription;
		int quantity;
		int pricePerItem;
};







