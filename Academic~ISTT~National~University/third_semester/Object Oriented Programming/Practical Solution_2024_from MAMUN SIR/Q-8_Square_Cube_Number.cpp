#include <iostream>
using namespace std;

// Base class
class Number {
protected:
    int num;

public:
    // Parameterized constructor
    Number(int n) {
        num = n;
    }
};

// Derived class Square
class Square : public Number {
public:
    Square(int n) : Number(n) {}

    int getSquare() {
        return num * num;
    }
};

// Derived class Cube
class Cube : public Number {
public:
    Cube(int n) : Number(n) {}

    int getCube() {
        return num * num * num;
    }
};

int main() {
    int value;

    cout << "Enter an integer: ";
    cin >> value;

    Square s(value);
    Cube c(value);

    cout << "Square of " << value << " = " << s.getSquare() << endl;
    cout << "Cube of " << value << " = " << c.getCube() << endl;

    return 0;
}
