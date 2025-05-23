#include "Ticket.h"
#include <string>
using namespace std;

Ticket::Ticket(float _basePrice, int _ticketID){
    basePrice=_basePrice;
    ticketID=_ticketID;
}

void Ticket::set_price(float _basePrice){
    basePrice=_basePrice;
}
void Ticket::set_ticketID(int _ticketID){
    ticketID = _ticketID;
}

int Ticket::get_ticketID(){
    return ticketID;
}

float Ticket::calculatePrice(){
    return basePrice;
}
