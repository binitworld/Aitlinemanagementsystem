#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

class Flight {
 public:
  Flight(std::string origin, std::string destination, int seats);
  std::string getOrigin() const;
  std::string getDestination() const;
  int getSeats() const;

 private:
  std::string origin_;
  std::string destination_;
  int seats_;
};

#endif  // FLIGHT_H
