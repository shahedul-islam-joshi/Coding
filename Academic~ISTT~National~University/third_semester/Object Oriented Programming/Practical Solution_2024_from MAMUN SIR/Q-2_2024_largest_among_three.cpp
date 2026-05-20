// C++ program to find the largest among three numbers of three different classes
# include<iostream>
using namespace std;
class B; //forward Declaration
class C; //forward Declaration
class A
{
   int num1;
   public:
      void get_data(int a)
      {
          num1=a;
      }

      friend void Max(A a, B b, C c);   //Declaration of friend function.
};

class B
{
   int num2;
   public:
      void get_data(int b)
      {
          num2=b;
      }

      friend void Max(A a, B b, C c);  //Declaration of friend function.
};
class C
{
   int num3;
   public:
      void get_data(int c)
      {
          num3=c;
      }

      friend void Max(A a, B b, C c);  //Declaration of friend function.
};

void Max(A a, B b, C c)
{
    if(a.num1>b.num2){
        if(a.num1>c.num3)
                cout<<"Number-1 is largest"<<endl;
            else
                cout<<"Number-3 is largest"<<endl;
    }

    else{
        if(b.num2>c.num3)
            cout<<"Number-2 is largest"<<endl;
        else
            cout<<"Number-3 is largest"<<endl;
    }

}

int main()
 {
   A a;  //Object Declaration
   B b;  //Object Declaration
   C c;  //Object Declaration
   int x,y,z;
   cout<<"\nEnter a Number:";
   cin>>x;
   a.get_data(x);
   cout<<"\nEnter another Number:";
   cin>>y;
   b.get_data(y);
   cout<<"\nEnter another Number:";
   cin>>z;
   c.get_data(z);
   Max(a,b,c);

   return 0;
 }
