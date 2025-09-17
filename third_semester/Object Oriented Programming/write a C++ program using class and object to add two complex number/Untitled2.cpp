#include <iostream>
using namespace std;

class Complex {
private:
    float real;   // Real part
    float imag;   // Imaginary part

public:
    // Function to input complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "\nEnter second complex number:" << endl;
    c2.input();

    // Adding two complex numbers using class function
    result = c1.add(c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}

