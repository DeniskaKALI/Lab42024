#ifndef CPLANE_H
#define CPLANE_H

#include "CVehicle.h"

class CPlane : public CVehicle {
private:
    double altitude;  // Высота
    int passengers;   // Количество пассажиров

public:
    CPlane(double x, double y, double price, double speed, int year, double altitude, int passengers);

    void setAltitude(double altitude);
    double getAltitude() const;

    void setPassengers(int passengers);
    int getPassengers() const;

    void display() const override;
};
#endif // CPLANE_H