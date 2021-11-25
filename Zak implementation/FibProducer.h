#pragma once


#ifndef _fibProducer_h
#define _fibProducer_h

#include "Producer.h"

class FibProducer: Producer{
private:
    int a;
    int b;

protected:
    void generateValue();
};

#endif
