
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "Producer.h"
#include "ValueReciever.h"
using namespace std;


Producer::Producer(string name, ValueReciever* reciever) {
	Reciever = reciever;
	Name = name;
}


void Producer::generateValue() {
	int randomNumber = (rand() / 10) + 1;
	cout << "generateValue() From Producer with " << randomNumber << endl;
}
//Starts a thread that calls the method generateValue() every 'period' seconds
// string name;
// ValueReciever* reciever;
// Producer p1 = Producer(name, reciever);

void Producer::start(float period) {
	cout << "Have started and ended at " << period << endl;
	thread t1(generateValue*);
	t1.join();
}

void Producer::stop() {
	std::terminate;
	cout << "Have terminated\n";
}