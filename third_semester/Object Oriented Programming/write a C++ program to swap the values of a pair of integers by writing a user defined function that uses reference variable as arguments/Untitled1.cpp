#include <iostream>
using namespace std;

// Function to swap two integers using reference variables
void swapNumbers(int &a, int &b) {
    int temp = a;  // store value of a
    a = b;         // put b into a
    b = temp;      // put temp (old a) into b
}

int main() {
    int x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    // Call function to swap
    swapNumbers(x, y);

    cout << "After swapping:  x = " << x << ", y = " << y << endl;

    return 0;
}

