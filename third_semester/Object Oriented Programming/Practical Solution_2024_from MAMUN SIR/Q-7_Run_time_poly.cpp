#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void displayArea() {
        cout << "Area of shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    void displayArea() override {
        cout << "Area of Circle: " << 3.1416 * radius * radius << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void displayArea() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void displayArea() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* s;

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 8);

    s = &c;
    s->displayArea();

    s = &r;
    s->displayArea();

    s = &t;
    s->displayArea();

    return 0;
}

