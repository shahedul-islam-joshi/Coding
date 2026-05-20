#include <iostream>
using namespace std;

class B;
class C;   // Forward declarations

class A
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }

    friend void findGreatest(A, B, C);
};

class B
{
private:
    int b;

public:
    void setData(int y)
    {
        b = y;
    }

    friend void findGreatest(A, B, C);
};

class C
{
private:
    int c;

public:
    void setData(int z)
    {
        c = z;
    }

    friend void findGreatest(A, B, C);
};

void findGreatest(A objA, B objB, C objC)
{
    if (objA.a > objB.b && objA.a > objC.c)
        cout << "Greatest number is: " << objA.a << endl;
    else if (objB.b > objC.c)
        cout << "Greatest number is: " << objB.b << endl;
    else
        cout << "Greatest number is: " << objC.c << endl;
}

int main()
{
    A objA;
    B objB;
    C objC;

    objA.setData(15);
    objB.setData(42);
    objC.setData(28);

    findGreatest(objA, objB, objC);

    return 0;
}

