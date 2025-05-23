#ifndef TICKET_H
#define TICKET_H
#include <string>
using namespace std;

class Ticket{
    protected:
        float price;
        int ticketID;
    public:
        Ticket(float price, int ticketID);
        //setters
        void set_price(float _price);
        void set_ticketID(int _ticketID);

        int get_ticketID();
        virtual float calculatePrice();
        
};
#endif
