#include <iostream>
using namespace std;

class Factorial {
private:
    int num;
    long long fact; // to handle large factorial values

public:
    // Constructor
    Factorial(int n) {
        num = n;
        fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
    }

    // Function to display factorial
    void display() {
        cout << "Factorial of " << num << " is: " << fact << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Factorial f(n);  // object creation, constructor is called
    f.display();

    return 0;
}
