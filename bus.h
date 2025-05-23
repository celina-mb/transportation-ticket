#include <iostream>
#using namespace std;
#IFNDEF BUS_H
#DEFINE BUS_H

#include "Tickets.h"
class Bus:public Tickets{
    private:
        int numberOfStops;
}
