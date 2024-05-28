#include "CShip.h"
#include <iostream>

CShip::CShip(double x, double y, double price, double speed, int year, int passengers, const std::string& port)
    : CVehicle(x, y, price, speed, year), passengers(passengers), port(port) {}

void CShip::setPassengers(int passengers) {
    this->passengers = passengers;
}

int CShip::getPassengers() const {
    return passengers;
}

void CShip::setPort(const std::string& port) {
    this->port = port;
}

std::string CShip::getPort() const {
    return port;
}

void CShip::display() const {
    std::cout << "Ship - Coordinates: (" << x << ", " << y << "), Price: " << price << ", Speed: " << speed
        << ", Year: " << year << ", Passengers: " << passengers << ", Port: " << port << std::endl;
}