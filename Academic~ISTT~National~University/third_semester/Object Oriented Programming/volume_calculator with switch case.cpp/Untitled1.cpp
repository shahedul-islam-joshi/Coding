#include <iostream>
using namespace std;

// Function prototypes
int volume(int s);                  // Cube
double volume(double r, int h);     // Cylinder
long volume(long l, int b, int h);  // Rectangular box

int main() {
    int choice;

    do {
        cout << "\n--- Volume Calculator ---\n";
        cout << "1. Cube\n";
        cout << "2. Cylinder\n";
        cout << "3. Rectangular Box\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int side;
                cout << "Enter side length of cube: ";
                cin >> side;
                cout << "Volume of cube = " << volume(side) << "\n";
                break;
            }
            case 2: {
                double radius;
                int height;
                cout << "Enter radius and height of cylinder: ";
                cin >> radius >> height;
                cout << "Volume of cylinder = " << volume(radius, height) << "\n";
                break;
            }
            case 3: {
                long length;
                int breadth, boxHeight;
                cout << "Enter length, breadth, and height of rectangular box: ";
                cin >> length >> breadth >> boxHeight;
                cout << "Volume of rectangular box = " << volume(length, breadth, boxHeight) << "\n";
                break;
            }
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Cube volume
int volume(int s) {
    return s * s * s;
}

// Cylinder volume
double volume(double r, int h) {
    return 3.14159 * r * r * h;
}

// Rectangular box volume
long volume(long l, int b, int h) {
    return l * b * h;
}
