#include "Ticket.h"
#include "Bus.h"
#include "Train.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Crear tickets
    Ticket base(100, 10.0);
    BusTicket bus(101, 10.0, 5);
    TrainTicket train(102, 20.0, "executive");

    // Modificar valores usando setters
    base.setBasePrice(12.5);
    bus.setNumberOfStops(3);
    train.setTravelClass("standard");

    // Mostrar información
    cout << fixed << setprecision(2);

    cout << "--- BASE TICKET ---\n";
    cout << "ID: " << base.getTicketID() << endl;
    cout << "Final Price: $" << base.calculatePrice() << "\n\n";

    cout << "--- BUS TICKET ---\n";
    cout << "ID: " << bus.getTicketID() << endl;
    cout << "Stops: " << bus.getNumberOfStops() << endl;
    cout << "Final Price: $" << bus.calculatePrice() << "\n\n";

    cout << "--- TRAIN TICKET ---\n";
    cout << "ID: " << train.getTicketID() << endl;
    cout << "Class: " << train.getTravelClass() << endl;
    cout << "Final Price: $" << train.calculatePrice() << endl;

    return 0;
}
