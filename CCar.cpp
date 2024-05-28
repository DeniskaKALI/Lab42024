#include "CCar.h"
#include <iostream>

CCar::CCar(double x, double y, double price, double speed, int year)
    : CVehicle(x, y, price, speed, year) {}

void CCar::display() const {
    std::cout << "Car - Coordinates: (" << x << ", " << y << "), Price: " << price << ", Speed: " << speed
        << ", Year: " << year << std::endl;
}