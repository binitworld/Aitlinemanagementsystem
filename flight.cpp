#include "flight.h"

Flight::Flight(std::string origin, std::string destination, int seats)
    : origin_(origin), destination_(destination), seats_(seats) {}

std::string Flight::getOrigin() const {
  return origin_;
}

std::string Flight::getDestination() const {
  return destination_;
}

int Flight::getSeats() const {
  return seats_;
}
