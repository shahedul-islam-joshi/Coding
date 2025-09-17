#include <iostream>
using namespace std;

// Class definition
class Addition {
    int num1, num2; // Data members

public:
    // Function to take input
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    // Function to calculate and display sum
    void addNumbers() {
        int sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Addition obj;   // Create object of Addition class
    obj.input();    // Call input function
    obj.addNumbers(); // Call add function
    return 0;
}

