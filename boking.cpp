#include "booking.h"

Booking::Booking(Flight flight, Passenger passenger)
    : flight_(flight), passenger_(passenger) {}

Flight Booking::getFlight() const {
  return flight_;
}

Passenger Booking::getPassenger() const {
  return passenger_;
}
