#include "Bus.h"

BusTicket::BusTicket(int id, double price, int stops)
    : Ticket(id, price), numberOfStops(stops) {}

double BusTicket::calculatePrice() const {
    return basePrice + numberOfStops * 2;
}

int BusTicket::getNumberOfStops() const {
    return numberOfStops;
}

void BusTicket::setNumberOfStops(int stops) {
    numberOfStops = stops;
}
