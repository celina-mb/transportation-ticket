#ifndef BUS_H
#define BUS_H

#include "Ticket.h"

class BusTicket : public Ticket {
private:
    int numberOfStops;

public:
    BusTicket(int id, double price, int stops);

    double calculatePrice() const override;

    int getNumberOfStops() const;
    void setNumberOfStops(int stops);
};

#endif
