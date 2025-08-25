#include<iostream>
using namespace std;
class _student{
    char name [30];
    int id;
    char department [10];
    float marks;
public:
    void getdata();
    void putdata();
};
void _student :: getdata (){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Department: ";
    cin>>department;
    cout<<"Enter Marks: ";
    cin>>marks;
}
void _student :: putdata (){
    cout<<"*******************************""\n";
    cout<<"*******************************""\n";
    cout<<"The name of the student is: "<<name<<"\n";
    cout<<"The ID of " <<name<< " is: " <<id<<"\n";
    cout<<"The Department of " <<name<< " is: "<<department<<"\n";
    cout<<"The marks " <<name<< " got: "<<marks<<"\n\n\n\n\n\n";
}
int main (){
    _student Student;
    Student.getdata();
    Student.putdata();
    return 0;
}

