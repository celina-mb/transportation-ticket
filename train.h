#ifndef TRAIN.H
#define TRAIN.H
#include <iostream>
#include <string>
<<<<<<< HEAD
#using namespace std;


class train:public Ticket
=======
#include "ticket.h"
using namespace std;


class Train:public Ticket
>>>>>>> 7b6bd47c5e729f96c6f2dcc773426e08afdd8461
{
private:
    string travel_class;
public:
<<<<<<< HEAD
    
}

#endif
=======
    Train(string travel_class);
    
    void set_travel_class(string travel_class_){
        travel_class=travel_class_;
    }
};

#endif 
>>>>>>> 7b6bd47c5e729f96c6f2dcc773426e08afdd8461
