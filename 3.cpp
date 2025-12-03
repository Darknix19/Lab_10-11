#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;

public:
    void setName(string n) {
        name = n;
    }

    void setPrice(double p) {
        if (p < 0) {
            cout << "Price cannot be negative!" << endl;
        } else {
            price = p;
        }
    }

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }
};

int main() {
    Product p;
    p.setName("Laptop");
    p.setPrice(75000);

    cout << "Product Name: " << p.getName() << endl;
    cout << "Product Price: " << p.getPrice() << endl;

    return 0;
}
