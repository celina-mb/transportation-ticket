#include "Ticket.h"

Ticket::Ticket(int id, double price) : ticketID(id), basePrice(price) {}

double Ticket::calculatePrice() const {
    return basePrice;
}

double Ticket::calculatePrice(int extra) const {
    return basePrice + extra;
}

int Ticket::getTicketID() const {
    return ticketID;
}

double Ticket::getBasePrice() const {
    return basePrice;
}

void Ticket::setTicketID(int id) {
    ticketID = id;
}

void Ticket::setBasePrice(double price) {
    basePrice = price;
}

Ticket::~Ticket() {}

