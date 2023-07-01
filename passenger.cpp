#include "passenger.h"

Passenger::Passenger(std::string name, std::string phone)
    : name_(name), phone_(phone) {}

std::string Passenger::getName() const {
  return name_;
}

std::string Passenger::getPhone() const {
  return phone_;
}
