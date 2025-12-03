#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;

public:
    void setId(int i) {
        id = i;
    }

    void setSalary(double s) {
        if (s < 0) {
            cout << "Salary cannot be negative!" << endl;
        } else {
            salary = s;
        }
    }

    int getId() {
        return id;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee e;
    e.setId(101);
    e.setSalary(50000);

    cout << "Employee ID: " << e.getId() << endl;
    cout << "Employee Salary: " << e.getSalary() << endl;

    return 0;
}
