#include "bus.h"

Bus::Bus(int id, int stops, float price) : Ticket(id, price), numberOfStops(stops){}

float Bus::calculatePrice(){
    return basePrice + numberOfStops * 2;
}

int Bus::getNumberOfStops(){
    return numberOfStops;
}

void Bus::setNumberOfStops(int stops){
    numberOfStops = stops;
}
