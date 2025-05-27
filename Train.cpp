#include "Train.h"

TrainTicket::TrainTicket(int id, double price, std::string tClass)
    : Ticket(id, price), travelClass(tClass) {}

double TrainTicket::calculatePrice() const {
    if (travelClass == "executive")
        return basePrice * 1.3;
    return basePrice;
}

std::string TrainTicket::getTravelClass() const {
    return travelClass;
}

void TrainTicket::setTravelClass(const std::string& tClass) {
    travelClass = tClass;
}

