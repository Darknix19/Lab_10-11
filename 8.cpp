#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void setRollNo(int r) {
        rollNo = r;
    }

    void displayStudentInfo() {
        displayInfo();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.setName("Ali");
    s.setAge(20);
    s.setRollNo(101);

    s.displayStudentInfo();

    return 0;
}
