#ifndef CVEHICLE_H
#define CVEHICLE_H

class CVehicle {
protected:
    double x, y;  // Координаты
    double price; // Цена
    double speed; // Скорость
    int year;     // Год выпуска

public:
    CVehicle(double x, double y, double price, double speed, int year);
    virtual ~CVehicle() {}

    virtual void display() const = 0;

    void setCoordinates(double x, double y);
    void getCoordinates(double& x, double& y) const;

    void setPrice(double price);
    double getPrice() const;

    void setSpeed(double speed);
    double getSpeed() const;

    void setYear(int year);
    int getYear() const;
};

#endif // CVEHICLE_H

