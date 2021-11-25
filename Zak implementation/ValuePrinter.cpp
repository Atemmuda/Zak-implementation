#include <iostream>
#include "ValuePrinter.h"
#include "ValueReciever.h"

// Print the recieved value to the console
// and imcreases the valueRecieved member variable

 inline void ValuePrinter::update(string producerName, int value) {
	cout << producerName << " value recieved are " << value << endl;
	valuesRecieved += 1;
}

 int ValuePrinter::getNumberOfValuesRecieved() {
	 cout << "getNumberOfValuesRecieved is called" << endl;
	 return valuesRecieved;
 }