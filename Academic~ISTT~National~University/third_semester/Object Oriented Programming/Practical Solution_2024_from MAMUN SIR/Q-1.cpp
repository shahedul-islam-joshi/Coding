// A C++ program to find factorial of any number using constructor
#include<iostream>
using namespace std;
class factorial
{
    int n,i;
    double f;
    public:
    factorial()
    {
        cout << "Enter a number:";
        cin>>n;

    }
    void fat_cal()
    {
        f = 1;
        for (i = 1; i <= n; i++)
            f = f*i;
    }
    void display()
    {
        cout << "The result is :"<<f;
    }

};

int main()
{

        factorial obj(n);//declaring a obj
        obj.fat_cal();
        obj.display();
        return 0;
}
