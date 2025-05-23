#include "Train.h"

Train::Train(string travel_class, int ticketID, float basePrice): Ticket(ticketID,basePrice){   
}
    
string Train::get_travel_class(){
    return travel_class;
}

void Train::set_travel_class(string travel_class_){
    travel_class=travel_class_;
}