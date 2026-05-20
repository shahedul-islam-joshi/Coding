#include <iostream>
using namespace std;

class ClassB;   // Forward declaration

class ClassA
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }

    void showData()
    {
        cout << "Value in ClassA: " << a << endl;
    }

    friend void swapData(ClassA &, ClassB &);
};

class ClassB
{
private:
    int b;

public:
    void setData(int y)
    {
        b = y;
    }

    void showData()
    {
        cout << "Value in ClassB: " << b << endl;
    }

    friend void swapData(ClassA &, ClassB &);
};

void swapData(ClassA &objA, ClassB &objB)
{
    int temp = objA.a;
    objA.a = objB.b;
    objB.b = temp;
}

int main()
{
    ClassA objA;
    ClassB objB;

    objA.setData(10);
    objB.setData(20);

    cout << "Before swapping:\n";
    objA.showData();
    objB.showData();

    swapData(objA, objB);

    cout << "\nAfter swapping:\n";
    objA.showData();
    objB.showData();

    return 0;
}

