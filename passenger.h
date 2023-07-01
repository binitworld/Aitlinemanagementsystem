#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
 public:
  Passenger(std::string name, std::string phone);
  std::string getName() const;
  std::string getPhone() const;

 private:
  std::string name_;
  std::string phone_;
};

#endif  // PASSENGER_H
