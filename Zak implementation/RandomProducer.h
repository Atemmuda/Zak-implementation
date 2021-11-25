#pragma once

#ifndef _RandomProducer_h
#define _RandomProducer_h

#include "Producer.h"

class RandomProducer: Producer{
protected:
    inline void generateValue();
};
#endif
