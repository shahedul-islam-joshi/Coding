// C++ program to store and display the information of a student
# include<iostream>
using namespace std;

class Employee
{
   char name[50],id[10],department[10];
   int salary;
   public:
      void get_data()
      {
          cout<<"Enter name:";
          cin>>name;
          cout<<"Enter Id :";
          cin>>id;
          cout<<"Enter department:";
          cin>>department;
          cout<<"Enter salary:";
          cin>>salary;
     }

      void display(int sa_th){
         if(salary>sa_th)
         {
         cout<<"Name:"<<name<<endl;
         cout<<"Id:"<<id<<endl;
         cout<<"Department:"<<department<<endl;
         cout<<"Salary:"<<salary<<endl;
         }

      }
};


int main()
 {
   int n,i,sa_th;
   Employee e[10];//array of objects
   cout<<"Enter How Many Employee:";
   cin>>n;
   for(i=0;i<n;i++)
   {
       e[i].get_data();
   }
   cout<<"Enter Threshold Value of Salary:";
   cin>>sa_th;
   for(i=0;i<n;i++)
   {
       e[i].display(sa_th);
   }
   return 0;
 }
