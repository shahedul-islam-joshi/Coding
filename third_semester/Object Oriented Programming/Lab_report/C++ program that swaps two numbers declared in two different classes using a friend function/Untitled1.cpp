#include <iostream>
using namespace std;

class B;   // Forward declaration of class B

class A {
private:
    int numA;   // a number in class A
public:
    void setNumber(int a) {
        numA = a;
    }
    void showNumber() {
        cout << "Number in A = " << numA << endl;
    }

    // declare friend function
    friend void swapNumbers(A &x, B &y);
};

class B {
private:
    int numB;   // a number in class B
public:
    void setNumber(int b) {
        numB = b;
    }
    void showNumber() {
        cout << "Number in B = " << numB << endl;
    }

    // declare friend function
    friend void swapNumbers(A &x, B &y);
};

// Friend function definition
void swapNumbers(A &x, B &y) {
    int temp = x.numA;
    x.numA = y.numB;
    y.numB = temp;
}

int main() {
    A objA;
    B objB;

    int a, b;

    // Take input from user
    cout << "Enter a number for A: ";
    cin >> a;
    cout << "Enter a number for B: ";
    cin >> b;

    objA.setNumber(a);
    objB.setNumber(b);

    cout << "\nBefore swapping:" << endl;
    objA.showNumber();
    objB.showNumber();

    // Call friend function
    swapNumbers(objA, objB);

    cout << "\nAfter swapping:" << endl;
    objA.showNumber();
    objB.showNumber();

    return 0;
}
