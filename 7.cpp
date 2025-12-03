#include <iostream>
using namespace std;

class Vehicle {
protected:
    double speed;

public:
    void setSpeed(double s) {
        speed = s;
    }

    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    void fuelType() {
        cout << "Fuel Type: Petrol" << endl;
    }
};

int main() {
    Car c;
    c.setSpeed(120);
    c.showSpeed();
    c.fuelType();

    return 0;
}
