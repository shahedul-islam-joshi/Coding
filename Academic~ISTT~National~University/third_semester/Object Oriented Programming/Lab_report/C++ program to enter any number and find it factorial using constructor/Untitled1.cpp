#include <iostream>
using namespace std;

class Factorial {
private:
    int num;
    unsigned long long fact;

public:
    // Parameterized Constructor
    Factorial(int n) {
        num = n;
        fact = 1;

        if (n < 0) {
            cout << "Factorial of a negative number doesn't exist.";
        } else {
            for (int i = 1; i <= n; ++i) {
                fact *= i;
            }
            display();
        }
    }

    void display() {
        cout << "Factorial of " << num << " is: " << fact << endl;
    }
};

int main() {
    int input;
    cout << "Enter a positive integer: ";
    cin >> input;

    // Object creation triggers the constructor
    Factorial F(input);

    return 0;
}
