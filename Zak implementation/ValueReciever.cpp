#include <iostream>
#include "ValueReciever.h"
using namespace std;

// Helper funtions to access the the private member variables.

void ValueReciever::update(string producerName, int value) {
	//producerName = name;
	//value = quantity;
	cout << producerName << " produced " << value << endl;
}