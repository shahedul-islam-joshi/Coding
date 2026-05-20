#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Function to display a complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Create complex numbers using constructor overloading
    Complex c1(3.5, 2.5);   // calls parameterized constructor
    Complex c2(1.6, 4.2);   // calls parameterized constructor

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Add two complex numbers
    Complex c3 = c1.add(c2);

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}

