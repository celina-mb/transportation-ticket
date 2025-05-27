#ifndef TICKET_H
#define TICKET_H

class Ticket {
protected:
    int ticketID;
    double basePrice;

public:
    Ticket(int id, double price);

    virtual double calculatePrice() const;
    double calculatePrice(int extra) const; // overload

    int getTicketID() const;
    double getBasePrice() const;

    void setTicketID(int id);
    void setBasePrice(double price);

    virtual ~Ticket();
};

#endif
