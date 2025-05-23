#include "Ticket.h"
#include <string>
using namespace std;

Ticket::Ticket(float _price, int _ticketID){
    price=_price;
    ticketID=_ticketID;
}

void Ticket::set_price(float _price){
    price=_price;
}
void Ticket::set_ticketID(int _ticketID){
    ticketID = _ticketID;
}

int Ticket::get_ticketID(){
    return ticketID;
}

float Ticket::calculatePrice(){
    return price;
}
