#include <iostream>
#include "flight.h"
#include "passenger.h"
#include "booking.h"

int main() {
  // Create a flight.
  Flight flight1("SFO", "LAX", 100);

  // Create a passenger.
  Passenger passenger1("John Doe", "123-456-7890");

  // Book a flight for the passenger.
  Booking booking1(flight1, passenger1);

  // Print the flight details.
  std::cout << flight1 << std::endl;

  // Print the passenger information.
  std::cout << passenger1 << std::endl;

  // Print the booking information.
  std::cout << booking1 << std::endl;

  return 0;
}
