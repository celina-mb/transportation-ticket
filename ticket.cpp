#include "ticket.h"

Ticket::Ticket(int id, float price) : ticketID(id), basePrice(price){}

float Ticket::calculatePrice(){
    return basePrice;
}

float Ticket::calculatePrice(int extra){
    return basePrice + extra;
}

int Ticket::getTicketID(){
    return ticketID;
}

float Ticket::getBasePrice(){
    return basePrice;
}

void Ticket::setTicketID(int id){
    ticketID = id;
}

void Ticket::setBasePrice(float price){
    basePrice = price;
}
