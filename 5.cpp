#include <iostream>
using namespace std;

class Car {
private:
    double speed;
    double fuel;

public:
    void setSpeed(double s) {
        speed = s;
    }

    void setFuel(double f) {
        if (f < 0) {
            cout << "Fuel cannot be negative!" << endl;
        } else {
            fuel = f;
        }
    }

    double getSpeed() {
        return speed;
    }

    double getFuel() {
        return fuel;
    }
};

int main() {
    Car c;
    c.setSpeed(120);
    c.setFuel(50);

    cout << "Car Speed: " << c.getSpeed() << " km/h" << endl;
    cout << "Car Fuel: " << c.getFuel() << " liters" << endl;

    return 0;
}
