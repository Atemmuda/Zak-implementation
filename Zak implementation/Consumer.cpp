#include <iostream>

#include "Consumer.h"
#include "Producer.h"
#include "ValuePrinter.h"

using namespace std;


// Creates a ValuePrinter object and alternatively
// creates Producer objects of different types until
// 'numberOfProducers' have been created
Consumer::Consumer(int numberOfProducers) {
	cout << "The number of Producers are " << numberOfProducers << endl;
	//ValuePrinter printer;
	//for (int i = 0; i < numberOfProducers; i++) {
		//cout << "Producer of type " << i << " ";
		//Producer producer();
	//}
}

// Starts all producers, wait for 'time' seconds,
// stops all producers and
// print the number of recieved values for each producer
void Consumer::run(float time) {
	cout << "I have run for " << time << endl;
}