#pragma once

#ifndef _producer_h
#define _producer_h

#include <string>
#include <thread>
#include "valueReciever.h"

class Producer
{
protected:
    ValueReciever* Reciever;
    string Name;

public:
    Producer(string name, ValueReciever* reciever);
    Producer() = default;
    void start(float period); //Starts a thread that calls the method generateValue() every 'period' seconds
    void stop();              // Stops a running thread that is generating values


protected:
    virtual void generateValue();

};

#endif
