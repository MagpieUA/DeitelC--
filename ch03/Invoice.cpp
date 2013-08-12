// Invoice.cpp
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

#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice ( string number, string desc, int quant, int price )
{
	setPartNumber (number);
	setPartDescription (desc);
	setQuantity (quant);
	setPricePerItem (price);
}

void Invoice::setPartNumber (string number)
{
	partNumber = number;
}

string Invoice::getPartNumber ()
{
	return partNumber;
}

void Invoice::setPartDescription (string desc)
{
	partDescription = desc;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

void Invoice::setQuantity (int quant)
{
	if (quant >= 0) quantity = quant;
	else quantity = 0;
}

int Invoice::getQuantity()
{
	return quantity;
}

void Invoice::setPricePerItem(int price)
{
	if (price >= 0) pricePerItem = price;
	else pricePerItem = 0;
}

int Invoice::getPricePerItem()
{
	return pricePerItem;
}

int Invoice::getInvoiceAmount()
{
	return quantity * pricePerItem;
}