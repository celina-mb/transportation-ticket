#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket{
    protected:
    int ticketID;
    float basePrice;

    public:
    Ticket(int id, float price);

    virtual float calculatePrice();
    float calculatePrice(int extra); // ovverload

    int getTicketID();
    float getBasePrice();

    void setTicketID(int id);
    void setBasePrice(float price);
};

#endif
