#ifndef TRAIN.H
#define TRAIN.H
#include <iostream>
#include <string>
#include "ticket.h"
using namespace std;


class Train:public Ticket
{
private:
    string travel_class;
public:
    Train(string travel_class);
    
    void set_travel_class(string travel_class_);
};

#endif 
