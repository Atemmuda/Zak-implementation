#pragma once
#include <string>
using namespace std;

#ifndef _valueReciever_h
#define _valueReciever_h

class ValueReciever {
private:
    string name;
    int quantity;

public:
    ValueReciever() = default;
    virtual void update(string producerName, int value) = 0;
};

#endif
