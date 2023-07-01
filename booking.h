#ifndef BOOKING_H
#define BOOKING_H

#include "flight.h"
#include "passenger.h"

class Booking {
 public:
  Booking(Flight flight, Passenger passenger);
  Flight getFlight() const;
  Passenger getPassenger() const;

 private:
  Flight flight_;
  Passenger passenger_;
};

#endif  // BOOKING_H
