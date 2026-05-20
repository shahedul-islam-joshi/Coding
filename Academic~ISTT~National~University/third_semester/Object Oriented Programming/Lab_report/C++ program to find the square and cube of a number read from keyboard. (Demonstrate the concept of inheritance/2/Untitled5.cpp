#include <iostream>
using namespace std;

// Base Class
class Number {
protected:
    int val;

public:
    void getNumber() {
        cout << "Enter an integer: ";
        cin >> val;
    }
};

// Derived Class
class Calculator : public Number {
public:
    void displayResults() {
        cout << "Square: " << (val * val) << endl;
        cout << "Cube:   " << (val * val * val) << endl;
    }
};

int main() {
    Calculator obj;
    obj.getNumber();      // Accessing base class method
    obj.displayResults(); // Accessing derived class method

    return 0;
}
