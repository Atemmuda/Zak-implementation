#pragma once

#include "ValueReciever.h"
#include <string>
using namespace std;

#ifndef _valuePrinter_h
#define _valuePrinter_h

class ValuePrinter: ValueReciever
{

    // methods
public:
    ValuePrinter() = default;
    int getNumberOfValuesRecieved();

    inline void update(string producerName, int value);

    // member field
private:
    int valuesRecieved = 0;
};

#endif
