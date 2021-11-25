#pragma once
#ifndef _consumer_h
#define _consumer_h

#include "ValuePrinter.h"
#include "Producer.h"

class Consumer
{
    /* data */

public:
    Consumer() = default;
    Consumer(int numberOfProducers);
    void run(float time);
};

#endif



// Starts all producers, wait for 'time' seconds,
// stops all producers and
// print the number of recieved values for each producer

/*Consumer::run(float time)
{
}*/
