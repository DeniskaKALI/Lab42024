#ifndef CSHIP_H
#define CSHIP_H

#include "CVehicle.h"
#include <string>

class CShip : public CVehicle {
private:
    int passengers;      // Количество пассажиров
    std::string port;    // Порт приписки

public:
    CShip(double x, double y, double price, double speed, int year, int passengers, const std::string& port);

    void setPassengers(int passengers);
    int getPassengers() const;

    void setPort(const std::string& port);
    std::string getPort() const;

    void display() const override;
};

#endif // CSHIP_H

