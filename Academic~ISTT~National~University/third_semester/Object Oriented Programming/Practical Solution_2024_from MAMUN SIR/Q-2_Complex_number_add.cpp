// C++ program to perform addition of two complex numbers
# include<iostream>
using namespace std;

class Complex
{
   int real,imag;
   public:

     Complex(int r,int i)  //Parameterized constructor for different values.
       {
         real=r;
         imag=i;
       }

      void show()
       {
         cout<<"\n The sum of two complex nos. is "<<real<<"+"<<imag<<"i.";
       }
      Complex addComplex(Complex,Complex);   //Declaration of friend function.
};

 Complex Complex::addComplex(Complex obj1,Complex obj2)
  {
    Complex obj3;
    obj3.real=obj1.real+obj2.real;
    obj3.imag=obj1.imag+obj2.imag;
    return obj3;
  }

int main()
 {

   int a,b;
   cout<<"\n\t\tPROGAM TO PERFORM ADDITION OF TWO COMPLEX NUMBERS USING CONSTRUCTOR\t\t\n";
   cout<<"\n\tEnter the value of real and imaginary part of number 1:\n\t";
   cin>>a>>b;
   Complex c1(a,b);  //Calling parameterized constructor.
   cout<<"\n\tEnter the real and imaginary part of number 2:\n\t";
   cin>>a>>b;
   Complex c2(a,b);  //Calling parameterized constructor for different values.
   Complex c3=c1.addComplex(c1,c2);
   c3.show();
   return 0;

 }
