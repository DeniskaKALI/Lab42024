#include "CVehicle.h"

CVehicle::CVehicle(double x, double y, double price, double speed, int year)
    : x(x), y(y), price(price), speed(speed), year(year) {}

void CVehicle::setCoordinates(double x, double y) {
    this->x = x;
    this->y = y;
}

void CVehicle::getCoordinates(double& x, double& y) const {
    x = this->x;
    y = this->y;
}

void CVehicle::setPrice(double price) {
    this->price = price;
}

double CVehicle::getPrice() const {
    return price;
}

void CVehicle::setSpeed(double speed) {
    this->speed = speed;
}

double CVehicle::getSpeed() const {
    return speed;
}

void CVehicle::setYear(int year) {
    this->year = year;
}

int CVehicle::getYear() const {
    return year;
}