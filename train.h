#ifndef TRAIN_H
#define TRAIN_H

#include "Ticket.h"
#include <string>

class Train : public Ticket {
private:
    std::string travelClass;

public:
    Train(int id, double price, std::string tClass);

    double calculatePrice() const override;

    std::string getTravelClass();
    void setTravelClass(const std::string& tClass);
};

#endif

