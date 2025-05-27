#ifndef TRAIN_H
#define TRAIN_H

#include "Ticket.h"
#include <string>

class TrainTicket : public Ticket {
private:
    std::string travelClass;

public:
    TrainTicket(int id, double price, std::string tClass);

    double calculatePrice() const override;

    std::string getTravelClass() const;
    void setTravelClass(const std::string& tClass);
};

#endif

