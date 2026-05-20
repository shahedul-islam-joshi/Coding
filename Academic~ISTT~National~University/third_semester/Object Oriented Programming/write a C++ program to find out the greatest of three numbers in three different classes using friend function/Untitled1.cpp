#include <iostream>
using namespace std;

// Forward declaration of classes
class B;
class C;

class A {
    int numA;
public:
    void setData(int x) {
        numA = x;
    }
    friend void findGreatest(A, B, C);  // Friend function
};

class B {
    int numB;
public:
    void setData(int y) {
        numB = y;
    }
    friend void findGreatest(A, B, C);  // Friend function
};

class C {
    int numC;
public:
    void setData(int z) {
        numC = z;
    }
    friend void findGreatest(A, B, C);  // Friend function
};

// Friend function definition
void findGreatest(A a, B b, C c) {
    if (a.numA > b.numB && a.numA > c.numC) {
        cout << "Greatest number is: " << a.numA << endl;
    }
    else if (b.numB > c.numC) {
        cout << "Greatest number is: " << b.numB << endl;
    }
    else {
        cout << "Greatest number is: " << c.numC << endl;
    }
}

int main() {
    A objA;
    B objB;
    C objC;

    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    objA.setData(x);
    objB.setData(y);
    objC.setData(z);

    // Call friend function
    findGreatest(objA, objB, objC);

    return 0;
}

