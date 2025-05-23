#include "Train.h"

Train::Train(int id, double price, std::string tClass)
    : Ticket(id, price), travelClass(tClass) {}

double Train::calculatePrice() const {
    if (travelClass == "executive")
        return basePrice * 1.3;
    return basePrice;
}

std::string Train::getTravelClass() const {
    return travelClass;
}

void Train::setTravelClass(const std::string& tClass) {
    travelClass = tClass;
}
