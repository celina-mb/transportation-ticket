#ifndef TRAIN.H
#define TRAIN.H
#include <string>
#include "ticket.h"
using namespace std;


class Train:public Ticket
{
private:
    string travel_class;
public:
    Train(string travel_class, int ticketID, float price);
    
    void set_travel_class(string travel_class_);

    string get_travel_class();
};

#endif 
