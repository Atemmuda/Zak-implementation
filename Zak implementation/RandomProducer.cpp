#include <iostream>
#include "RandomProducer.h"
#include "Producer.h"
#include <cstdlib>

// Generate a random number 
// and passes it to a call of the update method of the reciever
void RandomProducer::generateValue() {
	std::cout << "From Random Producer "<< (rand() / 10) + 1 << std::endl;
	//int randomNumber = rand();
}