#include "CPlane.h"
#include "CCar.h"
#include "CShip.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<CVehicle*> vehicles;
    int choice;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Add Plane\n";
        std::cout << "2. Add Car\n";
        std::cout << "3. Add Ship\n";
        std::cout << "4. Display All Vehicles\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            double x, y, price, speed, altitude;
            int year, passengers;
            std::cout << "Enter coordinates (x y): ";
            std::cin >> x >> y;
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cout << "Enter speed: ";
            std::cin >> speed;
            std::cout << "Enter year: ";
            std::cin >> year;
            std::cout << "Enter altitude: ";
            std::cin >> altitude;
            std::cout << "Enter passengers: ";
            std::cin >> passengers;
            vehicles.push_back(new CPlane(x, y, price, speed, year, altitude, passengers));
        }
        else if (choice == 2) {
            double x, y, price, speed;
            int year;
            std::cout << "Enter coordinates (x y): ";
            std::cin >> x >> y;
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cout << "Enter speed: ";
            std::cin >> speed;
            std::cout << "Enter year: ";
            std::cin >> year;
            vehicles.push_back(new CCar(x, y, price, speed, year));
        }
        else if (choice == 3) {
            double x, y, price, speed;
            int year, passengers;
            std::string port;
            std::cout << "Enter coordinates (x y): ";
            std::cin >> x >> y;
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cout << "Enter speed: ";
            std::cin >> speed;
            std::cout << "Enter year: ";
            std::cin >> year;
            std::cout << "Enter passengers: ";
            std::cin >> passengers;
            std::cout << "Enter port: ";
            std::cin >> port;
            vehicles.push_back(new CShip(x, y, price, speed, year, passengers, port));
        }
        else if (choice == 4) {
            for (const auto& vehicle : vehicles) {
                vehicle->display();
            }
        }
    } while (choice != 5);

    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}