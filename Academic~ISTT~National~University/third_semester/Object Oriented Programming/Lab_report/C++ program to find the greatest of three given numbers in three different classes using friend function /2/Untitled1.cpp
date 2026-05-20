#include <iostream>
using namespace std;

// Forward declarations to let the compiler know these classes exist
class ClassB;
class ClassC;

class ClassA {
private:
    int num1;
public:
    // Constructor using assignment in the body
    ClassA(int n) {
        num1 = n;
    }
    // Granting friendship to the external function
    friend void findGreatest(ClassA, ClassB, ClassC);
};

class ClassB {
private:
    int num2;
public:
    // Constructor using assignment in the body
    ClassB(int n) {
        num2 = n;
    }
    friend void findGreatest(ClassA, ClassB, ClassC);
};

class ClassC {
private:
    int num3;
public:
    // Constructor using assignment in the body
    ClassC(int n) {
        num3 = n;
    }
    friend void findGreatest(ClassA, ClassB, ClassC);
};

// Friend function definition to compare private data from all three classes
void findGreatest(ClassA a, ClassB b, ClassC c) {
    if (a.num1 >= b.num2 && a.num1 >= c.num3) {
        cout << "\nGreatest number is: " << a.num1 << endl;
    } else if (b.num2 >= a.num1 && b.num2 >= c.num3) {
        cout << "\nGreatest number is: " << b.num2 << endl;
    } else {
        cout << "\nGreatest number is: " << c.num3 << endl;
    }
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    ClassA obj1(x);
    ClassB obj2(y);
    ClassC obj3(z);

    findGreatest(obj1, obj2, obj3);

    return 0;
}

