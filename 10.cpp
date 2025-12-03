#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;

public:
    void setSalary(double s) {
        salary = s;
    }

    void displaySalary() {
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    void bonus() {
        cout << "Bonus is 5000" << endl;
    }
};

int main() {
    Manager m;
    m.setSalary(50000);
    m.displaySalary();
    m.bonus();

    return 0;
}
