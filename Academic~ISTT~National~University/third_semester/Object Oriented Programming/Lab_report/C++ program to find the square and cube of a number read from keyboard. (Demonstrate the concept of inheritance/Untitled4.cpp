#include <iostream>
using namespace std;

// Base class
class Number {
protected:
    int n;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> n;
    }
};

// Derived class
class Square : public Number {
public:
    void showSquare() {
        cout << "Square of " << n << " = " << n * n << endl;
    }
};

// Multilevel derived class
class Cube : public Square {
public:
    void showCube() {
        cout << "Cube of " << n << " = " << n * n * n << endl;
    }
};

int main() {
    Cube obj;

    obj.getNumber();
    obj.showSquare();
    obj.showCube();

    return 0;
}
