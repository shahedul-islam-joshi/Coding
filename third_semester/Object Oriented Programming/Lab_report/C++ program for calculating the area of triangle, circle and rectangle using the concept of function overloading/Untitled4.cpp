#include <iostream>
using namespace std;

// Area of Circle
float area(float radius)
{
    return 3.14159 * radius * radius;
}

// Area of Rectangle
int area(int length, int breadth)
{
    return length * breadth;
}

// Area of Triangle
float area(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float radius = 5.0;
    int length = 10, breadth = 6;
    float base = 8.0, height = 4.0;

    cout << "Area of Circle: " << area(radius) << endl;
    cout << "Area of Rectangle: " << area(length, breadth) << endl;
    cout << "Area of Triangle: " << area(base, height) << endl;

    return 0;
}
