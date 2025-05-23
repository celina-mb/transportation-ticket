#ifndef BUS_H
#define BUS_H

#include <string>

#include "ticket.h"

class Bus:public ticket{
    private:
    int numberOfStops;

    public:
    // Constructor
    Bus(int id, int stops, float price);

    float calculatePrice() override;

    // getter
    int getNumberOfStops();

    //setter
    void setNumberOfStops(int stops);
};

#endif
