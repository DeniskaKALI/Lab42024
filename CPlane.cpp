#include "CPlane.h"
#include <iostream>

CPlane::CPlane(double x, double y, double price, double speed, int year, double altitude, int passengers)
    : CVehicle(x, y, price, speed, year), altitude(altitude), passengers(passengers) {}

void CPlane::setAltitude(double altitude) {
    this->altitude = altitude;
}

double CPlane::getAltitude() const {
    return altitude;
}

void CPlane::setPassengers(int passengers) {
    this->passengers = passengers;
}

int CPlane::getPassengers() const {
    return passengers;
}

void CPlane::display() const {
    std::cout << "Plane - Coordinates: (" << x << ", " << y << "), Price: " << price << ", Speed: " << speed
        << ", Year: " << year << ", Altitude: " << altitude << ", Passengers: " << passengers << std::endl;
}
