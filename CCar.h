#ifndef CCAR_H
#define CCAR_H

#include "CVehicle.h"

class CCar : public CVehicle {
public:
    CCar(double x, double y, double price, double speed, int year);

    void display() const override;
};

#endif // CCAR_H